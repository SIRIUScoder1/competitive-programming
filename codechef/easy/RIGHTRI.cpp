#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,count = 0;
    double d1,d2,d3,x1,x2,x3,y1,y2,y3;
    cin >> num;
    while(num--)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        d1 = pow((x1 - x2),2) + pow((y1-y2),2);
        d2 = pow((x2 - x3),2) + pow((y2-y3),2);
        d3 = pow((x3 - x1),2) + pow((y3-y1),2);
        if(d1 == d2 + d3 || d2 == d1 + d3 || d3 == d1 + d2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
