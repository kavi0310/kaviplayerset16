#include<stdio.h>
int main()
{
    int n1,n2,n,base=1,b=0,r,a[100],t,l=0,m=0;
    scanf("%d%d",&n1,&n2);
    n=n1*n2;
    while(n)
    {
        r=n%2;
        b=b+(r*base);
        n=n/2;
        base=base*10;
    }
    //printf("%d\n",b);
    t=b;
    while(t)
    {
        t=t/10;
        l++;
    }
    while(b)
    {
        r=b%10;
        //printf("%d ",r);
        a[l-1]=r;
        b=b/10;
        l--;
        m++;
    }
    for(l=m-1;l>=0;l--)
    {
        if(a[l]==1)
        {
            if(l==m-1)
            {
                printf("1");
                break;
            }
            else if(l==m-2)
            {
                printf("2");
                break;
            }
            else if(l==m-3) 
            {
                printf("3");
                break;
            }
            else 
            {
                printf("greater then 3");
                break;
            }
        }
       
    }
} 
