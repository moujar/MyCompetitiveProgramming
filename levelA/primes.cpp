#include <iostream>
#include<math.h>
using namespace std;
typedef long long ll;
// o(n)
bool isprime(ll n)
{
    if(n == 2)
        return true;
    if(n < 2 || n%2 == 0)
        return false;
    for (int i = 3 ; i < n;i+=2)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}


// o(n)
bool isprime(ll n)
{
    if(n == 2)
        return true;
    if(n < 2)
        return false;
    for (int i = 2 ; i < n;i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

// if n = a*b and a <= b then a <= sqrt(n) and b >= sqrt(n)
// n(sqrt(n)* ?

bool isprime(ll n)
{
    if(n == 2)
        return true;
    if(n < 2)
        return false;
    for (int i = 3 ; i <= sqrt(n);i+=2)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

// i <= sqrt(n) 
// i * i <= n


bool isprime(ll n)
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