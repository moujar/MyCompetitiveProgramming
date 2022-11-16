#include <iostream>


// Fibonacci Number f(n) = f(n-1)+f(n-2) and  f(1) = 1


int fib(int n)
{
    if (n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}

