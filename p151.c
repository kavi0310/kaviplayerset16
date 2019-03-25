#include<stdio.h>
int main()
{
    char a[1000];
    int i,j,l=0,c=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++,l++);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a'||a[i]=='b')
        c++;
    }
    if(c==l||c==l-1)
    {
        printf("yes");
    }
    else
    printf("no");
}
