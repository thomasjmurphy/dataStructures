vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map;
        vector<int> ret;
        for(int i=0;i<nums.size();i++)
        {
            if(map[nums[i]] > 0 && map[nums[i]]-1 != i)
            {
                ret.push_back(i);
                ret.push_back(map[nums[i]]-1);
                break;
            }
            map[target-nums[i]] = i+1;
        }
        return ret;
    }
