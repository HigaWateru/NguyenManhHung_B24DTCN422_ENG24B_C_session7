#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
long long a,m,n;
int main()
{
    scanf("%lld%lld",&n,&m);
    for(int q=1;q<=m;q++){
        for(int i=1;i<=n;i++){
            scanf("%lld",&a);
            printf("%lld ",a);
        }
        printf("\n");
    }
}
