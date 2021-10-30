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

char* fThree()
{
	return "Function Three";
}

char* fFour()
{
	return "Function Four";
}

char* fFive()
{
	return "Function Five";
}

int main(int argc, char* argv[])
{
	char* sa = fOne();
	char* sb = fTwo();
	char* sc = fThree();
	char* sd = fFour();
	char* se = fFive();
	printf("%s\n", sa);
        printf("%s\n", sb);
	printf("%s\n", sc);
	printf("%s\n", sd);
	printf("%s\n", se);
	return 0;
}
