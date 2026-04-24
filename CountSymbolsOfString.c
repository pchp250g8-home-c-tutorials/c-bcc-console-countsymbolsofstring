#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    size_t nLen;
	char szLine[256];
	printf("Input a string\r\n");
	scanf("%255[^\n]", szLine);
	nLen = strlen(szLine);
	for (unsigned int i = 0; i < nLen; i++)
	{
		size_t c = 0;
		char chSym1 = szLine[i];
		for (unsigned int j = 0; j < nLen; j++)
		{
			char chSym2 = szLine[j];
			if(chSym1 == chSym2)
				c++;
		}
		printf("The symbol \"%c\" occurs %u times\r\n", chSym1, c);
	}
	getchar();
	getc(stdin);
	return 0;
}
