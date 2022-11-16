#include<iostream>

int gcd (int a, int b)
{
    if (a == 0)
        return b;
    while (b)
    {
        if (b > a)
            a -=b;
        else
            b-=a;
    }
    return a;
}

// if a%n = b%n = 0 then (a+b)%n = 0 and (a-b)%n = 0 as ==> (a+b)%n = (a%n+b%n)%n = 0
int gcd(int a, int b)
{
    if(a == 0) 
        return b;
    return gcd(b, a%b);
}