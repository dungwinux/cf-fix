#include <cstdio>
#include <cmath>

// Check prime
bool isPrime(long n)
{
    if (n < 2 || (n % 2 == 0 && n > 2))
        return false;
    else
    {
        for (long i = 3; i <= sqrt(n); i += 2)
            if (n % i == 0)
                return false;
        return true;
    }
}

int main()
{
    long arr[100000];
    long n, max, c = 0;
    scanf("%ld", &n);
    for (long i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
    }
    for (long i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
            printf("%ld ", arr[i]);
    }
}