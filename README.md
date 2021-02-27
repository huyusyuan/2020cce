# 2020cce
程式碼倉庫


## 第一個程式

```c
#include < stdio.h>
int main()
{
   int n;
   scanf( "%d", &n);
   
   //餘數關係
   printf( "%d=50*%d+",n, n/50);
   n %=50;
   printf( "5%d+",n, n/5);
   n %=5;
   printf( "1*%d\n",n );
   
   return 0;
} //end main
```
## 第二個程式
```C
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

```
## 第三個程式

```C
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
 
 ```
## 第四個程式

```C
#include < stdio.h>
int main()
{
   int n;
  scanf("%d",&n);
  if(n>=90) printf("A\n");
  else if(n>=80) printf("B\n");
  else if(n>=60) printf("C\n");
  else printf("F\n");
}

```
## 第五個程式

```C
#include < stdio.h>
int main()
{
   int a,b,i,ans=1
   scanf("%d %d",&a,&b);
   for (i=1;i<=b;i++)
   {
      if(a%i==0 && b%i==0)
         ans=i;
   }
   printf("%d %d\n",a/ans,b/ans);
 }

```
