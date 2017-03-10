#include <stdio.h>
int main(void)
{
	int numplayers,numslots,control;
	int life_points=100;
char type[4]= {"elf""human""ogre""wizard"};
char name;
	
	printf ("please enter the number of players you wish to input(max 6)");
	scanf ("%d",&numplayers);
	
	for (numplayers=1; numplayers<7; numplayers++)
	{
		printf ("please enter the type for player %d: ",numplayers);
		scanf ("%s",&type[]);
		printf ("\nplease enter the name of player %d",numplayers);
		scanf ("%s",&name);
	}
	
	
	
	/*struct*/
	type def struct player
	{
		char player_type[20];
		char player_name[20];
		int life_points;
		int Smartness;     
		int Strength;
		int MagicSkills; 
		int Luck;
		int Dexterity;
		
	}
	
	
	
/* */	
struct data
{
char slot_type[12];
int player_num;	
}	
	