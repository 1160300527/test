#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int MyCompare(int a,int b)
{
    return a>b;
}
int M(int a[],int n);
int MinN(int b[],int n);
int main()
{
    int a[50005],b[50005];
    int i,Max,Min,n;
    while(scanf("%d",&n)&&n)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
        }

        if(n<3)
        {
            printf("0\n");
            continue;
        }
        Max=M(a,n);
        Min=MinN(b,n);
        printf("%d\n",Max-Min);
    }
    return 0;
}
int M(int a[],int n)
{
    while(n>1)
    {
        sort(a,a+n,MyCompare);
        a[n-2]=a[n-1]*a[n-2]+1;
        n--;
    }
    return a[0];
}
int MinN(int a[],int n)
{
    while(n>1)
    {
        sort(a,a+n);
        a[n-2]=a[n-1]*a[n-2]+1;
        n--;
    }
    return a[0];
}
