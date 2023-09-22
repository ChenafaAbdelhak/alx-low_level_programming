#include "main.h"
/**
 * infinite_add - add
 * @n1: n1
 * @n2: n2
 * @r: r
 * @size_r: size
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i = 0, k = 0, res = 0, d1, d2;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	while (i >= len1 && i >= len2)
	{
		if (i > len1)
			d1 = 0;
		else
			d1 = n1[i] % 48;
		if (i > len2)
			d2 = 0;
		else
			d2 = n2[i] % 48;
		if (len1 > size_r || len2 > size_r || k >= size_r)
			return (0);
		res = d1 + d2;
		if (res < 10)
		{
			r[k] = res + 48;
			k++;
		}
		else
		{
			r[k] = (res / 10) + 48;
			k++;
			r[k] = (res % 10) + 48;
			k++;
		}
		i++;
	}
	r[k] = '\0';
	return (r);
}
