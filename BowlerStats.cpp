#include<iostream>
using namespace std;
int main()
{
	float *bowlerStats;
	char *captions[10];
	int offset=0,index,offset1;
	float **noOfBowlers;
	float avgRuns[10];
	
	//float *bowlerDetails;
//	char *bowlerName;
	captions[0]="Over Bowled   : ";
	captions[1]="Runs conceded : ";
	captions[2]="Wickets Taken : ";
	captions[3]="Wideballs     : ";
	captions[4]="No Balls      : ";
	captions[5]="Avg. Runs     : ";
	
	noOfBowlers= new float*[10];
	offset1=0;
	while(offset1<2)
	{
		cout<<"Enter bowler details : "<<offset1+1;
		bowlerStats= new float[6];
		index=0;
		while(index<5)
		{
			cout<<endl<<captions[index];
			cin>>bowlerStats[index];
			index++;
		}
		noOfBowlers[offset1]=bowlerStats;
		offset1++;
}
for(offset1=0;offset1<2;offset1++)
   {
    bowlerStats=noOfBowlers[offset1];
    bowlerStats[5]=bowlerStats[1]/bowlerStats[0];
	}
   for(offset1=0;offset1<2;offset1++)
   {
   	
    bowlerStats=noOfBowlers[offset1];
	for(offset=0;offset<6;offset++)
	{
		printf("\n\t%s : %0.2f",captions[offset],bowlerStats[offset]);
	}
	
}
}

