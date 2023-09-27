#include "main.h"
/**
 * helper function that uses binary search to find sqrt
 * @n: input
 * @i: start of search
 * @j: end of search
 * Return: sqrt
 */
int helper(int n, int i, int j)
{
        if (i > j)
        {
                return (-1);
        }
        int mid = i + (j - i) / 2;
        int square = mid * mid;

        if (n == square)
        {
                return (mid);
        }
        else if (square < n)
        {
                return (helper(n, mid + 1, j));
        }
        else
        {
                return (helper(n, i, mid + 1));
        }
}
