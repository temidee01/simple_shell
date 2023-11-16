#include "../shell.h"

int main(void)
{
	_fprint(1, "hello world\n");
	_fprint(1, "Hello %s\n", "Benjamin");
	_fprint(1, "Hello I'm %s and I'm %d\n", "Ben", 34);
	_fprint(1, "negative %d\n", -330);
	_fprint(1, "zero %d\n", 0);
	return (0);
}

