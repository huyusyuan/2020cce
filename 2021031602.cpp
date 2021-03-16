第二個程式 大小寫轉換
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