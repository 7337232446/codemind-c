#include<stdio.h>
int main()
{
    int a,b,i,icm;
    scanf("%d%d",&a,&b);
    icm=(a>b)?a:b;
    while(i)
    {
        if(icm%a==0 && icm%b==0)
        {
            printf("%d",icm);
            break;
        }
        icm++;
    }
}
