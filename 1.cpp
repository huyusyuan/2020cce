#include < stdio.h>
int main()
{
   int n;
   scanf( "%d", &n);

   //¾l¼ÆÃö«Y
   printf( "%d=50*%d+",n, n/50);
   n %=50;
   printf( "5%d+",n, n/5);
   n %=5;
   printf( "1*%d\n",n );

   return 0;
} //end main
