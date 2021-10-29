#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fOne()
{
	return "Function One";
}

char* fTwo()
{
	return "Function Two";
}

int main(int argc, char* argv[])
{
	char* sa = fOne();
	char* sb = fTwo();
	printf("%s\n", sa);
        printf("%s\n", sb);	
	return 0;
}
