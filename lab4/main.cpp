#include <iostream>
#include <cstring>
#include "Stack.h"
using namespace std;

char *doing(char *in)
{
    char *out;
    int length=0;
    Stack *s=0;

    for(int i=0; i<strlen(in); i++)
    {
        if(in[i]=='#')
        {
            length--;
            if(s)
                pop(s);
        }
        else if(in[i]=='@')
        {
            length=0;
            while(s)
                pop(s);
        }
        else
        {
            length++;
            push(s, in[i]);
        }
    }

    out=new char[length+1];
    out[length]=0;

    for(int i=length-1; i>=0; i--)
        out[i]=pop(s);

    return out;
}

int main()
{
    char *in="1237@Ii#van";

    cout<<doing(in);
	system("pause");
    return 0;
	
}
