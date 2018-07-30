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
	printf("\t\t    WELCOME to STRANGE GAME PLATFORM\n\n");
	printf("--------------------------------------------------------------------------------\n");
	
	getch();
	
	printf("1.  Play the Brick Game\n2.  Play the Letter Game\n3. Exit");
	printf("\n\nChoose what to do (1,2,3): ");
	scanf("%d",&c);
    
    
    	if(c==1)
    	{
	
			printf("NULL");
		}
		
	
						

		if (c==2)
		{
				void Instructions( );
					int PlayGuess(char solution);
						char  GetLetter(  );
					int CompareLetters(char guess, char solution);
 
 	}
			int main()
			{   
			int i=0;
			int numgames=0;
			char solution;
			char guess;
			int compareletter(char guess, char solution);
			FILE *inp;
			inp = fopen("inputLet.txt","r");
			fscanf(inp,"%c",&solution);
			Instructions();
			printf("Please enter the number of games you want to play\n");
			scanf("%d",& numgames);
			for(i=1;i<=numgames;i++)
			{
			    fscanf(inp, "%c", &solution);
			        PlayGuess(solution);
			        printf("\nThe letter is %c\n" , solution);
			}
 
 
 
 
		fclose(inp);
		 
		 
		}
		void Instructions( )
		{
		printf("Letter guessing game\n");
		printf("Enter how many time you want to try(1 – 4 games)\n");
		printf("You have 5 chances to guess each letter\n");
		printf("Start now\n");
		}
		 
		 
		     
		int PlayGuess(char solution)
		{ 
		    int numGuesses=0;
		    int winOrLose =0;
		    while(numGuesses < MG)
		    {
		        GetLetter();
		 
		 
		        numGuesses = numGuesses +1;
		        if(numGuesses>MG)
		    {
		        printf("You have run out of guesses\n");
		    }
		    }
		     
		    return 0;
		}
		 
		 char GetLetter()
		{
		    char guess=0;
		    char solution;
		    printf("Enter a guess:", guess);
		    scanf(" %c",&guess);
		    CompareLetters(guess,solution);
		    return guess;
		}
		 
		 
		 
		int CompareLetters(char guess, char solution)
		{ 
		if (guess==solution) 
		{    printf("Great Job!\n");
		return 1;
		}
		else
		if (guess<solution)
		{
		printf("letter you are looking for comes after %c\n", guess);
		printf("\ntry harder\n");
		GetLetter();
		 
		 
		return 0;
		}
		else
		    if (guess>solution)
		{ printf("letter you are lookingfor comes before %c", guess);
		printf("\ntry harder\n");
		GetLetter();
		return 0;
	}
	

					
				if (c==3)
				{
					printf("\n\nBye!\n");
				}
					getch();
					
							
		    return 0;
	}
}







																																//F.Han Keceli
																																//201611037
