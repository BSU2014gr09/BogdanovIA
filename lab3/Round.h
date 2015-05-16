#ifndef ROUND_H_INCLUDED
#define ROUND_H_INCLUDED

struct Round
{
    float x, y, r, square;
};

Round round(float r, float x, float y);
float get_round_square(Round a);
int get_round_max_square(Round *a, int sz);
int get_round_min_square(Round *a, int sz);
void sort_round_by_square(Round *a, int sz);

#endif // ROUND_H_INCLUDED
