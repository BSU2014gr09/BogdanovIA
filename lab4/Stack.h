#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

struct Stack
{
    Stack *prev;
    char data;
};

void push(Stack *&s, char data);
char pop(Stack *&s);

#endif // STACK_H_INCLUDED
