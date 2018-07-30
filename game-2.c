#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include <windows.h>

int main(void)

{
system("Color A");
	
	int i,a;
	int srandom;
	srandom=time(NULL);
	
	int c,c1=-1,count1=0,count2=0,a1;
	char char1,char2;
	
	int d1,count3=1,count4=0,x1=0,x2=0;
	
	
	
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\t     WELCOME to PLAY WITH ME GAME PLATFORM\n\n");
	printf("--------------------------------------------------------------------------------\n");
	
	getch();
	
	printf("1. Play the Number Guessing Game\n2. Play the Scissor-Rock-Paper Game\n3. Exit");
	printf("\n\nChoose what to do (1,2,3): ");
	scanf("%d",&c);
    
    
    	if(c==1)
    	{
    		printf("\n\n*****Welcome to Number Guessing Game******\n");
    		getch();
    		
			srand(srandom);
    		a = (rand()%100);
    		while(c1!=a)
    		{
    	
    		printf("\nMake a guess or Ask a question (Input M or A):\n ");
    		scanf(" %c",&char1);
    		
    		if(char1=='M' || char1=='m')
    		{
			{
    		printf("\nMake your best guess for the number between 1-100:\n ");
    		scanf(" %d",&c1);
    	
    		}
    		if (c1 > a)
    		{
    			printf("\nIt is higher than the number.\n");
    		}
			else
    		{
    			printf("\nIt is lower than the number.\n ");
    		}
    		count1++;
    		}
    		else if(char1=='A' || char1=='a')
    		{
    			printf("Questions to ask:\n");
    			printf("1. Is it even or odd?\n");
    			printf("2. Is it >50?\n");
    			scanf(" %d",&a1);
    			
    			if(a1 == 1 && a%2==0)
    			{
    				printf("\nNumber is even\n");
    			}
    			else if(a1 == 1 && a%2==1)
    			{
    				printf("\nNumber is odd\n");
    			}
    			if(a1==2 && a >= 50)
    			{
    				printf("\nNumber is >50\n");
    			}
    			else if(a1==2 && a < 50)
    			{
    			printf("\nNumber is not >50\n");
    		}
    		count2++;
			}
    }
    
    			printf("\n\n\n\nCongratulations!! You guessed the number correctly!!!!\n");
    			printf("\n\n\nYou have made %d guesses, you asked %d questions. Bye!\n",count1,count2);
    			
    			getch();
				
}

		if (c==2)
		{
			printf("\n\n*****Welcome to Scissor-Rock-Paper Game ******\n");
			getch();
			
			while(count4<10)
			{
				
    		a = rand()%3;
    		
			printf("\n\nInput 0 for scissor, 1 for rock, 2 for paper:\n");
			scanf("%d",&d1);
			
			
			if(a==0 && d1==0)
			{
				printf("--------------------------------------------------------------------------------\n");
				printf("\n\nThe computer chose scissor. You chose scissor.\n\n");
				printf("\n\nYou draw round %d\n\n",count3);
				printf("\n\nThe result: you %d - %d computer\n\n",x1,x2);
				printf("--------------------------------------------------------------------------------\n");
				count3++;
				count4++;
				d1=0;
				
				
			}
			else if((a==0) && (d1==1))
			{
				printf("--------------------------------------------------------------------------------\n");
				printf("\n\nThe computer chose scissor. You chose rock.\n\n");
				printf("\n\nYou won round %d\n\n",count3);
				x1++;
				printf("\n\nThe result: you %d - %d computer\n\n",x1,x2);
				printf("--------------------------------------------------------------------------------\n");
				count3++;
				count4++;
				d1=0;
	
			}
			else if((a==0) && (d1==2))
			{
			
				printf("--------------------------------------------------------------------------------\n");
				printf("\n\nThe computer chose scissor. You chose paper.\n\n");
				printf("\n\nYou lose round %d\n\n",count3);
				x2++;
				printf("\n\nThe result: you %d - %d computer\n\n",x1,x2);
				printf("--------------------------------------------------------------------------------\n");
				count3++;
				count4++;
				d1=0;
			
			}
			else if((a==1) && (d1==0))
			{
			
				printf("--------------------------------------------------------------------------------\n");
				printf("\n\nThe computer chose rock. You chose scissor.\n\n");
				printf("\n\nYou lose round %d\n\n",count3);
				x2++;
				printf("\n\nThe result: you %d - %d computer\n\n",x1,x2);
				printf("--------------------------------------------------------------------------------\n");
				count3++;
				count4++;
				d1=0;
				
			}
			else if((a==1) && (d1==1))
			{
			
				printf("--------------------------------------------------------------------------------\n");
				printf("\n\nThe computer chose rock. You chose rock.\n\n");
				printf("\n\nYou draw round %d\n\n",count3);
				printf("\n\nThe result: you %d - %d computer\n\n",x1,x2);
				count3++;
				count4++;
				d1=0;
		
			}
				
				else if((a==1) && (d1==2))
			{
			
				printf("--------------------------------------------------------------------------------\n");
				printf("\n\nThe computer chose rock. You chose paper.\n\n");
				printf("\n\nYou lost round %d\n\n",count3);
				x2++;
				printf("\n\nThe result: you %d - %d computer\n\n",x1,x2);
				count3++;
				count4++;
				d1=0;
		
			}
			else if((a==2 && d1==0))
			{
			
				printf("--------------------------------------------------------------------------------\n");
				printf("\n\nThe computer chose rock. You chose scissor.\n\n");
				printf("\n\nYou won round %d\n\n",count3);
				x1++;
				printf("\n\nThe result: you %d - %d computer\n\n",x1,x2);
				count3++;
				count4++;
				d1=0;
			
			}
			else if((a==2 && d1==1))
			{
			
				printf("--------------------------------------------------------------------------------\n");
				printf("\n\nThe computer chose rock. You chose rock.\n\n");
				printf("\n\nYou lose round %d\n\n",count3);
				x2++;
				printf("\n\nThe result: you %d - %d computer\n\n",x1,x2);
				count3++;
				count4++;
				d1=0;
			
			}
			else if((a==2 && d1==2))
			{
			
				printf("--------------------------------------------------------------------------------\n");
				printf("\n\nThe computer chose rock. You chose paper.\n\n");
				printf("\n\nYou draw round %d\n\n",count3);
				printf("\n\nThe result: you %d - %d computer\n\n",x1,x2);
				count3++;
				count4++;
				d1=0;
			
		}
	}
		
		if(x1>x2)
		{
			printf("\n\nHeey!!! You win :) The last score is you %d - %d computer.\n\n",x1,x2);
		}
			else if( x1 == x2)
			{
				printf("\n\nYou draw :| The last score is you %d - %d computer.\n\n",x1,x2);
			}
			else if (x1<x2)
			{
				printf("\n\nOuch!!! You lose :( The last score is you %d - %d computer\n\n",x1,x2);
			}
			
		}
			
		if (c==3)
		{
			printf("\n\nBye!\n");
		}
			getch();
			
					
    return 0;
}







																																//F.Han Keceli
																																//201611037
