#include<stdio.h>
int main()
{
    int n,k,i,res=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]>0 && arr[i]>=arr[k-1]){
            res++;
        }
        else
            continue;
    }
    printf("%d\n",res);
    return 0;
}
