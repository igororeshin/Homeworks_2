#ifndef _STACK_H
#define _STACK_H

const int N=4;

struct STACK {
    int arr[N];
    int count;
};

void Initial(STACK *ps);

int Empty(STACK *ps);

int Full(STACK *ps);

void Add(STACK *ps);

void Del(STACK *ps);

void Show(STACK *ps);

#endif //_STACK_H
