#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],p[100];
    scanf("%s %s",s,p);
    if(strcmp(strupr(s),strupr(p))>0)
        printf("1\n");
    else if(strcmp(strupr(s),strupr(p))<0)
        printf("-1\n");
    else if(strcmp(strupr(s),strupr(p))==0)
        printf("0\n");
    else return 0;
}
