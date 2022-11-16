#include <iostream>
#include <vector>
#include<math.h>
using namespace std;
typedef long long ll ;


//O(sqrt(n))

vector<ll> generate_divisors(ll n)
{
    vector<ll> v;
    ll i;
    for (i = 1;i*i < n;i++)
        if(n%i == 0)
            v.push_back(i),v.push_back(n/i);
    if(i*i == n)
        v.push_back(i);
    return v;
}

