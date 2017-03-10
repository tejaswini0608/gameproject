/*After each player has chosen an action, the program prints the
 name and type of each player and its life points and terminates.
 These should be formatted as follows: <Player Name>(<Player Type>,
 <Life Points>. For example: */

for(x=0; x<a; x++)
{
	
	printf("\n  %s ( %s ,%d)",player[x].name,player[x].type,player[x].Lifepoints);
	printf("\n Luck=%d\n",player[x].Luck);
	printf("\n smartness=%d\n",player[x].Smartness);
	printf("\n strength=%d\n",player[x].Strength);
	printf("\n MagicSkills=%d\n",player[x].MagicSkills);
	printf("\n Dexterity=%d\n",player[x].Dexterity);			


}

int numplayers;
int c;
for(x=0; x<a; x++)
{
	if(j==arrayground)   player[i].slotsnum=j 	if (player.arrayground[0]==1 || player.arrayground[0]==2 || player.arrayground[0]==3 || player.arrayground[0]==4 || player.arrayground[0]==5 || player.arrayground[0]==6)
	{
		printf("The elements in ground are: %c")
		for(a=0; a<player[x].ground; a++){
			printf("%c",player[x].ground);
		}
		if(numplayers>2)
		{
			printf("choose which player you wish to attack",player[x]);
			scanf("%d",&player[x]);
		}
		
		/*Attacked loses lifepoints*/
		if(player[x].strenth<=70)
		{
			player[x].lifePoints=player[x].Lifepoints-(0.5)*(player[x].strength);
		}
		
		/*Attacker loses lifepoints*/
			else if(player[x].strenth>=70)
		{
			player[x].lifePoints=player[x].Lifepoints-(0.3)*(player[x].strength);
		}
	}
	
	if(j==arraycity)
	{
		printf("The elements in city are:")
		for(a=0; a<player[x].slots; a++){
			printf("\n%c",player[x].slots);
		}
		if(a>=2)/*if number of players in city is more than 2*/
		{
			printf("choose which player you wish to attack",player[x]);
			scanf("%d",&player[x]);
		}
	}
	
	
	if (player.arrayground[0]==1 || player.arrayground[0]==2 || player.arrayground[0]==3 || player.arrayground[0]==4 || player.arrayground[0]==5 || player.arrayground[0]==6)
	
	
	
}	