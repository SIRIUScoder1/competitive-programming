/*
  O(N^2)
*/

// #include <bits/stdc++.h>
// using namespace std;
//
//
// void swap(int* a,int* b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
//
// int main()
// {
//     int size,query,l,r,a[100000],curr,test;
//     cin >> test;
//     while(test--)
//     {
//         for(int i = 1;i <= 100000;i++)
//         {
//             a[i] = 0;
//         }
//         cin >> size >> curr >> query;
//         a[curr] = 1;
//         while(query--)
//         {
//             cin >> l >> r;
//             while(l < r)
//             {
//                 if(a[l] != a[r])
//                 {
//                     swap(&a[l],&a[r]);
//                 }
//                 l++;
//                 r--;
//             }
//         }
//         for(int i = 1;i <= size;i++)
//         {
//             if(a[i] == 1)
//             {
//                 cout << i << endl;
//                 break;
//             }
//         }
//     }
//     return 0;
// }

/*

 O(N) approach

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size,curr,query,l,r;
        cin >> size >> curr >> query;

        while(query--)
        {
            cin >> l >> r;
            if(curr >= l && curr <= r)
            {
                curr = l + r - curr;
            }
        }
        cout << curr << endl;
    }
    return 0;
}
