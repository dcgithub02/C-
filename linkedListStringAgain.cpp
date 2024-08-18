#include<iostream>
using namespace std;
char * names[10];
int baseAddress=-1,previousAddress=0,nextInt[10];
char* inputName(char * const text)
{
	char *enterName;
	char ch;
	int offset=0;
	printf(text);
	enterName= new char[30];
	while((ch=fgetc(stdin))!='\n')
	{
		enterName[offset++]=ch;
	}
	enterName[offset]='\0';
	return enterName;
}

void insertName(int currIndex,char * name)
{
	names[currIndex]=name;
	nextInt[currIndex]=-1;
	if(baseAddress==-1)
	{
		baseAddress=currIndex;
		previousAddress=currIndex;
		return;
	}
	nextInt[previousAddress]=currIndex;
	previousAddress=currIndex;
}
void displayAll(int baseAddress)
{
	int copyBase;
	copyBase=baseAddress;
	while(copyBase!=-1)
	{
		printf("%s",names[copyBase]);
		copyBase=nextInt[copyBase];
	}
	printf("NULL");
	
}
int main()
{
char * name;
int offset,index,flag=1;
int indexListing[10]={0};


	while(flag==1)
	{
	
do
{
	//printf("\n\t Enter name ");
	name= inputName("Please enter the name  ");
		up:
		printf("\n\t Enter index ");
		scanf("%d",&index);
		if(index<0 || index >10)
		{
			printf("Enter valid index again ....");
			goto up;
		}
		indexListing[index]++;
		
	}while(indexListing[index]>=2);
	insertName(index,name);
	printf("press 1 to continue or 0 to exit");
	scanf("%d",&flag);
		fflush(stdin);
}		
displayAll(baseAddress);
}
