class Solution {
public:

//LeetCode problem 121 buy sell stock 1
    int maxProfit(vector<int>& prices) 
    {
        if(prices.size() == 0){return 0;}
        int maxProfit = INT_MIN;
        int min = INT_MAX;
        for(int i =0;i<prices.size(); i++)
        {
            if(prices[i] < min){min = prices[i];}
            if(prices[i] - min > maxProfit){maxProfit = prices[i] - min;}
        }
        return maxProfit;
    }
};

//LeetCode problem 122 buy sell stock 2
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0){return 0;}
        int total = 0;
        for(int i = 0;i<prices.size()-1;i++)
        {
            if(prices[i] < prices[i+1]){total += prices[i+1]-prices[i];}
        }
        return total;
    }
};
