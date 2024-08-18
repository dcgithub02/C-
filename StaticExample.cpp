#include<iostream>
class StaticCheck
{
	static float totalMarks;
	int studentMarks;
	float percentage;
	public:
	void calculatePercentage(int studentMarks)
	 {    
		this->percentage=(totalMarks-studentMarks)/100;
		printf("percentage is %.2f",this->percentage);
	}
	
};
float StaticCheck::totalMarks=100; 
int main()
 {
	StaticCheck check;
	check.calculatePercentage(50);
 }
