#include <iostream>
#include <cstdlib>
#include "stack.h"

using namespace std ;

void Initial(STACK *ps)
{
    ps->count=0;
}

int Empty(STACK *ps)
{
    if (ps->count==0)
        return 1;
    else
        return 0;
}

int Full(STACK *ps)
{
    if (ps->count==N)
        return 1;
    else
        return 0;
}

void Add(STACK *ps)
{
    ps->arr[ps->count]=rand()%100;
    ps->count++;
}

void Del(STACK *ps)
{
    ps->count--;
}

void Show(STACK *ps)
{
    for ( int i=0;i<ps->count;i++)
        cout << ps->arr[i] << " ";
}
