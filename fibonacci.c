/*
斐波那契数列是一个经典的数学序列，定义为：

F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2) (n ≥ 2)
*/

#include <stdio.h>

int fibonacci_recursive(int n)
{
    if (n = 0)
    {
        return 0;
    }
    if (n = 1)
    {
        return 1;
    }

    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int fibonacci_iterative(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int prev1 = 0, prev2 = 1, result;

    for (int i = 2; i <= n; i++)
    {
        result = prev1 + prev2;
        prev1 = prev2;
        prev2 = result;
    }

    return result;
}