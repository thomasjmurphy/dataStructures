#include <vector>
using namespace std;

//Count number of primes less than n

int countPrimes(int n) 
{
    if(n == 1){return 0;}
    vector<int> sieve = {2};
    int count = 0;
    for(int i = 3; i< n; i++)
    {
        for(int j : sieve)
        {
            if(i % j == 0)
            {
                break;
            }
            if(j*j > i)
            {
                sieve.push_back(i);
                break;
            }
        }
    }
    return sieve.size();
}
