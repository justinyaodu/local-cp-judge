#include <stdio.h>
#include <string.h>

int main()
{
	int a, b;
	scanf("%d %d\n", &a, &b);
	printf("%d\n", a + b);

	// Generate a warning about an unused variable.
	int c;

	// This doesn't work when the input is too long.
	char s[10];
	scanf("%9s\n", s);

	int len = strlen(s);

	if (feof(stdin))
	{
		for (int i = 0; i < len / 2; i++)
		{
			char temp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
		}

		printf("%s\n", s);
	}
	else
	{
		fprintf(stderr, "String is too long\n");
	}
}
