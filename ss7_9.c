#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long m,n,sum,a[1005][1005];
int main(){
    scanf("%lld%lld",&m,&n);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++)scanf("%lld",&a[i][j]);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==m-1||j==n-1)printf("%2lld ",a[i][j]);
            else printf("   ");
        }
        printf("\n");
    }
}
