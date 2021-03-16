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
### 20210305 Hi there 👋

## 第一個程式
```C
#include<stdio.h>
int main()
{
 int n1=10,n2=20,n3=30;
 printf("n1:%d n2:%d n3=%d\n", n1, n2, n3);

 int *p = &n1;
  *p = 200;
   printf("n1:%d n2:%d n3=%d\n", n1, n2, n3);
```

因為 P= &n1 的關係 所以要把200框起來然後指向N1的地方
## 第二個程式
```C
#include<stdio.h>
int main()
{
 int n1=10,n2=20,n3=30;
 printf("n1:%d n2:%d n3=%d\n", n1, n2, n3);

 int *p = &n1;
  *p = 200;
   printf("n1:%d n2:%d n3=%d\n", n1, n2, n3);
   
 int *p2 = &n3;
  *p2 = 300;
   printf("n1:%d n2:%d n3=%d\n", n1, n2, n3);
   
   return0;
 }
```

因為 P= &n1 的關係 所以要把200框起來然後指向N1的地方以外
因為 P2=&n3 的關係 所以要把300框起來然後指向N1的地方
## 第三個程式

```C
#include<stdio.h>
int main()
{
  int n[3]={10,20,30};
  printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0],n[1],n[2]);

  int *p= & n[0];
  *p=200;
  printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0],n[1],n[2]);

  int *p2= &n[2];
  *p2=300;
  printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0],n[1],n[2]);

  p2=p;
  *p2=400;
  printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0],n[1],n[2]);

  return 0;
}
```
因為 P= &n1 的關係 所以要把200框起來然後指向N1的地方以外
因為 P2=&n3 的關係 所以要把300框起來然後指向N1的地方以外
因為 P2=P  的關係  所以要把3400框起來然後指向N2的地方以外


### 20210316 Hi there 👋

## 第一個程式
```C
#include <stdio.h>

int a[100];
int main()
{
  int N;
  for(int i=0; i<20; i++){
   scanf("%d", & a[i] );
   if( a[i]==0 ){
   N=i;
   break;
   }
}

for(int i=N-1; i>=0; i--){
   printf("%d ",a[i];
   }
   printf("\n");
}
```

## 第二個程式

