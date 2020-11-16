#include<stdio.h>
int main()
{
    int i,j,res;
    int a[5][5];
    for(i=0; i<5; i++)
        for(j=0; j<5; j++)
            scanf("%d",&a[i][j]);
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                if(i<=2&& j<=2)
                    res=(2-i)+(2-j);
                else if(i>=2&& j>=2)
                    res=(i-2)+(j-2);
                else if(i<=2 && j>=2)
                   res=(2-i)+(j-2);
                else if(i>=2 && j<=2)
                   res=(i-2)+(2-j);
            }
        }
    }
    printf("%d\n",res);
    return 0;
}
