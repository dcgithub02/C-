#include<iostream>
#include<stdlib.h>
using namespace std;
struct BowlerAnalysis;
struct BowlerAnalysis
{
	char *name;
	int runsConceded,wickets,wideBall,noBall;
	float overs,avgRuns;
};
char* input(char const * textMsg)
{
	char ch;
	int offset=0;
	printf(textMsg);
	char *name= new char[20];
	while((ch=fgetc(stdin))!='\n')
	{
	  name[offset]=ch;
	  offset++;
		
	}
	name[offset]='\0';
	return name;
}

int main()
{
	struct BowlerAnalysis *bowlerStats[10];
	struct BowlerAnalysis *currPtr;
	int option=1;
	
	char *captions[7];
	int offset=0,index,offset1;
	captions[0]="Enter Name : ";
	captions[1]="Over Bowled   : ";
	captions[2]="Runs conceded : ";
	captions[3]="Wickets Taken : ";
	captions[4]="Wideballs     : ";
	captions[5]="No Balls      : ";
	
	for(offset=0;offset<5&&option==1;offset++)
	{
	  
	
	currPtr=new struct BowlerAnalysis;
	currPtr->name=input(captions[0]);
	cout<<endl<<captions[1];
	cin>>currPtr->overs;
	cout<<endl<<captions[2];
	cin>>currPtr->runsConceded;
	cout<<endl<<captions[3];
	cin>>currPtr->wickets;
	cout<<endl<<captions[4];
	cin>>currPtr->wideBall;
	cout<<endl<<captions[5];
	cin>>currPtr->noBall;
	bowlerStats[offset]=currPtr;
	printf("enter your option 1 for continue 2 for exit");
	scanf("%d",&option);
	fflush(stdin);
	
	}
	offset=0;
	while(offset<5)
	{
		printf("\n\t %s %s",captions[0],bowlerStats[offset]->name);
		printf("\n\t %s %f",captions[1],bowlerStats[offset]->overs);
		printf("\n\t %s %d",captions[2],bowlerStats[offset]->runsConceded);
		printf("\n\t %s %d",captions[3],bowlerStats[offset]->wickets);
		printf("\n\t %s %d",captions[4],bowlerStats[offset]->wideBall);
		printf("\n\t %s %d",captions[5],bowlerStats[offset]->noBall);
		offset++;
	}
}


