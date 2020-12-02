#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

struct alphabet
{
	unsigned short cod = 0;
	unsigned char symbol;
};

int main()
{
	unsigned char betaAlphabet[] = {"a", "b", "c", "d"};
	alphabetSize = sizeof(betaAlphabet)/sizeof(betaAlphabet[0]);
	
	int wordSize = 4;

	// for (int i = 0; i < pow(wordSize, alphabetSize); ++i)
	// {
	// 	/* code */
	// }

	alphabet newAlphabet[alphabetSize];
	for (unsigned short i = 0; i < alphabetSize; ++i)
	{	
		newAlphabet[i].cod += i;
		newAlphabet[i].symbol = betaAlphabet[i];
	}

    unsigned char ibuf[] = "compute sha1";
    unsigned char obuf[20];

    SHA1(ibuf, strlen(ibuf), obuf);

    int i;
    for (i = 0; i < 20; i++) {
        printf("%02x ", obuf[i]);
    }
    printf("\n");

    return 0;
}