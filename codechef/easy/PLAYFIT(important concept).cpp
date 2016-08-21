//finding the maximum difference such that a[i] > a[j]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,size,a[100000],diff,min;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&size);
        for(int i = 0;i < size;i++)
        {
            scanf("%d",&a[i]);
        }

            diff = a[1]-a[0];
            min = a[0];
            for(int i = 1;i < size;i++)
            {
                if(a[i] - min > diff)
                {
                   diff = a[i] - min;
                }
                if(a[i] < min)
                {
                    min = a[i];
                }
            }
            if(diff <= 0)
            {
                cout << "UNFIT" << endl;
            }
            else{
                cout << diff << endl;
            }
    }
    return 0;
}
