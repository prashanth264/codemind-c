#include<stdio.h>
int main()
{
    int a,b,h;
    float p;
    scanf("%d%d%d",&a,&b,&h);
    p=0.5*(a+b)*h;
    printf("%.4f",p);
}