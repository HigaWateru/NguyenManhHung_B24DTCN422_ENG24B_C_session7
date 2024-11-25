#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
long long a[]={1,2,3,4,5};
int main()
{
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]%2==0)a[i]+=3;
        else a[i]+=2;
        printf("%lld ",a[i]);
    }
}
