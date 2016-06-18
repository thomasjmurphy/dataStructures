vector<int> productExceptSelf(vector<int>& nums) 
{
  vector<int> before = {1};
  vector<int> after  = {1};
  int beforeProd = 1;
  int afterProd  = 1;
  for(int i = 1;i<nums.size();i++)
  {
    beforeProd *= nums[i-1];
    afterProd  *= nums[nums.size()-i];
    before.push_back(beforeProd);
    after.push_back(afterProd);
  }
    for(int i = 0;i<nums.size();i++)
    {
        nums[i] = before[i]*after[nums.size()-1-i];
    }
  return nums;
    
}
