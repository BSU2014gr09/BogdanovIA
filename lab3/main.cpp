#include <iostream>
#include "Round.h"
using namespace std;

int main()
{
    Round a=round(2,3,3);
    Round b[4]={round(2,3,3), round(120,3,3), round(2,3,3), round(1,3,3)};

    cout<<"max "<<get_round_max_square(b, 4)<<endl;
    cout<<"min "<<get_round_min_square(b, 4)<<endl;

    sort_round_by_square(b, 4);

    for(int i=0; i<4; i++)
    {
        cout<<b[i].square<<' ';
    }

    return 0;
}
