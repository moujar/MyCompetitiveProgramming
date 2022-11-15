#include <iostream>
#include <vector>
#include<math.h>
using namespace std;

bool isprime(int n)
{
    if(n == 2)
        return true;
    if(n < 2)
        return false;
    for (int i = 3 ; i*i <= n ;i+=2)
    {
        if(n%i == 0)
            return false;
    }
}

// o(n * sqrt(n))
int countPrimesInRange(int n)
{
    int count = 0;
    for (int i = 1;i <= n; ++i)
    {
        if(isprime(i))
            count++;
    }
    return count;
}

// o(n * long(n))
int countPrimesInRange(int n)
{
    vector<bool> isPrime(n+1,true);

    isPrime[0] = isPrime[1]=0;
    for (int i = 2; i*i <= n; ++i)
    {
        if(isPrime[i])
        {
            for(int j = i*2 ; j <= n ; j+= i)
                isPrime[j] = 0;
        }
    }
    int count = 0;
    for (int i = 0; i < (int)isPrime.size(); i++)
    {
        if(isPrime[i])
            count++;
    }
    return count;
}

  