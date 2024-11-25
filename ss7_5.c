#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
long long a[]={5,1,2,56,-2},min,max;
int main()
{
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        min=fmin(min,a[i]);
        max=fmax(max,a[i]);
    }
    printf("%lld %lld",min,max);
}
