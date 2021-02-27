#include < stdio.h>
int main()
{
   int n,i,ans=0
   for(i=0;i<10;i++)
   {
      scanf("%d",&n);
      if(n%3==0)
         ans++;
   }
   printf("%d\n",ans);
 }
