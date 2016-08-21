#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    double p,s,vol1,vol2,deter,side1,side2;
    cin >> test;
    while(test--)
    {
        cin >> p >> s;
        deter = ((p*p)/4) - (6*s);
        side1 = (p/2-sqrt(deter))/6;
        side2 = (p/2 - sqrt(deter))/6;
        // cout << side1 << side2;
        vol1 = (pow(side1,3))- ((side1*side2*p)/4) + (s*side1)/2;
        vol2 = (pow(side2,3))- ((side2*side2*p)/4) + (s*side2)/2;
        if(vol1 >= vol2)
        {
          printf("%.2f\n",vol1);
        }
        else
        {
            printf("%.2f\n",vol2);
        }
    }
    return 0;
}
