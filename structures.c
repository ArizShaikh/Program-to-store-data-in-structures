#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Program to enter student details using structures

struct student			
{
char name[15];
long long int prn;
char branch[10];
}S[5];
int i;

void INPUT()				//function taking input from user
{
for(i=0;i<5;i++)
{
printf("\nEnter name ");
scanf("%s",&S[i].name);
printf("Enter prn ");
scanf("%lld",&S[i].prn);
printf("Enter branch ");
scanf("%s",&S[i].branch);
    }
}
void OUTPUT()				//function to display output or data of students
{
for(i=0;i<5;i++)
{
printf("\nName %s",S[i].name);
printf("\nPRN %lld",S[i].prn);
printf("\nBranch %s",S[i].branch);
    }
}
main()
{
INPUT();				//input function called
OUTPUT();				//output function called
}

