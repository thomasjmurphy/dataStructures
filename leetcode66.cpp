bool allNines(vector<int> &digits)
{
    for(int i=0;i<digits.size();i++)
    {
        if(digits[i] != 9){return 0;}
    }
    return 1;
}
void carry(vector<int> &digits)
{
    for(int i=digits.size()-1;i>=0;i--)
    {
        if(digits[i] == 10)
        {
            digits[i] = 0;
            digits[i-1]++;
        }
    }
}

vector<int> plusOne(vector<int>& digits) 
{
    if(allNines(digits))
    {
        digits.push_back(0);
        digits[0] = 1;
        for(int i=1;i<digits.size()-1;i++)
        {
            digits[i] = 0;
        }
    }
    else
    {
        digits[digits.size()-1]++;
    }
    carry(digits);
    return digits;   
}
