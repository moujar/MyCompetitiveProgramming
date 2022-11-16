#include<istream>


// Very important function 

// O(lon(n) base p)
int fact_N_primePower(int n, int p)
{
    int pow = 0;
    for (int i = 0; i <= n ; i = i*p)
        pow+=n/i;
    return pow;
}

