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

## 第一個程式 讀入整數反序列印
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

## 第二個程式 大小寫轉換
```C
#include <stdio.h>
int main()
{
	char c[10];
	
	scanf("%s",&c);
	int i=0;
	while(c[i]!='\0')
	{
		if('A'<=c[i] && c[i]<='Z')
			printf("%c",c[i]-'A'+'a');
		else if('a'<=c[i] && c[i]<='z')
			printf("%c",c[i]-'a'+'A');
		else printf("%c",c[i]); 
		i++;
	}
	printf("\n");
}
```

## 第三個程式 計算幾週與幾天
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d %d\n",n/7,n%7);
}
```

## 第四個程式 計程車資計算
```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	if(n<2000) printf("100");
	else if(n>2000 && n%500==0)printf("%d",100+(n-2000)/500*5);
	else printf("%d",100+(n-2000)/500*5+5);
	printf("\n");
}
```

## 第五個程式 兩數間可被5整除的整數
```C
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		for(int i=a;i<=b;i++)
		{
			if(i%5==0)
			
			printf("%d\n",i);	
		}
	}
	if(a>b)
	{
		for(int i=b;i<=a;i++)
		{
			if(i%5==0)
			
			printf("%d\n",i);	
		}
	}

}
```

## 第六個程式 整數間最大距離
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && b>c) printf("%d",a-c);
	else if(a>c && c>b) printf("%d",a-b);
	else if(b>a && a>c) printf("%d",b-c);
	else if(b>c && c>a) printf("%d",b-a);
	else if(c>a && a>b) printf("%d",c-b);
	else printf("%d",c-a);
	printf("\n");
}
```
## 第七個程式 計算陣列的平方值
```C
#include <stdio.h>
int a[10];
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		ans=a[i]*a[i];
		printf("%d,",ans);
	}
	printf("\n");
	
}
```

## 20210319 程式碼
```C
#include <stdio.h>

struct DATA{
    int x, y;
} a[3];
struct DATA b={100,200};

int main()
{
    for(int i=0; i<3; i++){
        printf("a[%d]:%d %d\n", i, a[i].x, a[i].y);
    }
    printf("b: %d %d\n", b.x, b.y);

    struct DATA c;
    printf("c: %d %d 像亂碼\n", c.x, c.y);

    c=b;
    printf("c: %d %d\n", c.x, c.y);

}
```
## 第二個指標程式碼
```C
#include <stdio.h>

struct POINT {
    float x, y, z;

};


struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};

int main()
{
    struct POINT * p = & point[0];
    printf("%.2f %.2f %.2f\n", p->x , p->y , p->z);

    p++;
    printf("%.2f %.2f %.2f\n", p->x , p->y , p->z);

    p++;
    printf("%.2f %.2f %.2f\n", p->x , p->y , p->z);

}
```
