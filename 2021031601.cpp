讀入整數反序列印
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