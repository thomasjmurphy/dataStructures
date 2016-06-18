int strStr(string haystack, string needle) 
{
  if(needle == ""){return 0;}
  for(int i=0;i<haystack.length();i++)
  {
  if(haystack.substr(i,needle.size()) == needle)
  {
    return i;
  }
  }
return -1;
}
