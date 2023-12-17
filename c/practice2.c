// #include<stdio.h>
// int main()
// {
	
// 	char str[20]="collegewallah";
// 	str[2]='b';
// 	int i=0;
//     printf("HELLo");
// 	while(str[i]!='\0');
// 	{
// 		printf("%c",str[i]);
// 		i++;
// 	}
// 	return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
	typedef struct pokemon{
		int hp; 
		int speed;
		int attack;
		char tier;
		char name[50];
		
	} pokemon;
	
	pokemon arr[3];
	arr[0].hp=100;
	arr[0].speed=50;
	arr[0].attack=60;
	arr[0].tier='A';
	strcpy(arr[0].name,"Pikachu");
	
	arr[1].hp=10;
	arr[1].speed=90;
	arr[1].attack=40;
	arr[1].tier='B';
	strcpy(arr[1].name,"Charizard");
	
	arr[2].hp=800;
	arr[2].speed=70;
	arr[2].attack=20;
	arr[2].tier='C';
	strcpy(arr[2].name,"Mottow");
	
	for(int i=0;i<3;i++)
	{
		printf("%s\n",arr[i].name);
		printf("HP-%d\n",arr[i].hp);
		printf("SPEED-%d\n",arr[i].speed);
		printf("ATTACK-%d\n",arr[i].attack);
		printf("TIER-%c\n",arr[i].tier);
		
	}
	return 0;	
}