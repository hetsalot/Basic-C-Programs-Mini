#include <stdio.h>
#define p printf(
#define f )
#define s scanf(
void gcd(int a,int b)
{
    int i;
    int gcd=1;
    for(i=1;i<a && i<b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD is:%d",i);
}
int main()
{
    int a,b;
    p"Enter the number for a :"f;
    s"%d",&a f;
    p"Enter the number for b :"f;
    s"%d",&b f;
    gcd(a, b);
}
