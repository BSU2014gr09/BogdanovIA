#include "Stack.h"

void push(Stack *&s, char data)
{
    Stack *alloc=new Stack;

    alloc->data=data;
    alloc->prev=s;

    s=alloc;
}

char pop(Stack *&s)
{
    char data=s->data;
    Stack *del=s;

    s=s->prev;
    delete(del);

    return data;
}
