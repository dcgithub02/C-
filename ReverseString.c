//hello how are you?--?you are how hello ?
#include<stdio.h>
int main()
{
   char name[30]="hello how are you";
   int offset,offset1=0,length;
   char * name1;
 
    for(length=0;name[length]!='\0';length++);
      name1=calloc(length+1,sizeof(int));
   for(offset=length-1;offset>=0;offset--,offset1++)
   {
   	   name1[offset1]=name[offset];
   }
   printf("%s",name1);
}
