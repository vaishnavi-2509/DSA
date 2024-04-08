// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,q;
    scanf("%d",&n);
    scanf(" %d",&q);
    int arr[n+1];
    int a,b;
    for(int i=1;i<=n;i++)
    {
       scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=1;i<=q;i++)
    {
        scanf("%d %d",&a,&b);
    
        for(int i=a;i<=b;i++)
        {
            sum=sum+arr[i];
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}