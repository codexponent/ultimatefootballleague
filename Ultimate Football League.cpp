#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
/**
 * Shows the menu on the start
 */
void show_menu()
{
	printf("\t\t\tUltimate Football League\n");
	printf("This is a Group & Knockout Phase\n");
	printf("Team's Name Must Be At Least Greater Than 8 Characters\n");
	printf("Nationality Name Must be At Most 5 Characters\n");
}
/**
 * Structure of the object
 */
struct football 
{
	char name[50];  /*!< Name of the Club */
	char nation[50]; /*!< Nationality of the Club */ 
	int ranking=0; /*!< Ranking of the Club */ 
	int points=0; /*!< Points of the Club */ 
	int goals=0; /*!< Goals of the Club */ 
	int score=0; /*!< Score of the Club */ 
	int point1=0; /*!< Points of the Club */ 
};
/**
 * Main Method
 */
int main (void)
{	
	struct football f[10];
	srand(time(NULL));
	int i,j;
	int temp=0;
	int played=0;
	char choice;
	show_menu();
	for (i=0; i<10; i++)
	{
		printf("\t\t\tTeam Number %d\n", i+1);
		fflush(stdin);
		printf("Name of the Football club:");
		gets(f[i].name);
		printf("Nationality of the club:");
		gets(f[i].nation);
	}
	printf("\n");
	printf("Club Name\tNation\tRank\tPlayed\tGoals For\tPoints\n");
	for (i=0; i<10; i++)
	{
		printf("%s\t%s\t%d\t%d\t%d\t\t%d\n",f[i].name,f[i].nation,f[i].ranking,played=0,f[i].goals,f[i].points);
	}
	printf("\n");
	printf("\t\t\tRound 1\n");
	printf("\t\t\tMatches List:\n");
	printf("Enter the Scores:");
	printf("%s-%s:",f[0].name,f[9].name);
	scanf("%d", &f[0].score);
	f[0].goals=f[0].goals+f[0].score;
	printf("-");
	scanf("%d", &f[9].score);
	f[9].goals=f[9].goals+f[9].score;
	if (f[0].score>f[9].score)
	{
		f[0].points=f[0].points+3;
	}
	else if(f[0].score<f[9].score)
	{
		f[9].points=f[9].points+3;
	}
	else 
	{
		f[0].points=f[0].points+1;
		f[9].points=f[9].points+1;
	}
	printf("Do You Want To Sim Matches(Y/N):");
	scanf("%s", &choice);
	if (choice=='Y' || choice=='y')
	{
	for (i=0; i<9; i++)
	{
		printf("Enter the Scores:\n");
		printf("%s-%s:",f[i].name,f[i+1].name);
		f[i].score=1+rand()%9;
		f[i].goals=f[i].goals+f[i].score;
		printf("-");
		f[i+1].score=1+rand()%9;
		f[i+1].goals=f[i+1].goals+f[i+1].score;
		if (f[i].score>f[i+1].score)
		{
			f[i].points=f[i].points+3;
		}
		else if(f[i].score<f[i+1].score)
		{
			f[i+1].points=f[i+1].points+3;
		}
		else
		{
			f[i].points=f[i].points+1;
			f[i+1].points=f[i+1].points+1;
		}
	}
	}	
	else if(choice=='N' || choice=='n')
	{
	for (i=0; i<9; i++)
	{	printf("Enter the Scores:");
		printf("%s-%s:",f[i].name,f[i+1].name);
		scanf("%d", &f[i].score);
		f[i].goals=f[i].goals+f[i].score;
		printf("-");
		scanf("%d", &f[i+1].score);
		f[i+1].goals=f[i+1].goals+f[i+1].score;
		if (f[i].score>f[i+1].score)
		{
			f[i].points=f[i].points+3;
		}
		else if(f[i].score<f[i+1].score)
		{
			f[i+1].points=f[i+1].points+3;
		}
		else
		{
			f[i].points=f[i].points+1;
			f[i+1].points=f[i+1].points+1;
		}		
	}
	}
	printf("\n");
	printf("Club Name\tNation\tRank\tPlayed\tGoals For\tPoints\n");
	for (i=0; i<10; i++)
	{
		printf("%s\t%s\t%d\t%d\t%d\t\t%d\n",f[i].name,f[i].nation,f[i].ranking,played=2,f[i].goals,f[i].points);
	}	
	printf("\n");
	printf("\t\t\tRound 2\n");
	printf("\t\t\tMatches List:\n");
	printf("Enter the Scores:");
	printf("%s-%s:",f[9].name,f[0].name);
	scanf("%d", &f[9].score);
	f[9].goals=f[9].goals+f[9].score;
	printf("-");
	scanf("%d", &f[0].score);
	f[0].goals=f[0].goals+f[0].score;
	if (f[9].score>f[0].score)
	{
		f[9].points=f[9].points+3;
	}
	else if(f[9].score<f[0].score)
	{
		f[0].points=f[0].points+3;
	}
	else
	{
		f[9].points=f[9].points+1;
		f[0].points=f[0].points+1;
	}
	printf("Do You Want To Sim Matches(Y/N):");
	scanf("%s", &choice);
	if (choice=='Y' || choice=='y')
	{
	for (i=9; i>0; i--)
	{
		printf("Enter the Scores:");
		printf("%s-%s:",f[i].name,f[i-1].name);
		f[i].score=1+rand()%9;
		f[i].goals=f[i].goals+f[i].score;
		printf("-");
		f[i-1].score=1+rand()%9;
		f[i-1].goals=f[i-1].goals+f[i-1].score;
		if (f[i].score>f[i-1].score)
		{
			f[i].points=f[i].points+3;
		}
		else if(f[i].score<f[i-1].score)
		{
			f[i-1].points=f[i-1].points+3;
		}
		else 
		{
			f[i].points=f[i].points+1;
			f[i-1].points=f[i-1].points+1;
		}
	}
	}
	else if(choice=='N' || choice=='n')
	{
	for (i=9; i>0; i--)
	{
			
		printf("Enter the Scores:");
		printf("%s-%s:",f[i].name,f[i-1].name);
		scanf("%d", &f[i].score);
		f[i].goals=f[i].goals+f[i].score;
		printf("-");
		scanf("%d", &f[i-1].score);
		f[i-1].goals=f[i-1].goals+f[i-1].score;
		if (f[i].score>f[i-1].score)
		{
			f[i].points=f[i].points+3;
		}
		else if(f[i].score<f[i-1].score)
		{
			f[i-1].points=f[i-1].points+3;
		}
		else 
		{
			f[i].points=f[i].points+1;
			f[i-1].points=f[i-1].points+1;
		}
	}
	}
	printf("\n");
	printf("Club Name\tNation\tRank\tPlayed\tGoals For\tPoints\n");
	for (i=0; i<10; i++)
	{
		printf("%s\t%s\t%d\t%d\t%d\t\t%d\n",f[i].name,f[i].nation,f[i].ranking,played=4,f[i].goals,f[i].points);
	}	
	// sorting
	for (i=0; i<9; i++)
	{
		for (j=i+1; j<10; j++)
		{
			if(f[i].points<f[j].points)
			{
				struct football temp=f[i];
				f[i]=f[j];
				f[j]=temp;
			}
		}
	}	
	printf("\n");
	printf("Club Name\tNation\tRank\tPlayed\tGoals For\tPoints\n");
	for (i=0; i<10; i++)
	{
		printf("%s\t%s\t%d\t%d\t%d\t\t%d\n",f[i].name,f[i].nation,i+1,played=4,f[i].goals,f[i].points);
	}	
	// Semi-Finals 1
	printf("\n");
	printf("These 4 Teams Advances to the Finals\n");
	printf("All The Listed Games Will Be Played On Wemblhy Stadium & is 1 Legged Match\n");
	printf("Club Name\tNation\n");
	for (i=0; i<4; i++)
	{
		printf("%s\t%s\n",f[i].name,f[i].nation);
	}	
		printf("Enter the Scores:");
		printf("%s-%s:",f[0].name,f[3].name);
		scanf("%d", &f[0].score);
		f[0].goals=f[0].goals+f[0].score;
		printf("-");
		scanf("%d", &f[3].score);
		f[3].goals=f[3].goals+f[3].score;
		if (f[0].score>f[3].score)
		{
			printf("Team %s Advances to the Finals\n", f[0].name);
			f[0].point1=f[0].point1+3;
		}
		else if(f[0].score<f[3].score)
		{
			printf("Team %s Advances to the Finals\n", f[3].name);
			f[3].point1=f[3].point1+3;
		}
		else 
		{
			printf("Play Again\n");
			printf("Enter the Scores:");
			printf("%s-%s:",f[0].name,f[3].name);
			scanf("%d", &f[0].score);
			f[0].goals=f[0].goals+f[0].score;
			printf("-");
			scanf("%d", &f[3].score);
			f[3].goals=f[3].goals+f[3].score;
			if (f[0].score>f[3].score)
			{
				printf("Team %s Advances to the Finals\n", f[0].name);
				f[0].point1=f[0].point1+3;
			}
			else if(f[0].score<f[3].score)
			{
				printf("Team %s Advances to the Finals\n", f[3].name);
				f[3].point1=f[3].point1+3;
			}
		}
		printf("\n");
		//Semi-Final 2
		printf("Enter the Scores:");
		printf("%s-%s:",f[1].name,f[2].name);
		scanf("%d", &f[1].score);
		f[1].goals=f[1].goals+f[1].score;
		printf("-");
		scanf("%d", &f[2].score);
		f[2].goals=f[2].goals+f[2].score;
		if (f[1].score>f[2].score)
		{
			printf("Team %s Also Advances to the Finals\n", f[1].name);
			f[1].point1=f[1].point1+3;
		}
		else if(f[1].score<f[2].score)
		{
			printf("Team %s Also Advances to the Finals\n", f[2].name);
			f[2].point1=f[2].point1+3;
		}
		else 
		{
			printf("Play Again\n");
			printf("Enter the Scores:");
			printf("%s-%s:",f[1].name,f[2].name);
			scanf("%d", &f[1].score);
			f[1].goals=f[1].goals+f[1].score;
			printf("-");
			scanf("%d", &f[2].score);
			f[2].goals=f[2].goals+f[2].score;
			if (f[1].score>f[2].score)
			{
				printf("Team %s Also Advances to the Finals\n", f[1].name);
				f[1].point1=f[1].point1+3;
			}
			else if(f[1].score<f[2].score)
			{
				printf("Team %s Also Advances to the Finals\n", f[2].name);
				f[2].point1=f[2].point1+3;
			}
		}
	printf("\n");
	printf("\t\t\tThe Finals\n");
	printf("The Finals Will be Played in the Santiago Bernabeu\n");
	if (f[0].point1>f[3].point1 && f[1].point1>f[2].point1)
	{
		printf("Enter the Scores:");
			printf("%s-%s:",f[0].name,f[1].name);
			scanf("%d", &f[0].score);
			f[0].goals=f[0].goals+f[0].score;
			printf("-");
			scanf("%d", &f[1].score);
			f[1].goals=f[1].goals+f[1].score;
			if (f[0].score>f[1].score)
			{
				printf("The Winner is Team %s. ConGraLuaTion!!", f[0].name);
			}
			else 
			{
				printf("The Winner is Team %s.  ConGraLuaTion!!", f[1].name);
			}
	}
	else if (f[3].point1>f[0].point1 && f[2].point1>f[1].point1)
	{
		printf("Enter the Scores:");
			printf("%s-%s:",f[3].name,f[2].name);
			scanf("%d", &f[3].score);
			f[3].goals=f[3].goals+f[3].score;
			printf("-");
			scanf("%d", &f[2].score);
			f[2].goals=f[2].goals+f[2].score;
			if (f[3].score>f[2].score)
			{
				printf("The Winner is Team %s. ConGraLuaTion!!", f[3].name);
			}
			else 
			{
				printf("The Winner is Team %s. ConGraLuaTion!!", f[2].name);
			}
	}
	else if (f[0].point1>f[3].point1 && f[2].point1>f[1].point1)
	{
		printf("Enter the Scores:");
			printf("%s-%s:",f[0].name,f[2].name);
			scanf("%d", &f[0].score);
			f[0].goals=f[0].goals+f[0].score;
			printf("-");
			scanf("%d", &f[2].score);
			f[2].goals=f[2].goals+f[2].score;
			if (f[0].score>f[2].score)
			{
				printf("The Winner is Team %s. ConGraLuaTion!!", f[0].name);
			}
			else 
			{
				printf("The Winner is Team %s. ConGraLuaTion!!", f[2].name);
			}
	}
	else if (f[3].point1>f[0].point1 && f[1].point1>f[2].point1)
	{
		printf("Enter the Scores:");
			printf("%s-%s:",f[3].name,f[1].name);
			scanf("%d", &f[3].score);
			f[3].goals=f[3].goals+f[3].score;
			printf("-");
			scanf("%d", &f[1].score);
			f[1].goals=f[1].goals+f[1].score;
			if (f[3].score>f[1].score)
			{
				printf("The Winner is Team %s. ConGraLuaTion!!", f[3].name);
			}
			else 
			{
				printf("The Winner is Team %s. ConGraLuaTion!!", f[1].name);
			}
	}	
	getch();
	return 0;
}
