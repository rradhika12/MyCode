#include <stdio.h>

int main( ) 
{
	FILE *fp;
	char szBuffer[1000] = "";
	char *pszFileName = "SampleFile.txt";

	// Read input data from console.
	printf("Enter arbitrary data\n");
	fgets(szBuffer, sizeof(szBuffer), stdin);

	// Open file in Read-Write mode.
	fp = fopen(pszFileName, "w+");

	// Write data to file.
	fprintf(fp, "%s", szBuffer);
	printf("Data written to file: %s", pszFileName);

	fclose(fp);

	return 0;
}
