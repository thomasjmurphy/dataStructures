Explanation:
First we find the index of the pivot element which we define to be the smallest number. Since the array is sorted 
and then rotated, each element not at the endpoints must be either greater than the rightmost element or less than
the leftmost element. If neither of these occurs then the rotation is trivial and we take the pivot as the leftmost 
element. If one of the former occurs, we truncate and recurse.


int findPiv(vector<int>& nums)
{
    if(nums.size() <= 1)
    {
        return 0;
    }
    
    int n = nums.size();
    int m = n/2;
    int L = 0;
    int R = n-1;
    while(L < R)
    {
        if(nums[m] > nums[R])
        {
            L = m+1;
            m = L + (R-L)/2;
        }
        else if(nums[m] < nums[L])
        {
            R = m;
            m = L + (R-L)/2;
        }
        else return L;
    }
    return L;
}



class Solution {
public:
    int search(vector<int>& nums, int target) {
    if(nums.size() == 0){return -1;}
    int piv = findPiv(nums);
    vector<int>::iterator low1 = lower_bound(nums.begin(),nums.begin()+piv,target);
    vector<int>::iterator low2 = lower_bound(nums.begin()+piv,nums.end(),target);
    if(*low1 == target)
    {
        return low1 - nums.begin();
    }
    else if(*low2 == target)
    {
        return low2 - nums.begin();
    }
    else return -1;
}
};
