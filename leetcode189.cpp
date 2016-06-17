void rotate(vector<int>& vec, int k) {
        k = k % vec.size();
        if(vec.size() == 1){return;}
        if(k == 0){return;}
    vector<int> temp;
    for(int i = vec.size()-k;i<vec.size();i++)
    {
        temp.push_back(vec[i]);
    }
    for(int i = vec.size()-1;i >= k; i--)
    {
        vec[i] = vec[i-k];
    }
    for(int i =0 ;i<k;i++)
    {
        vec[i] = temp[i];
    }
    
}
