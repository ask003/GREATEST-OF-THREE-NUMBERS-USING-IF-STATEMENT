
#include <stdio.h>

int main()
{
      int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<0 || b<0 || c<0)
    {
        printf("INVALID NUMBER IN INPUT");
    }
    else
    if(a>b && a>c)
    {
        printf("THE LARGEST IS %d",a);
    }
    else
    if(b>c)
    printf("THE LARGEST IS %d",b);
    else
    printf("THE LARGEST IS %d",c);

    return 0;
}
