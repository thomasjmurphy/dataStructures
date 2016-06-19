class Compare
{
    public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int findKthLargest(vector<int>& nums, int k) 
{
    vector<int> ret;
    priority_queue<int, vector<int>, Compare > q;
    for(int i : nums)
    {
        q.push(i);
        if(q.size() > k){q.pop();}
    }
return q.top();
}
