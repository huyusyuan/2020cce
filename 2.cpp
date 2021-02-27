#include < stdio.h>
int main()
{
     int n,i,ans=0;
     scanf( "%d", &n);
     for(i=1;i<=n;i++)
     {
        if(n%i==0)ans++;
     }
     printf("%d\n",ans);
 }
