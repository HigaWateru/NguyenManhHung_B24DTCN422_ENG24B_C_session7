#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
long long a[]={1,1,1,1,1,1,1};
int tg=0;
int main()
{
    for(int i=1;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]%2==0){
            printf("%lld ",a[i]);
            tg=1;
        }
    }
    if(tg==0)printf("Mang khong co so chan");
}
