/*slots*/
int numslots=0;
char slots[3][7]= {"ground", "city", "slots"};
	while(numslots>21 || numslots<=0)
	{
	printf ("please enter the number of slots(max 20)");
	scanf("%d",&numslots);
	}
	
	struct data slots[numslots]; 
	

/*randomly select slots*/
for (x=0; x<=numslots; numslots++)
{

r=(rand()%(3+1-1))+1;

if (r==1) /*level ground*/
{
	slots[x].slot_type="level ground";
}

else if (r==2) /*hill*/
{
	slots[x].slot_type="hill";
}

else if (r==3) /*city*/
{
	slots[x].slot_type="city";
}
}


/*place players in slots*/
for(j=0,i=0; j<numslots; j++,i++)
{
	
	slots[j].player_num=i;	
	
}


/*ask user if they want to move or attack*/
/*Players moving slots*/
enum slots { ground, city, hill};
enum slots type;


for(x=0; x<a; x++)
{
	j=rand()%3;
	type=rand()%3;
	printf("%S,Type 'F' for forward/ 'P' for previous/ 'A' for attack:",player[x].name);
	scanf ("%c",&control);
	if(control=='F' && j !=2)
	{
		printf ("slot is now %s",type+1);
	}
	if (control=='F' && j==2)
	{
		printf("Player cannot move forward")
	}
	else if (control=='P' && j !=0)
	{
		printf("slot is now %s",type-1);
	}
	else if (control=='P' && j==0)
	{
		printf("Player cannot move backwords);
	}
}