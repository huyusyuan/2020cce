第四個程式 計程車資計算
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