#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
long int z,o,count,n;
    scanf("%ld%ld%ld",&n,&z,&o);
   count=(n/(z+o))*z;
    if((n%(z+o))<=z)
    {
        count=count+(n%(z+o));
    }
    else
    {
        count=count+z;
    }
        printf("%ld",count);
    return 0;
}
