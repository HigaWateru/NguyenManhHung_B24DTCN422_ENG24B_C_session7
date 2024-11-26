#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a[1005][1005],m,n;
int main()
{
  scanf("%lld%lld",&m,&n);
  for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)scanf("%lld",&a[i][j]);
  printf("\n");
  for(int i=1;i<=m;i++){
    if(i==1||i==m)for(int j=1;j<=n;j++)printf("%lld ",a[i][j]);
    else{
        printf("%lld ",a[i][1]);
        for(int tg=2;tg<=n-1;tg++)printf("  ");
        printf("%lld",a[i][n]);
    }
    printf("\n");
  }
}
