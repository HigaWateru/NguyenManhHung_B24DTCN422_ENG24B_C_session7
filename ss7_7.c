#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
long long a[100005],n;
int main()
{
    printf("Nhap so phan tu cua mang ");
    scanf("%lld",&n);
    printf("Nhap tung phan tu trong mang ");
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        if(a[i]%2==0){
            i--;
            printf("Yeu cau nhap lai\n");
        }
    }
}
