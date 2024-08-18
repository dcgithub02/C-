#include<iostream>
using namespace std;

class LinkdList
{
	private:
	char *indexOfName[30];
	public:	
	char* input(char const *textMsg)
	{
		char ch;
		int offset=0;
		cout<<textMsg;
		char * name= new char[30];
		while(ch!='\n')
		{
			ch=fgetc(stdin);
			name[offset++]=ch;
		}
		name[offset]='\0';
		return name;
	}
	void insertData(char * enterName,int currentIndex)
	{
		this->indexOfName[currentIndex]=enterName;
		this->nextIndex[currentIndex]=-1;
		if(this->baseIndex==-1)
		{
			this->baseIndex=currentIndex;
			this->previousIndex=currentIndex;
		}
	    this->nextIndex[previousIndex]=currentIndex;
		this->previousIndex=currentIndex;
	}
	void showAll()
	{
		int currIndex;
		currIndex=this->baseIndex;
	while(currIndex!=-1)
		{
		cout<<this->indexOfName[currIndex];
		currIndex=this->nextIndex[currIndex];
		}
		cout<<"NULL";
	}
};
int main()
{
	LinkdList obj;
	int index;
  	char *name;
  	char ch;
  	int option=1;
  	int offset=0;
  	int listingStatus[30]={0};
  	while(option==1)
  	{
	 
  	name=obj.input("enter name ");
  	cout<<"name is "<<name;
  	do
  	{
	  up:
    cout<<"enter index ";
    cin>>index;
    if(index<0 || index>30)
    {
    	cout<<"please enter valid index";
    	goto up;
	}
  
  	listingStatus[index]++;
  	}while(listingStatus[index]>=2);
  	obj.insertData(name,index);
  	cout<<"press for continue-->[1] or [0] to exit";
  	cin>>option;
  	fflush(stdin);
  	}
  	obj.showAll();	
}
