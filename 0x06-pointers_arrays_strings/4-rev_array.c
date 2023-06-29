#include "main.h"
void reverse_array(int *a, int n)
{
	while (n--)
	{
		if (n != 0)
			printf("%d, ",a[n]);
		else
			printf("%d",a[n]);
	}
}
