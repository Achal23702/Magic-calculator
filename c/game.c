#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int Playerscore=0;
	int Computerscore=0;
	int Playerchoice;
	printf("\n\n");
	printf("******WELCOME TO GAME OF STONE PAPER SCISSOR******");
	printf("\n\n");
	printf("You will have a five round of game with computer .");
	printf("\n\n***** LET'S START*****\n\n");
	printf("Press 1 for selecting Stone\n");
	printf("Press 2 for selecting Paper\n");
	printf("Press 3 for selecting Scissor\n");
	printf("\n\n");
	srand(time(NULL));
	for(int i=0;i<5;i++){
	
		printf("\nEnter your choice:");
		scanf("%d",&Playerchoice);
	 int Computerchoice = (rand()%(3-1+1))+1;
		if(Playerchoice==1)
		{
			if(Computerchoice==1){
			printf("\nplayer chose stone and computer chose stone\n");
			printf("Draw\n");	
			}
			else if(Computerchoice==2){
			printf("\nplayer chose stone and computer chose paper\n");
			printf("computer wins\n");
			Computerscore++;		
				
			}
		 else{
			printf("\nplayer chose stone and computer chose scissor\n");
			printf("player wins\n");
			Playerscore++;	
			}
		}
		else if(Playerchoice==2){
		
			if(Computerchoice==1){
			printf("\nplayer chose paper and computer chose stone\n");
			printf("Player wins\n");
			Playerscore++;	
			}
			else if(Computerchoice==2){
			printf("\nplayer chose paper and computer chose paper\n");
			printf("Draw\n");		
				
			}
		 else{
			printf("\nplayer chose paper and computer chose scissor\n");
			printf("Computer wins\n");
			Computerscore++;	
			}
	}
		else if(Playerchoice==3){
		
			if(Computerchoice==1){
			printf("\nplayer chose scissors and computer chose stone\n");
			printf("Computer wins\n");
			Computerscore++;	
			}
			else if(Computerchoice==2){
			printf("\nplayer chose scissor and computer chose paper\n");
			printf("Player wins\n");
			Playerscore++;		
				
			}
		 else{
			printf("\nplayer chose scissors and computer chose scissor\n");
			printf("Draw\n");
				
			}
		}
		else
		printf("wrong answer");
	}
		printf("Player score:%d\n Computer score: %d",Playerscore,Computerscore);
	return 0;
}
