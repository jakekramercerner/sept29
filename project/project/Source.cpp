#include <iostream>
#include <windows.h>

const short TWO_TO_THE_FIFTH = 32;
const char * CERNER = "Cerner";
const short CERNER_LEN = 6;

int main()
{
	for (short i = 0; i < CERNER_LEN; i++)
	{
		// Play each letter of "Cerner" (multiplied by 2^5) for 256 miliseconds
		Beep(CERNER[i] * TWO_TO_THE_FIFTH, 256);
	}

	return 0;
}
