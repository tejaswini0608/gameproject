#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>     // the libraries used in the coding
#include<stdbool.h>
struct data
{
	char type[10];      //declaration of struct data to represent the players
	char name[10];
	int Smartness;     //characteristics of the players
	int Strength;
	int MagicSkills; 
	int Luck;
	int Dexterity;
	int Lifepoints;    
	char slots[10];     //array to represent the slots
	int slotsnum;        //integer to represent the slot number(1,2,3)
};
struct slot      //declaration of the struct slot to represent the slots
{
	char ground[10]; //types of slots
	char hill[10];  
	char city[10];
};

int main(void)         //main function
{
	int a,i;
	char name,Elf,Human;
	int player1;
	printf("Input the maximum number of players 1-6"); //input the total number of players by the user
	scanf("%d",&a);                                  //scan in the number of players inputted by the user

	struct data player[a];                         // declaration of struct data player
	int x,k,b,c,d,e,j;



		  
		  for(x=0;x<a;x++)                        //for loop that runs for each player
		  {
			  printf("enter the name of the player %d ",x+1);  //takes in the name of the player
			  scanf("%s",&player[x].name);                   
			  printf("enter the type of the player:Elf, Human, Ogre, Wizard-");//takes in the type of the player
			  scanf("%s",&player[x].type);
			  player[x].Lifepoints=100;          //takes input for the lifepoints of the player.This is initialised to 100.
		 // }
			 char str2[]="Elf";
			 k=strcmp(player[x].type,str2);         
													 /*strcmp compares the 2 strings and prints out a 0 if they are both equal.This is used here so that the characteristics of a
													  particular player type is dislayed ..according to the input of the player type  by the user*/
			 b=strcmp(player[x].type,"Human");       
			 c=strcmp(player[x].type,"Wizard");
			 d=strcmp(player[x].type,"Ogre");
		 
		 
		 
			  //for(x=0;x<=a;x++)
	 
		if(k==0)                                 /*if k=o,that is if the user iputted the player type as elf then the characteristics of elf dislays*/
		{
			player[x].Luck=rand()%(100 + 1 - 60) + 60;  /*characteristics of the player type elf that is assigned as a random integer in the given range*/
			player[x].Smartness=70+rand()%30;
			player[x].Strength=rand()%50;
			player[x].MagicSkills=50+rand()%29;
			player[x].Dexterity=rand()%100;

		}
		 
		 else if(b==0)
		 {                                     /*if b=o,that is if the user iputted the player type as human then the characteristics of human dislays*/
			player[x].Luck=rand()%100;         /*characteristics of the player type human  is assigned as a random integer in the given range*/
			player[x].Smartness=rand()%100;
			player[x].Strength=rand()%100;
			player[x].MagicSkills=rand()%100;
			player[x].Dexterity=rand()%100;

			 int t=(player[x].Luck+player[x].Smartness+player[x].Strength+player[x].MagicSkills);
			 while(t>300)
												 /*if the sum of luck,smartness,strength and magicskills exceeds 300 then it reassigns the value randomly..condition given by the professor*/
			 {
				 player[x].Luck=rand()%100;      // using while loop so that it iterates until the condition is satisfied
				 player[x].Smartness=rand()%100;
				 player[x].Strength=rand()%100;
				 player[x].MagicSkills=rand()%100;
				 t=(player[x].Luck+player[x].Smartness+player[x].Strength+player[x].MagicSkills);
			   //  break;
					
			 }			 
		 }
		 
		 else if(c==0)                    /*if c=o,that is if the user iputted the player type as wizard then the characteristics of wizard dislays*/
		{
			player[x].Luck=50+rand()%50;   /*characteristics of the player type wizard is assigned as a random integer in the given range*/
			player[x].Smartness=90+rand()%10;
			player[x].Strength=rand()%20;
			player[x].MagicSkills=80+rand()%20;
			player[x].Dexterity=rand()%100;

		}
		
		else if(d==0)
		{                                    /*if d=o,that is if the user iputted the player type as ogre then the characteristics of ogre dislays*/
			player[x].Luck=rand()%100;      /*characteristics of the player type ogre is assigned as a random integer in the given range*/
			player[x].Smartness=rand()%20;
			player[x].Strength=80+rand()%20;
			player[x].MagicSkills=0;
			player[x].Dexterity=80+rand()%20;
			int k=player[x].Luck+player[x].Smartness;  // if the sum of luck and smartness is greater than 50 then it should reassign the values
			while (k>50)
			  {                                     // using while loop so that it iterates until the condition is satisfied
						player[x].Luck=rand()%100;
						player[x].Smartness=rand()%20;
						k=player[x].Luck+player[x].Smartness;

			}
		}
			
			//printing the name,type ,life pionts and the characteristics of the player
			
			printf("\n  %s ( %s ,%d)",player[x].name,player[x].type,player[x].Lifepoints);
			printf("\n Luck=%d\n",player[x].Luck);
			printf("\n smartness=%d\n",player[x].Smartness);
			printf("\n strength=%d\n",player[x].Strength);
			printf("\n MagicSkills=%d\n",player[x].MagicSkills);
			printf("\n Dexterity=%d\n",player[x].Dexterity);			

	   
	 }
	 
	 
	 printf("enter the number of slots");  //asks the user to input the number of slots
	 scanf("%d", &e);                      //scans in the total number of slots
	 struct slot players[e];              //declaration of the struct slot players
	 
	 char array[3][6]={{"ground"},      //multidimensional array to store in the types of slots
					   {"hill"},
					   {"city"}};
	int arraynumber[6];   //arrays to store in the players assigned to the specific slot
	 
	   while(e>21 || e<a)                //use of while loop..it repeats until the max number of slots entered is less than 20
	   {
		   printf("enter the number of slots (max 20)");
		   scanf("%d", &e);
	   }
		


		if(e<=20 )                   //if the number of slots is less than 20 the the following code excecutes
		  {
	 for(i=0;i<a;i++)      //for loop is used to assign a slot type to a player randomly.a is the maximum number of players inputted by the user
	{
		 
		   j=1+rand()%2;       //generates a random number between 1 and 3
		  
		   if(j==1)           //if the random number generated is 1 then that player is assigned to ground
		   {
	          
			strcpy(players[i].ground,"ground"); //players from data struct is assigned ground
			//printf("\n%s\n",players[i].ground);
			strcpy(player[i].slots,"ground");    //player from the struct slot is assigned ground slot
			printf("\nplayer %d is assigned to %s\n",i+1,player[i].slots); //player from struct data is printed
			player[i].slotsnum=j;    //player.slotsnum from struct data is taking the value of j
				  arraynumber[i]=i;
				 
			
		  }
		
		   if(j==2)
		   {
			   strcpy(players[i].hill,"hill");   //players from data struct is assigned hill
			 // printf("\n%s\n",players[i].hill);
			  strcpy(player[i].slots,"hill");  //player from the struct slot is assigned hill
			printf("\nplayer %d is assigned to %s\n",i+1,player[i].slots); //player from struct data is printed
			  player[i].slotsnum=j;  //player.slotsnum from struct data is taking the value of j
			  arraynumber[i]=i;
			  
		   }
		   
		   
		   if(j==3)
			   
		   {
			 strcpy(players[i].city,"city");  //players from data struct is assigned city
		   // printf("\n%s\n",players[i].city);
			strcpy(player[i].slots,"city");  //player from the struct slot is assigned city
			printf("\n player %d is assigned to %s\n",i+1,player[i].slots);//player from struct data is printed
			 player[i].slotsnum=j;    //player.slotsnum from struct data is taking the value of j
			 arraynumber[i]=i;
			 

		   }
		
		
		 }
		   
	   }
	int num,l;
	int number;
		for(l=0;l<a;l++)       //for loop where a is the total number of players.This loop asks each user to give specific input-move or attack
		{
		   printf("\n enter whether you want player%d \n move forward=0 \n move backward=1\n atttack=2\n",l+1);//enter a number to move or attack the player
		   scanf("%d",&num);
		   switch(num)             //switch statement -o-move forward,1-move backwards and 2 to attack
		   case 0:
		   {
			   if(player[l].slotsnum==1)  //if the player is assigned ground,that is the slotsnum is 1,then it moves forward to hill
			   {
				   strcpy(player[l].slots,"hill");
				   printf("\nplayer %d is assigned to %s\n",l+1,player[l].slots);
					  if(player[l].Dexterity<50)      //capabities of player L changes as he moves to the hill
					  {
						  player[l].Strength=player[l].Strength-10;
						  printf("player loses 10 strength points\n player%d strength points=%d\n",l+1,player[l].Strength);
					  }
					  else if(player[l].Dexterity>=60)
					  {
						  player[l].Strength=player[l].Strength+10;
						  printf("\nplayer gains 10 strength points\n player%d strength points=%d\n",l+1,player[l].Strength);

					  }

						  
					   
			   }
			   
			   
			   else if(player[l].slotsnum==2)  //if the player is assigned hill initially,that is the slotsnum is 2,then it moves forward to city
			   { 
				   strcpy(player[l].slots,"city");
				   printf("\n player %d is assigned to %s\n",l+1,player[l].slots);
				   if(player[l].Smartness>60)    //capabities of player L changes as he moves to the hill
					  {
						  player[l].MagicSkills=player[l].MagicSkills+10;
						  printf("\nplayer gains 10 magic points\n player%d magic skills=%d\n",l+1,player[l].MagicSkills);
					  }
					  else if(player[l].Smartness<=50)
					  {
						  player[l].Dexterity=player[l].Dexterity-10;
						  printf("\nplayer loses 10 dexterity points\n player%d dexterity points=%d\n",l+1,player[l].Dexterity);

					  }
			   }
			   
			   else if(player[l].slotsnum==3)  //if the player is assigned city initially,that is the slotsnum is 3,then it cannot move forward 
			   {
					strcpy(player[l].slots,"city");

				   printf("\nplayer %d is assigned to %s\n and the player cannot move forward",l+1,player[l].slots);
				   
			   }
			   break;
			   
			   
			 case 1:                       
			 {
				  if(player[l].slotsnum==1)    //if the player is assigned ground,that is the slotsnum is 1,so he cannot move backward
					  { 
							strcpy(player[l].slots,"ground");
							printf("\n player %d is assigned to %s\n and the player cannot move backwards",l+1,player[l].slots);
					   }
					 
					 
				 else if(player[l].slotsnum==2)// if the player is assigned to hill,that is slotnum=2 ,then he moves backwards to ground
						{
					   strcpy(player[l].slots,"ground");
					   printf("\nplayer %d is assigned to %s\n",l+1,player[l].slots);
					   printf("\nthe capabilities of the player remains unchanged\n");
					   
					   }
					   
				 else if(player[l].slotsnum==3)// if the player is assigned to city ,that is slotnum=3 ,then he moves backwards to hill
						 {
				   strcpy(player[l].slots,"hill");
				   printf("\nplayer %d is assigned to %s\n",l+1,player[l].slots);
					  if(player[l].Dexterity<50)        //the capabilities of the player changes accordingly
					  {
						  player[l].Strength=player[l].Strength-10;
						  printf("player loses 10 strength points\n player%d strength points=%d\n",l+1,player[l].Strength);
					  }
					  else if(player[l].Dexterity>=60)
					  {
						  player[l].Strength=player[l].Strength+10;
						  printf("\nplayer gains 10 strength points\n player%d strength points=%d\n",l+1,player[l].Strength);

					  }
				
						  
						 }	 
				   break;
				 
			 }
			 case 2:                   
			 {
				 for(i=0;i<a;i++)
				 {
					 if(player[i].slotsnum==1)           //to know which player is nearest..the array prints out all the slots assisgned to the players
					 {
						 for(k=0;k<5 && arraynumber[k]!='\0';k++)  //for loop to print out the contents of the array
						 {
					       printf("player%d is %d\n",i+1,arraynumber[i]);
				         }
					 }
				     
				 }
				 /*int k,p;
				 for(p=0;p<a;p++)                   // an attempt to work out the attack
				 {
					 k=0; 
					  if(player[p].slotsnum==1)
					  {				 
							 while(k<a && arrayground[k]!='\0' )
							 {
								 printf("\n%d\n",arrayground[k]);
								 k++;
							 }
							 
							 
					  }
					  else if(player[p].slotsnum==2)
					  { 
						 while(k<a && arrayhill[k]!='\0' )
							 {
								 printf("hill%d\n",arrayhill[k]);
								 k++;
							 } 
						  
					  }
					  
					   else if(player[p].slotsnum==3)
					   {
							 while(k<a && arraycity[k]!='\0')
							 {
								 printf("city\n%d\n",arraycity[k]);
								 k++;
							 }
					   }
					  
				 }*/
			 }
			 
			 
		   }}
}
	