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