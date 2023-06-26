#include "main.h"
void rev_string(char *s)
{
	int l = strlen(s), i;
	char temp;

	for (i = 0; i < l/2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
