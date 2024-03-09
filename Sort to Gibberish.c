#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
     int i,j;
    scanf("%d",&n);
     getchar();
    char a[n],temp;
    fgets(a,n+1,stdin);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                
            }
            
        }
    }
   printf("%s",a);
    return 0;
}
