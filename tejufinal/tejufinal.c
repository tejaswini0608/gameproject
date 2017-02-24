#include <stdio.h>

/* import the header file containing the printFile
function signature */
#include "operations.h"

int main()
{

	setbuf(stdout,NULL);
	char path[500];
	//requests a file path from the command line
	printf("Insert a file Path\n");
	scanf("%s", path);
	//invokes the function for print the source main file
	printFile(path);
	return 0;
}
