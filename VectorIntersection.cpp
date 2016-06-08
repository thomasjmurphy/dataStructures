#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std; 
 
 //Finding the intersection of 2 vectors
 //The first function gives the set intersection i.e. it removes duplicates
 //The second function gives the intersection with duplicates. For example, 
 //if there are 2 3's in the first vector and 4 3's in the second, then the
 //intersection vector will contain 2 3's.
 
 vector<int> intersectionUnique(vector<int>& nums1, vector<int>& nums2) 
 {
    vector<int> vec;
    unordered_map<int,int> map;
    for(int i =0;i<nums1.size();i++)
    {
        if(map[nums1[i]] == 0) {map[nums1[i]]++;}
    }
    for(int i = 0;i<nums2.size();i++)
    {
        if(map[nums2[i]] == 1)
        {
            map[nums2[i]]--;
            vec.push_back(nums2[i]);
        }
    }
    return vec;
}

vector<int> intersectionDuplicates(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
    unordered_map<int,int> map;
    for(int i =0;i<nums1.size();i++)
    {
        map[nums1[i]]++;
    }
    for(int i = 0;i<nums2.size();i++)
    {
        if(map[nums2[i]] >= 1)
        {
            map[nums2[i]]--;
            vec.push_back(nums2[i]);
        }
    }
    return vec;
        
    }
