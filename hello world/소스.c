#include <stdio.h>


main()
{
	int x, * p, y;
	x = 10;
	p = &x;
	y = *p;
	printf("%d", y);
	printf("%d", *p);

}
