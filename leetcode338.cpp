int count(int n)
{
    int count = 0;
    while(n >= 1)
    {
        if((n & 1) == 1){count++;}
        n = (n >> 1);
    }
    return count;
}
vector<int> countBits(int num) 
{
    vector<int> ret;
    for(int i = 0;i<=num;i++)
    {
        ret.push_back(count(i));
    }
    return ret;
}
