#include <stdarg.h>
#include <stdio.h>

void test(const char *message, ...)
{
	const char *nArgsValue;
	va_list ap_ptr;
	va_start(ap_ptr,message);
	char buf[1024];
	nArgsValue = va_arg(ap_ptr, const char*);
	printf("%s\n", nArgsValue);
	//vsprintf(buf,message, ap_ptr);
	//printf("%s\n", buf);
	va_end(ap_ptr);
}

int main()
{
	const char *name = "daijiwei";
	int num = 5094057;
	test("message is %s ,%d\n", name, num);
	return 0;
}
