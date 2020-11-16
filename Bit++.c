#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0,res;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        char X[50];
        scanf("%s",X);
        if(strcmp(X,"X++")==0)
            x++;
        else if(strcmp(X,"++X")==0)
            ++x;
        else if(strcmp(X,"X--")==0)
            x--;
        else if(strcmp(X,"--X")==0)
            --x;
        else continue;
    }
    printf("%d\n",x);
    return 0;
}
