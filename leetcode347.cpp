class Compare
{
public:
    bool operator()(pair<int,int> n1, pair<int,int> n2)
    {
        return n1.second < n2.second;
    }
};


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
{
    unordered_map<int,int> map;
    for(int i = 0;i<nums.size();i++)
    {
        map[nums[i]]++;
    }
    
    priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> q;
    for(unordered_map<int,int>::iterator it = map.begin(); it != map.end(); it++)
    {
        q.emplace(pair<int,int>(it->first,it->second));
    }
    vector<int> ret;
    for(int i = 0;i<k;i++)
    {
        ret.push_back(q.top().first);
        q.pop();
    }
    return ret;
}
};
