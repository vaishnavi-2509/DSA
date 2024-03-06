#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
  int s[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&s[i]);
    }
    int temp=1,max=0;
    for(int i=0;i<n-1;i++)
    {
       int j=i;
          while(s[j+1]>s[j]) 
          {
              if(j+1==n){break;}
            temp++;
              j++;
          }

        if(temp>max)
        {
            max=temp;
        }
        temp=1;
      
    }
     printf("%d",max);
    return 0;
}