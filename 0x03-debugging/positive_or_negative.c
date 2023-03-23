#include "main.h"
/**
 * postitive_or_negative - determine the number sign
 * @i: integar number
 */
void postitive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
