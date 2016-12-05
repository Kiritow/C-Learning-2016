/// 神奇的C++！从群里面看到的C++实现管道(pipe)！

#include <tuple>
#include <string>
#include <typeinfo>
#include <iostream>
#include <type_traits>


// template<typename F,std::size_t I,typename ...Argv>
// constexpr auto pipe_impl(F&& f,Argv&&... argv)
// {
// 	return (I+1 == std::tuple_size<typename std::remove_reference<F>::type>::value) ?
// 	std::get<I>(std::forward<F>(f))(std::forward<Argv>(argv)...) :
// 	pipe_impl<F,I+1,Argv...>(std::forward<F>(f),std::get<I>(std::forward<F>(f))(std::forward<Argv>(argv)...)) ;
// }


template<typename F,std::size_t I,typename ...Argv>
constexpr auto pipe_impl(F&& f,Argv&&... argv) -> typename std::enable_if<I<=std::tuple_size<typename std::remove_reference<F>::type>::value-2,decltype(std::get<I>(std::forward<F>(f))(std::forward<Argv>(argv)...))>::type
{
	return pipe_impl<F,I+1,Argv...>(std::forward<F>(f),std::get<I>(std::forward<F>(f))(std::forward<Argv>(argv)...)) ;
}

template<typename F,std::size_t I,typename ...Argv>
constexpr auto pipe_impl(F&& f,Argv&&... argv) -> typename std::enable_if<I==std::tuple_size<typename std::remove_reference<F>::type>::value-1,decltype(std::get<I>(std::forward<F>(f))(std::forward<Argv>(argv)...))>::type
{
	return std::get<I>(std::forward<F>(f))(std::forward<Argv>(argv)...) ;
}

template<typename F,typename ...Argv>
constexpr auto pipe(F&& f,Argv&&... argv)
{
	return pipe_impl<F,0,Argv...>(std::forward<F>(f),std::forward<Argv>(argv)...) ;
}




template<typename F1,typename F2>
constexpr auto operator | (F2&& f2,F1&& f1)
{
	return std::make_tuple(std::forward<F2>(f2),std::forward<F1>(f1));
}

template<typename F1,typename F2>
constexpr auto operator | (std::tuple<F2>&& f2,F1&& f1)
{
	return std::tuple_cat(std::forward<F2>(f2),std::forward<F1>(f1));
}

template<typename F1,typename ...F2>
constexpr auto operator | (std::tuple<F2...>&& f2,F1&& f1)
{
	return std::tuple_cat(std::forward<std::tuple<F2...>>(f2),std::make_tuple(std::forward<F1>(f1)));
}

int main()
{
	auto v = [](int x){ return x+1; }
			|[](int x){ return x*x; }
			|[](int x){ return x-2; } ;

	std::cout << pipe(v,1) << std::endl ;

	return 0;
}
