#include<stdio.h>
int main()
{
    int n,q,r,i,s=0;
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        scanf("%d",&n);
        int temp=n;
        int rev=0;
        while(n!=0)
        {   
            int i=n%10;
            rev=rev*10+i;
            n=n/10;
        }
        if(rev==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}