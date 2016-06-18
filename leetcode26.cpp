int removeDuplicates(vector<int>& nums) 
{
    int offset = 0;
    for(int i = 1;i<nums.size();i++)
    {
        if(nums[i] == nums[i-1])
        {
            offset++;
        }
        nums[i-offset] = nums[i];
    }
    return nums.size()-offset;
}
