#include <stdio.h>
int main()
{
    int p, n, count;
    float r, si;
    for (count =1; count <=3; count = count + 1)
    {
        printf("enter the value of p, n, r");
        scanf("%d%d%f",&p,&n,&r);
        si=p*n*r/100;
        printf("simple interest = Rs.%f\n",si);
    }
    return 0;
}