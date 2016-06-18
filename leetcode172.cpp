int trailingZeroes(int n) 
{
  int sum = 0;
  for(int i=1;i<14;i++)
  {
    sum += n/((int)pow(5,i));
  }
  return sum;
}
