/// NOTICE: This Function Only Encode Base64 Chars. (+ and =) --> (%2B %3D)
string URLEncode(string inc)
{
    char* p=(char*)inc.c_str();
    int sz=inc.size();
    string ans;
    for(int i=0;i<sz;i++)
    {
        if(p[i]=='+')
        {
            ans.append("%%2B");
        }
        else if(p[i]=='=')
        {
            ans.append("%%3D");
        }
        else
        {
            ans.push_back(p[i]);
        }
    }
    return ans;
}
