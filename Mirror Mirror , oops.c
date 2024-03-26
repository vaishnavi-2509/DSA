#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char str[1500];
    fgets(str,1501,stdin);
int F,L;
    scanf("%d%d",&F,&L);
int temp_char,temp;
for(int i=F-1;i<L;i++)
{
    temp_char=str[i];
    temp=155-temp_char;
    str[i]=temp;
}
int i,j=1;
char swap;
    for(i=F-1;i<((F+L)/2);i++)
    {
       swap=str[i];
        str[i]=str[L-j];
        str[L-j]=swap;
        j++;
    }
printf("%s",str);
    return 0;
}