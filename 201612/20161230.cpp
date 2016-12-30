struct utf8word
{
    char data[8];
};

typedef vector<utf8word> utf8str;

utf8str ConvertToUTF8Str(const char* incstr)
{
    utf8str kstr;
    char ch=0;
    while(1)
    {
        ch=*incstr;
        if(ch==0) break;

        int len=1;
        for(;incstr[len]!=0&&((incstr[len]&0xC0)==0x80);++len);

        utf8word wd;
        memset(wd.data,0,8);
        memcpy(wd.data,incstr,len);
        kstr.push_back(wd);

        incstr=incstr+len;
    }

    return kstr;
}

char* ConvertToCStr(utf8str str,char* dst,int sz)
{
    memset(dst,0,sz);
    for(auto& wd:str)
    {
        strcat(dst,wd.data);
    }
    return dst;
}
