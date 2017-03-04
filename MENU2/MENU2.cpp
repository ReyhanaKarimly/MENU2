#include <stdio.h>
#include <conio.h>
void main()
{
char menu,submenu;
float input,output1,output2;
printf("Enter t, P or h: ");
scanf("%c",&menu);
printf("Enter number: ");
scanf("\n%f",&input);
printf("Enter unit: ");
scanf("\n%c", &submenu);
if (menu=='t')
{
if (submenu=='C')
{
	output1=(20*input)/11+32;
	output2=input+273;
	printf("F=%g\nK=%g",output1,output2);

}
else if (submenu=='F')
{
	output1=11*(input-32)/20;
	output2=output1+273;
	printf("C=%g\nK=%g",output1,output2);
}
else if (submenu=='K')
{
	output1=input-273;
	output2=20*output1/11+32;
	printf("C=%g\nF=%g",output1,output2);
}
else 
	printf("\nWrong operation!");

}
else if (menu=='P')
{
	if (submenu=='A')
	{
	output1=input*760;
	printf("%g atm=%g mmHg",input,output1);
	}
	else if (submenu=='H')
	{
	output1=input/760;
	printf("%g mmHg=%g atm",input,output1);
	}
	else
		printf("\nWrong operation!");
}
else if (menu=='h')
{
	if(submenu=='%')
printf("Humidity=%g percent",input);
	else 
		printf("\nWrong operation!");
}
else 
	printf("\nWrong operation!");
getch();
}