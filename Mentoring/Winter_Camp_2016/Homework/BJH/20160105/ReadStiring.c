#include <stdio.h>

int main()
{
	char str[50];
	int idx=0;
	
	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	printf("\n�Է¹��� ���ڿ�: %s \n", str);
	
	printf("\n���� ���� ���: ");
	while(str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
 } 