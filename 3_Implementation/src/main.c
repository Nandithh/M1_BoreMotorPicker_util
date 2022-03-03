#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MainBoreMotor.h"
#include "BoreMotor.h"



void main()
{

	int choice;

	{
		printf("****Bore Motor Picker****\n");
		printf("Please select the brand you want to buy(1-4):\n");
		printf("1. Texmo\n");
		printf("2. Kirloskar\n");
		printf("3. CRI-pumps\n");
		printf("4. Taro-pumps\n");
		printf("5. Exit\n");
		printf("Enter your choice :\n");
		scanf("%d", &choice);
		system("cls");


		switch (choice)
		{
		case 1:
			Texmo();
			break;

		case 2:
			Kirloskar();
			break;

		case 3:
		    CRI();
			break;

        case 4:
		    Taro();
			break;

		default:
			printf("SORRY INVALID CHOICE!\n");
			printf("PLEASE CHOOSE BETWEEN 1 2 3 and 4\n");
		}

	}
}
