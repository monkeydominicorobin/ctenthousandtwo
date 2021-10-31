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

char* fSix()
{
	return "Function Six";
}

char* fSeven()
{
	return "Function Seven";
}

int main(int argc, char* argv[])
{
	char* sa = fOne();
	char* sb = fTwo();
	char* sc = fThree();
	char* sd = fFour();
	char* se = fFive();
	char* sf = fSix();
	char* sg = fSeven();
	printf("%s\n", sa);
        printf("%s\n", sb);
	printf("%s\n", sc);
	printf("%s\n", sd);
	printf("%s\n", se);
	printf("%s\n", sf);
	printf("%s\n", sg);
	return 0;
}
