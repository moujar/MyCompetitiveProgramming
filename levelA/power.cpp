#include <iostream>


// o(log(n) base 2)
// 10 ^ 16 = (10 ^ 8) * 10
// 10 ^ 17 = (10 ^ 8) * 10

int power(int a, int n)
{
    if(n == 0)
        return 1;
    int power_ = power(a,n/2);
    power_ *= power_;
    if (n%2)
        power_*=a;

}

// input a and n
// output a^1 + a^2 + ... + a^n

// a^1 + a^2 + a^3 + a^4 + a^5 + a^6 = (a^1 + a^2 + a^3)+((a^1 * a^3) + (a^2 * a^3) + (a^1 * a^2 * a^3)))
//                                   = (a^1 + a^2 + a^3) + (a^3)(a^1 + a^2 + a^1 * a^2)
//                                   = (a^1 + a^2 + a^3) + (a^3)(a^1 + a^2 + a^3)
//                                   = (a^3 + 1) * (a^1 + a^2 + a^3)
//                                   = (a^1 + a^2 + a^3) * (1 + a^1 + a^2 + a^3 - (a^1 + a^2))


// a^1 + a^2 + a^3 + a^4 + a^5 + a^6 + a^7 = a + a*(a^1 + a^2 + a^3 + a^4 + a^5 + a^6)

int SumPower(int a, int n)
{
    if (k == 0)
        return 0;
    if(k%2)
        return a + (1 + SumPower(a, n-1));
    int base;
    base = SumPower(a,n/2);
    return base*(1+base - SumPower(a, n/2 -1));
}

