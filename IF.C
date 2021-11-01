#include<stdio.h>
#include<conio.h>
int raghul=0;

void main()
{
   do
    {
    clrscr();
	    dhansa:
	    printf("\nEnter raghul's status:");
	    scanf("%d", &raghul);
		    if(raghul==0)
		    {
			printf("\nRaghul is sitting");
		    //	 raghul=1;
		     //  getch();
		   //	continue;
		   goto dhansa;
		    }
		    else if(raghul==1)
		    {
			printf("\nRaghul is standing");
//			break;
		    }
		    else
		    {
			printf("\nInvalid input");
		    }
     getch();
     }
while(raghul);
}

