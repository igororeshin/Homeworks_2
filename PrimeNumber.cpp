#include <stdio.h>

bool isPrime(int x)
{
    int i = 2;
    while (i*i <= x)
    {
        if(x%i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    int a = 11;
    bool y = isPrime(a);
    printf("%d", y);
}
