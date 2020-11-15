#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    scanf("%s",s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]== 'A' || s[i]== 'a' ||s[i]== 'E' || s[i]== 'e' ||s[i]== 'I' ||s[i]== 'i' ||s[i]== 'O' ||s[i]== 'o' ||s[i]== 'U' ||s[i]== 'u'||s[i]== 'Y'||s[i]== 'y')
            continue;
        else
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            printf(".%c",s[i]);
        }
    }
    printf("\n");
    return 0;
}
