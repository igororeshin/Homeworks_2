#include <stdio.h>
#include <string.h>

int TryParse(char num[], bool &success)
{
    success = true;
    int i = 0;
    int j = 0;
    while ((success == true) && (i < strlen(num)))
    {
        if ((num[i] >= '0') && (num[i] <= '9'))
        {
            j = j*10 + (num[i] - '0');
            i++;
        }
        else
        {
            success = false;
        }
    }
    return j;
}

int main()
{
    char mas[] = "123458";
    bool check;
    int y = TryParse(mas, check);
    if (check)
    {
        printf("%d", y);
    }
    else
    {
        printf("В массиве присутствуют не цифры!");
    }
}
