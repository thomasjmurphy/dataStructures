#include <string>
#include <unordered_map>
using namespace std;

//Check if two strings are isomorphic see LeetCode problem 205

bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
        {
            return 0;
        }
        unordered_map<char,char> map;
        unordered_map<char,int>  mapInj;
        for(int i = 0;i<s.length();i++)
        {
            if(map[s[i]] == 0 && mapInj[t[i]] == 0){map[s[i]] = t[i]; mapInj[t[i]] = 1;}
            else{if(map[s[i]] != t[i]){return 0;}}
        }
        return 1;
    }
