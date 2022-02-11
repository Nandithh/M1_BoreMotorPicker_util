#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"MainBoreMotor.h"

void details()
{
    printf("Enter the Bore depth:\n");
	scanf("%d", &B.bore_depth);

    printf("Enter your  purpose:\n");
	scanf("%s", B.purpose);

	printf("Enter your  name:\n");
	scanf("%s", B.name);

    printf("Enter email ID :\n");
    scanf("%s", B.email);

    printf("Enter the permanent address :\n");
    scanf("%s", B.address);

    printf("Enter the phone number : \n");
    scanf("%s", B.phonenumber);
}

void Agri()
{
    int result;
    B.bore_depth;
    if(B.bore_depth <=100 && B.bore_depth >= 0)
    {
        result = 5 HP;
 
    }
    else if(B.bore_depth >= 101 && B.bore_depth <= 200)
    {
        result = 7.5 HP;
 
    }
    else if(B.bore_depth >= 201 && B.bore_depth <= 300)
    {
        result = 10 HP;
 
    }
    else
    {
        result = 12.5 HP;
    }

    printf("****Final Results****\n\n");
    printf("Name : %s\n", B.name);
    printf("For Agriculture purpose, the motor for your requirement is: %d\n", result);
    printf("The depth of your bore is: %d\n", B.bore_depth);
}

void Industry()
{
    int result;
    B.bore_depth;
    if(B.bore_depth <=100 && B.bore_depth >= 0)
    {
        result = 7.5 HP;
 
    }
    else if(B.bore_depth >= 101 && B.bore_depth <= 200)
    {
        result = 10 HP;
    }
    else if(B.bore_depth >= 201 && B.bore_depth <= 300)
    {
        result = 12.5 HP;
    }
    else
    {
        result = 15 HP;
    }
    printf("****Final Results****\n\n");
    printf("Name : %s\n", B.name);
    printf("For Industrial purpose, the motor for your requirement is: %d\n", result);
    printf("The depth of your bore is: %d\n", B.bore_depth);
}

void Domestic()
{
    int result;
    B.bore_depth;
    if(B.bore_depth <=30 && B.bore_depth >= 0)
    {
        result = 3 HP;
 
    }
    else if(B.bore_depth >= 31 && B.bore_depth <= 50)
    {
        result = 5 HP;
    }
    else if(B.bore_depth >= 51 && B.bore_depth <= 100)
    {
        result = 7.5 HP;
    }
    else
    {
        result = 10 HP;
    }
    printf("****Final Results****\n\n");
    printf("Name : %s\n", B.name);
    printf("For Domestic purpose, the motor for your requirement is: %d\n", result);
    printf("The depth of your bore is: %d\n", B.bore_depth);
}