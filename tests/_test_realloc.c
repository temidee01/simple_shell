#include "../shell.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char *buffer = NULL;

	buffer = _realloc(buffer, 0, 15);
	strcpy(buffer, "Benjamin Temidayo");
	printf("%s\n", buffer);
	buffer = _realloc(buffer, 15, 34);
	strcpy(buffer + 15, " Temi Dayo");
	printf("%s\n", buffer);
	free(buffer);
	return (0);
}

