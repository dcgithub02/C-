#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class AllParties
{
	public:
	virtual void countVote()=0;
	virtual int getVote()=0;
};
class BJP:public AllParties
{
	private:
	int count;
	public:
	void countVote()
	{
		this->count++;
	}
	int getVote()
	{
		return count;
	}
};
class AAP:public AllParties
{
	private:
	int count;
	public:
	void countVote()
	{
		this->count++;
	}
	int getVote()
	{
		return count;
	}
};
class Congress:public AllParties
{
	private:
	int count;
	public:
	void countVote()
	{
		this->count++;
	}
	int getVote()
	{
		return count;
	}
};
int main()
{
	int option;
	AllParties *ptr[3];
	ptr[0]= new BJP();
	ptr[1]= new AAP();
	ptr[2]= new Congress();
	
	while(true)
	{
		printf("\n\tSelect option\
		         \n\t1.BJP\
				 \n\t2.AAP\
				 \n\t3.Congress\
				 \n\t4.Display\
				 \n\t5.EXIT ");
		scanf("%d",&option);
		if(option==5)
		{
			break;
		}
		else if(option>=1 && option<=3)
		{
			ptr[option-1]->countVote();
			
		}
		else if(option==4)
		{
			printf("\n\t Total votes of BJP are %d ",ptr[0]->getVote());
			printf("\n\t Total votes of AAP are %d ",ptr[1]->getVote());
			printf("\n\t Total votes of Congress are %d ",ptr[2]->getVote());
		}
	}
}


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
