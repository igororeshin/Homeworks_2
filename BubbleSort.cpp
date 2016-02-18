#include <stdio.h>

int main()
{
    const int MAX_SIZE = 4;
    int a[MAX_SIZE] = {1, 7, 0, 5};
    for (int i = 0; i < MAX_SIZE-1; i++)
    {
        for (int j = 0; j < MAX_SIZE-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", a[i]);
    }
}
