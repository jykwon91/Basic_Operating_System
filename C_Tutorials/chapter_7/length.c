#include <stdio.h>

int main(void)
{
	char ch;
	int len = 0;

	printf("Enter a message: ");
	ch = getchar();
	printf("%c\n", ch);

	while (ch != '\n') {
		len++;
		ch = getchar();
		printf("%c\n", ch);
	}
	printf("Your message was %d character(s) long.\n", len);

	return 0;
}
