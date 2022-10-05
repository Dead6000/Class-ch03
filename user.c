#include<stdio.h>
int main(void)
{
	int score;
	int level;
		
	print("¿é¤J¤À¼Æ¡G");	
	scanf ("%d",&score);
	level = score/10;	
	switch(level)	{
		case 10:
		case 9:
		  puts("A");
		  break;
		case 8: 
		  puts("B");
		  break;
		case 7: 
		  puts("C");
		  break;
		case 6: 
		  puts("D");
		  break;
		default:
		  puts ("E");
		  break;
	}
	 return 0;	
}

