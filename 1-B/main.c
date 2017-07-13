#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,*numbers=NULL,i,first,last,mid,x;
    scanf("%d",&n);
    numbers=(int *)malloc(sizeof(int)*(n+1));
    numbers[0]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&numbers[i]);
        numbers[i]=numbers[i]+numbers[i-1];
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&x);
        first=1;
        last=n;
        while(first<last)
        {
            mid=(first+last)/2;
            if(numbers[mid]>=x)
            {
                if(numbers[mid-1]<x)
                {
                    printf("%d\n",mid);
                    break;
                }
                else
                    last=mid;
            }
            else
            {
                if(numbers[mid+1]>=x)
                {
                    printf("%d\n",mid+1);
                    break;
                }
                else
                    first=mid;
            }
        }
    }
    return 0;
}
