#include<stdio.h>
int main()
{
    char a[1000];
    int i,j,l=0,c=0,k;
    scanf("%s",&a);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++,l++);
    for(i=0;i<l;i++)
    {
        for(j=k-1;j<l;j=j+k)
    {    
        if(i==j)
        {
          printf("%c",a[i]-32);
          a[i]='*';
          break;
        }
    }
    if(a[i]!='*')
    printf("%c",a[i]);
    }
}
