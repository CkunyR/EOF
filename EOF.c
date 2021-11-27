#include <stdio.h>

int main()

{
	int ch = 0;
	while ((ch = getchar()) != EOF)//获取EOF---Ctrl + z
		//EOF---end of file  -> -1
	{
		printf("%c\n", ch);

	}
	/*int ch = getchar();
	
	putchar(ch);
	printf("%c\n", ch);*/

	return 0;
}