#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    double c,d,n;
    c=a/b;
    d=(float)a/b;
    n=d-c;
    if(n>0)
        printf("%d / %d = %.2f\n",a,b,(float)a/b);
    else
        printf("%d / %d = %d\n",a,b,a/b);
    return 0;
}
