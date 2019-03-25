#include<stdio.h>
int main()
{
    char a[1000];
    int i,j,l=0,c=0,k;
    scanf("%s",&a);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++,l++);
    for(i=k-1;i<l;i=i+k)
    {
        printf("%c ",a[i]);
    }
}
