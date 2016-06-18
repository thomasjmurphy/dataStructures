bool square(int n)
{
    if(n == 1){return 1;}
    for(int i=2;i*i<=n;i++)
    {
        if(i*i == n){return 1;}
    }
    return 0;
}

int minIndex(vector<int> &num)
{
    int min = INT_MAX;
    int minIndex = 0;
    int s = 1;
    int i = 0;
    while(num.size() >= s*s)
    {
        i = num.size() - s*s;
        if(num[i] < min){min = num[i]; minIndex = i;}
        s++;
    }
    return minIndex;
}

int numSquares(int n)
{
    if(n == 1){return 1;}
    if(n == 2){return 2;}
    vector<int> num = {1};
    for(int i=2;i<=n;i++)
    {
        if(square(i))
        {
            num.push_back(1);
        }
        else
        {
            num.push_back(num[minIndex(num)]+1); 
            //cout << num[minIndex(num)]+1;
        }
    }
    return  num[n-1];
}
