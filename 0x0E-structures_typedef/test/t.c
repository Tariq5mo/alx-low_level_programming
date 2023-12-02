#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *p, *po;

	p = malloc(10);
	po = p;
	free(po);
	return (0);
}