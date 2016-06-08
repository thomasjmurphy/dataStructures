#include <string>
#include <map>
using namespace std;


//Reverse the vowels in a string Leetcode problem 345

string reverseVowels(string s) 
{
  if(s.length() <= 1){return s;}
  string t = s;
  map<char,int> map;
  map['a'] = 1; map['e'] = 1; map['i'] = 1; map['o'] = 1; map['u'] = 1;
  map['A'] = 1; map['E'] = 1; map['I'] = 1; map['O'] = 1; map['U'] = 1;
  int left = 0;
  int right = t.length()-1;
  while(left < right)
  {
      while(map[t[left]] != 1 && left < right){left++;}
      while(map[t[right]]!= 1 && left < right){right--;}
      if(map[t[left]] == 1 && map[t[right]] == 1 && left < right){swap(t[left],t[right]);}
      left++; right--;
  }
  return t;
        
        
        
        
    }
