#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
long long a,n;
int snt(int a){
    if(a<2)return 0;
    for(int i=2;i<=sqrt(a);i++)if(a%i==0)return 0;
    return 1;
}
int main()
{
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a);
        if(snt(a))printf("%lld ",a);
    }
}
