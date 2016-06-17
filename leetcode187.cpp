vector<string> findRepeatedDnaSequences(string s) {
        
        
            vector<string> dups;
            if(s.length() == 10){return dups;}
    unordered_map<string,int> map;
    string test (s.begin(),s.begin()+10);
    map[test]++;
    for(int i = 10;i<s.length();i++)
    {
        test.erase(test.begin());
        test+=s[i];
        map[test]++;
        if(map[test] == 2){dups.push_back(test);}
        
    }
   return dups;
}
