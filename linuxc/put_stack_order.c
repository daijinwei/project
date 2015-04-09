#include <stdio.h>

void func(int x, int y, int z) {
	printf("x = %d at [%X]\n", x, &x);
	printf("y = %d at [%X]\n", y, &y);
	printf("z = %d at [%X]\n", z, &z);
}

int main()
{
	func(100, 200, 300);
	return 0;
}
