/*
Name: C Program for Print Pattern
Input = 5
18                      9
18 14                7  9
18 14 10          5  7  9
18 14 10 6     3  5  7  9
18 14 10 6  2  3  5  7  9
18 14 10 6     3  5  7  9
18 14 10          5  7  9
18 14                7  9
18                      9
	
*/
#include<stdio.h>
#include<stdlib.h>
int main() 
{
int i, j,n; 
printf ("Enter Number : "); 
scanf("%d",&n); 
for(i=-n+1;i<n;i++) 
	{
	for(j=-n+1; j<n; j++)
		{
		if (abs (j) >=abs (i)) 
			{ 
			if(j<0) 
			  printf("%-3d", ((abs (j)*2)+1)*2);
			else if (j>0) 
			  printf("%-3d", (abs (j) *2) +1);
			else 
			  printf("2  ");
			}
		else
		 printf("   ");
		}
		printf ("\n");
	}

	
}
