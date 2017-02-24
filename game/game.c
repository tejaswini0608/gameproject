/*
 * game.c
 *
 *  Created on: Feb 10, 2017
 *      Author: Tejaswini Kumar
 */
 /*
 ============================================================================
 Name        : fileIO.c
 Author      : Padraig Cunninghm
 Version     : V1
 Copyright   : Arra what the hell...
 Description : Simple file I/O in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


char *WEATHER_FILE_PATH = "./inputFiles/players.txt"; // location of players file--in this program weatherarr=players
char *SLOTS = "./inputFiles/slots.txt"; // location of slots file
char slotsArr[10][70];
char weatherArr[5][70]; // stores weather data (limited to five rows)
int players();
int slots();

int main(void)
{                         // main function where the user chooses to slots or players
	int number;
	setbuf(stdout,NULL);
	printf("enter any number \n 0=lpst of players\n1=list of slots\n");
	scanf("%d",&number);
if(number==0)
{
	players();

}

else if(number==1)
{
 slots();
}


}

int players()
{
	int lineNum = 0;
	int i,b,tmp[200],compare;
	FILE *fp = fopen(WEATHER_FILE_PATH,  "r+" );       /* open for reading */
		// This will take each row in the file and store it in weatherArr.
		if (fp == NULL ){      /* check does players file exist etc */
			perror ("Error opening weather file");
			lineNum = -1; /* use this as a file not found code */
		} else {
			// fgets returns NULL when it gets to the end of the file
			while ( fgets( weatherArr[lineNum], sizeof(weatherArr[lineNum]), fp ) != NULL ) {
				lineNum++;
			}
			fclose (fp);
		}
		// Print out one of the strings
		for(i=0;i<11;i++)
		{
			printf("\n%s\n",weatherArr[i]);

		}

		//now using rand inorder to shuffle the players
		for(i=9;i>=0;i--)
		{
			b=rand()%(i+1);
			strcpy(tmp,weatherArr[b]);
			strcpy(weatherArr[b],weatherArr[i]);
			strcpy(weatherArr[i],tmp);

		}
		// shuffled
		printf("SHUFFLED list of players");
				for(i=0;i<11;i++)
				{
					printf("\n%s\n",weatherArr[i]);

				}
			//sorting using bubble sort technique
				//its my personal favorite technique-easy to understand

				for(i=0;i<11;i++)
		        {
					for(b=0;b<11;b++)
					{
						compare=strcmp(weatherArr[b], weatherArr[b+1]);
						if(compare>0)
						{
							strcpy(tmp,weatherArr[b]);
							strcpy(weatherArr[b],weatherArr[b+1]);
							strcpy(weatherArr[b+1],tmp);
						}
					}
			    }
				printf("THE SORTED LIST OF PLAYERS ");//printing the sorted list of players
				 for(i=0;i<=11;i++)
								{
									printf("\n%s\n",weatherArr[i]);

								}

				return 0;
				}
int slots()
{


	char town[20]="",tempStr[4]="",rainStr[4]="";
		char temp = 0,arrayC[10];
		int lineNum = 0;
			int i,compare,b,twn,rain,arrayA[10],arrayB[10],j,c;
			char tmp[100];


			FILE *fp = fopen(SLOTS,  "r+" );       /* open for reading */
				// This will take each row in the file and store it in slotsarray.
				if (fp == NULL ){      /* check does slots file exist etc */
					perror ("Error opening slots file");
					lineNum = -1; /* use this as a file not found code */
				} else {
					// fgets returns NULL when it gets to the end of the file
					while (fgets(slotsArr[lineNum], sizeof(slotsArr[lineNum]), fp ) != NULL )
					{
						lineNum++;
					}
					fclose (fp);
				}
				// Print out one of the strings
				for(i=0;i<7;i++)
				{
					printf("\n%s \n",slotsArr[i]);

				}


	// Some code for reading the three components from a slots array string.

		for(i=0;i<7;i++)
		{

		sscanf(slotsArr[i],"%s - %s %s", town, tempStr, rainStr);
				twn = atoi(town);
				rain = atoi(rainStr);
				printf("\n Town: %d \nTemp: %s \n Rainfall: %d\n", twn, tempStr, rain);
				arrayB[i]=rain;
				arrayA[i]=twn;
				arrayC[i]=tempStr;
        }

	/*	for(i=0;i<7;i++)
		{
			printf("%s ",arrayB[i]);

		}
  */    // program to sort the array in desired order
		for(i=0;i<7;i++)
		{
			for(j=7;j<=0;j--)
			{
				c=strcmp(arrayA,arrayB);
				if(c=0)
				{
					strcpy(tmp,arrayC[i-1]);
					strcpy(arrayC[i-1],arrayC[j]);
					strcpy(arrayC[j],tmp);
				}

			}
		}
		for(i=0;i<7;i++)       //print the array
				{
					printf("%s ",arrayC[i]);

				}
}
