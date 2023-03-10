#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a: \n");
    scanf("%i",&a);
    printf("enter the value of b: \n");
    scanf("%i",&b);
    if(a==b)
    {
        printf ("no operation");
    }
        else
            {
            c=a;
            a=b;
            b=c;
            printf("\n After swapping: \n");
            printf("a=%i \n",a);
            printf("b=%i \n",b);
            return 0;
            }
}
