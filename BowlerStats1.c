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
	int offset;
	printf(textMsg);
	char *name= new char[20];
	while(ch=fgetc(stdin)!='\n')
	{
	  name[offset]=ch;
	  offset++;
		
	}
	name[offset]='\0';
	return name;
}

int main()
{
	float *bowlerStats;
	char *captions[7];
	int offset=0,index,offset1;
	int overs,runs,wide,noBall,wickets;
	float **noOfBowlers;
	char *bowlerName;
	

	captions[0]="Enter Name : ";
	captions[1]="Over Bowled   : ";
	captions[2]="Runs conceded : ";
	captions[3]="Wickets Taken : ";
	captions[4]="Wideballs     : ";
	captions[5]="No Balls      : ";
	
	for(offset=0;offset<10;offset++)
	{
	struct BowlerAnalysis *currPtr;
	currPtr=new struct BowlerAnalysis[];
	currPtr->name=input(captions[0]);
	cout<<endl<<captions[1];
	currPtr->overs=cin>>overs;
	cout<<endl<<captions[2];
	currPtr->runsConceded=cin>>runs;
	cout<<endl<<captions[3];
	currPtr->wickets=cin>>wickets;
	cout<<endl<<captions[4];
	currPtr->wideBall=cin>>wide;
	cout<<endl<<captions[5];
	currPtr->noBall=cin>>noBall;
	}
//   for(offset1=0;offset1<2;offset1++)
//   {
//    bowlerStats=noOfBowlers[offset1];
//	for(offset=0;offset<5;offset++)
//	{
//		printf("\n\t%s : %0.2f",captions[offset],bowlerStats[offset]);
//	}
	
}
}

