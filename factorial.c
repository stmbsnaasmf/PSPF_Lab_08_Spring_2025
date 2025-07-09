#include <stdio.h>

int factorial(int n)
{
    if (1 == n || 0 == n)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));

    return 0;
}
