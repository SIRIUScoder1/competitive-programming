#include <stdio.h>
#include <stdlib.h>
#define powerOfTwo(i) ( 1 << (i) );

unsigned int bitCount(unsigned int num){
unsigned int count = 0;
while(num)
{
    if(num & 1)     ++count;
    num = num >> 1;
}
  return count;
}


int main(void){
int t;
scanf("%d", &t);
while(t--){
    unsigned int N, i, larger, smaller;
    long unsigned int a,b, result = 0;
    scanf("%u %lu %lu", &N, &a, &b);
    unsigned int bitsA = bitCount(a);
    unsigned int bitsB = bitCount(b);
    if(bitsA >= bitsB)  {
            larger = bitsA;
            smaller = bitsB;
    }
    else
     {
            larger = bitsB;
            smaller = bitsA;
    }
    if(larger + smaller > N)
    {
            unsigned int overLapBits = (larger + smaller) - N;
            larger -= overLapBits;
            smaller -= overLapBits;
    }
for(i = 1; i <= larger; i++)
    result += powerOfTwo(N - i);
for(i = 1; i <= smaller; i++)
    result += powerOfTwo(N - larger - i);
    printf("%lu\n", result);
}
return 0;
}
