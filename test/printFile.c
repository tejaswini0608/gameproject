/*
 * printFile.c

 *
 *  Created on: 8 Feb 2017
 *      Author: liliana
 */

#include <stdio.h>

/* Include the header (not strictly necessary here) */
#include "operations.h"

void printFile(char *filePath){
	char c;
	FILE *fp;
	/*opens the file */
	fp = fopen(filePath,"r+");
	if (fp) {
		//reads each character until the end of file is reached
		while ((c = getc(fp)) != EOF)
	        putchar(c);
	    fclose(fp);
	}
}
