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
		}