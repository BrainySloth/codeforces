#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        char s[100];
        scanf("%s",s);
        j=strlen(s);
        if(j>10)
        {
            printf("%c%d%c\n",s[0],j-2,s[j-1]);

        }
        else
        {
            printf("%s\n",s);
        }

    }
    return 0;
}
