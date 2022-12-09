#include<stdio.h>
int main()
{
    int u,l,p,i;
    scanf("%d%d",&u,&l);
    for(i=1;i<=l;i++)
    {
    p=u*i;
     printf("%d x %d = %d
",u,i,p);
    }
   
}