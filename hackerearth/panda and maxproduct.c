#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void merge( long long int arr[],  long long int l,  long long int m,  long long int r)
{
     long long int i, j, k;
     long long int n1 = m - l + 1;
     long long int n2 =  r - m;
 
    //temporary arrays
     long long int L[n1], R[n2];
 
    /* Copy data to temp arrays L and R */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort( long long int arr[],  long long int l,  long long int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
 

/*void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}*/
int main()
{
     long long int arr[100000],n,i,k;
    //printf("enter the size of the array\n");
    scanf("%lld",&n);
    //printf("enter the elements of the array\n");
 	for(i = 0;i < n;i++)
 	{
 		scanf("%lld",&arr[i]);
	}
    mergeSort(arr, 0, n - 1);
 
    //printf("\nSorted array is \n");
    //printArray(arr, n);
    k = arr[n-2] * arr[n-1];
    m = arr[0] * arr[1];
    if(k > m)
    {
    	printf("%lld",k);	
	}
	else 
	{
    	printf("%lld",m);
	}
    return 0;
}
