int integerBreak(int n) 
{
  if(n ==2){return 1;}
  if(n ==3){return 2;}
  vector<int> vec = {0,0,1,2,4,6,9};
  for(int i = 7;i<=n;i++)
  {
    vec.push_back(max(2*vec[i-2],3*vec[i-3]));
  }
  return vec[n];
}
