#include<stdio.h>
int main()
{
    int n,petya,vasya,tonya,j=0,i,res=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d",&petya,&vasya,&tonya);
        if(petya+vasya+tonya>=2)
            j++;
        else continue;
        res+=j;
        j=0;
    }
    printf("%d\n",res);
    return 0;
}
