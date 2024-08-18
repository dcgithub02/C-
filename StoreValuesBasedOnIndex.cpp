 #include<iostream>
 using namespace std;
 int main()
{
 	int offset=0,index=0,value;
 	int numbers[10] ,temp[10];
 	for(offset=0;offset<10;offset++)
 	{
 		cout<<"Enter the index ";
 		cin>>index;
 		cout<<"enter the value ";
 		cin>>value;
 		numbers[index]=value;
 	}
 	for(offset=0;offset<10;offset++)
 	{
 		temp[numbers[offset]]++;
	 }
	 for(offset=0;offset<10;offset++)
 	{
 		cout<<temp[offset];
 	}
}
