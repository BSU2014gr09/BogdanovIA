#include "Round.h"
#include <math.h>

Round round(float r, float x, float y)
{
    Round a;

    if(r<0)
        r=0;

    a.x=x;
    a.y=y;
    a.r=r;

    a.square=2*3*a.r*a.r;

    return a;
}

float get_round_square(Round a)
{
    return a.square;
}

int get_round_max_square(Round *a, int sz)
{
    int n_max=0;
    float square=a[0].square;

    for(int i=1; i<sz; i++)
    {
        if(a[i].square>square)
        {
            square=a[i].square;
            n_max=i;
        }
    }
    return n_max;
}

int get_round_min_square(Round *a, int sz)
{
    int n_min=0;
    float square=a[0].square;

    for(int i=1; i<sz; i++)
    {
        if(a[i].square<square)
        {
            square=a[i].square;
            n_min=i;
        }
    }
    return n_min;
}

void sort_round_by_square(Round *a, int sz)
{
    for(int i=0; i<sz; i++)
    {
        for(int j=i; j<sz; j++)
        {
            if(a[i].square<a[j].square)
            {
                Round tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}
