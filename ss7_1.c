#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long a[]={1,2,3,4,5,6,7,8};
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("%lld ",a[i]);
    }
    printf("\n%d",sizeof(a)/sizeof(a[0]));
}
