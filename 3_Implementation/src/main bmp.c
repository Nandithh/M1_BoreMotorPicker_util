#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MainBoreMotor.h"
#include "BoreMotor.h"


void Agri();
void Industry();
void Domestic();
void main()


{ 
	details();
	int choice;
	do
	{
		printf("****Bore Motor Picker****\n");
		printf("Please select your purpose of use(1-4):\n");
		printf("1. Agri\n");
		printf("2. Industry\n");
		printf("3. Domestic\n");
		printf("4. EXIT\n");
		printf("Enter your choice :\n");
		scanf("%d", &choice);
		system("cls");


		switch (choice)
		{
		case 1:
			Agri();
			break;

		case 2:
			Industry();
			break;

		case 3:
		    Domestic();
			break;	

		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("PLEASE CHOOSE BETWEEN 1 2 and 3\n");
		}
		getch();
	} while (choice != 4);
}