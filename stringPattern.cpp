#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

//Given a pattern and a string, check if the string can be mapped bijectively to that
//pattern. see LeetCode problem 290.


vector<string> split(string str)
{
    stringstream ss(str);
    vector<string> ret;
    string word;
    while(getline(ss,word,' '))
    {
        ret.push_back(word);
    }
    return ret;
}

class Solution {
public:
    bool wordPattern(string pattern, string str) {
    vector<string> vec = split(str);
    if(vec.size() != pattern.length())
    {
        return 0;
    }
    unordered_map<char,string> map;
    unordered_map<string,int>  mapInj;
    for(int i = 0; i < vec.size(); i++)
    {
        if(map[pattern[i]].empty() && mapInj[vec[i]] == 0)    
        {
            map[pattern[i]] = vec[i];
            mapInj[vec[i]] = 1;
        }
        else
        {
            if(map[pattern[i]] != vec[i])
            {
                return 0;
            }
        }
    }
    return 1;
    }
};
