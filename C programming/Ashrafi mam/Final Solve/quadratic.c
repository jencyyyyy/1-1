#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2,x,d;

    printf("Input the co-efficients a,b,c values of equation ax^2+bx+c=0\n");
    scanf("%d %d %d",&a,&b,&c);

    d= b*b-4*a*c;

    if(d>0)
    {
        printf("two values of x\n");
        x1= (-b+sqrt(b*b-4*a*c))/(2*a);
        x2= (-b-sqrt(b*b-4*a*c))/(2*a);
        printf("x1= %.2f\t x2= %.2f\n",x1,x2);
    }
    else if(a==0)
    {
        printf("One solution\n");
        x= -b/(2*a);
        printf("x= %.f",x);
    }
    else
        printf("Imaginary Solution");

    return 0;
}
