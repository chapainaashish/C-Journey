#include<stdio.h>
int main()
{
	float temp1, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp0;
	char text1, text2, text3, text4, text5, text6 ;
	printf("Enter 'c' for celcius\nEnter 'f' for farhenit \nEnter 'k' for kelvin\n");
	scanf("%c", &text1);
	
	if (text1 == 'c')
	{
		printf("Enter the temperature in celcius\n");
		scanf("%d", &temp1);
		
		printf("Press 'f' to change in farhenit\nPress 'k' for kelvin\n");
		scanf(" %c", &text2);
		
		if (text2=='f')
		{
			temp3 = (18 * temp1 + 32)/10;
			printf("The converted tempreature from celcius to farhenit is %f", temp3);
			
		}
		
		else
		{
			temp0 = temp1 + 273;
			printf("The converted tempreature from celcius to kelvin is %f", temp0);
		}
			
	}
	
	else if (text1 == 'k')
		{
		printf("Enter the temperature in kelvin\n");
		scanf("%f", &temp4);
		
		printf("Press 'f' to change in farhenit\Press 'k' for kelvin\n");
		scanf(" %c", &text3);
		
		if (text3 == 'f')
		{
			temp5 = (18 * temp4 - 4594)/10;
			printf("The converted tempreature from kelvin to farhenit is %f", temp5);
			
		}
		
		else
		{
			temp6 = temp4 - 273;
			printf("The converted tempreature from kelvin to celcius is %f", temp6);
		}
}
	else
		{
				
		
 			
}
	return 0;
}
