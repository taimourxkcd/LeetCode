

// This gives TLE
#include <bits/stdc++.h>

#define MOD 1000000007

int countStairs(int nStairs, int i)
{

    if (i == nStairs)
        return 1;

    if (i >= nStairs)
        return 0;

    return (countStairs(nStairs, i + 1) + countStairs(nStairs, i + 2)) % MOD;
}

int countDistinctWays(int nStairs)
{
    //  Write your code here.

    return countStairs(nStairs, 0);
}