#include <stdio.h>
#include <string.h>

bool IsUpperCase(char a)
{
	if (a >= 'a' && a <= 'z')
		return 0;
	else
		return 1;
}

int main()
{
	char input[100] = "";
	int len = 0;
	scanf("%s", input);
	len = strlen(input);
	input[len + 1] = '\n';
	for (int i = 0; i < len; i++)
	{
		if (IsUpperCase(input[i]))
			input[i] = input[i] - 'A' + 'a';
		else
			input[i] = input[i] - 'a' + 'A';
	}
	printf("%s", input);
	return 0;
}