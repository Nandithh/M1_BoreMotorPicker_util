#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"MainBoreMotor.h"

void details()
{

	printf("Enter your  name:\n");
	scanf("%s", B.name);

    printf("Enter email ID :\n");
    scanf("%s", B.email);

    printf("Enter the permanent address :\n");
    scanf("%s", B.address);

    printf("Enter the phone number : \n");
    scanf("%s", B.phonenumber);
}

void Texmo()
{
    int price,motorsize,HP,buy;
    int a[10]={17300,29600,37000,30950,44650,51300};
    int *ptr =a;
    printf("Enter the size of motor you want \n");
    printf(" 4 inches (press 1)\n");
    printf(" 6 inches (press 2)\n");
    scanf("%d",&motorsize);

    printf("Enter the HP you want \n");
    printf(" 2 HP (press 1)\n");
    printf(" 5 HP (press 2) \n");
    printf(" 6 HP (press 3) \n");
    scanf("%d",&HP);

    if(motorsize == 1 && HP == 1)
    {
        price =  *ptr;

    }
    else if (motorsize == 1 && HP == 2)
    {
        price= *(ptr +1);
    }

    else if (motorsize == 1 && HP == 3)
    {
        price= *(ptr+2);
    }

     else if(motorsize == 2 && HP == 1)
    {
        price = *(ptr+3);

    }
    else if (motorsize == 2 && HP == 2)
    {
        price= *(ptr+4);
    }

    else if (motorsize == 2 && HP == 3)
    {
        price= *(ptr+5);
    }
    printf("**********************************************************************************");
    printf("\n The price of texmo motor is: %d\n", price);
    printf("\n**********************************************************************************\n");
    printf("If you want to buy press 1 else press 2 \n");
    scanf("%d",&buy);
    if (buy == 1)
    {
    printf("Enter your details \n");
       details();
    }

    printf("********************************************************************************\n");
    printf("\nThis is your billing details\n");
    printf(" Name %s\n", B.name);
    printf(" Phonenumber: %d \n ", B.phonenumber);
    printf(" email id: %s \n ", B.email);
    printf("Your texmo motor of will be delivered to your address\n", HP, B.address);

    printf("----------thank you------------!\n");
}

void Kirloskar()
{
    int price,motorsize,HP,buy;
    int a[10]={19700,30000,38250,333000,45600,51500};
    int *ptr =a;
    printf("Enter the size of motor you want \n");
    printf(" 4 inches (press 1)\n");
    printf(" 6 inches (press 2)\n");
    scanf("%d",&motorsize);

    printf("Enter the HP you want \n");
    printf(" 2 HP (press 1)\n");
    printf(" 5 HP (press 2) \n");
    printf(" 6 HP (press 3) \n");
    scanf("%d",&HP);

    if(motorsize == 1 && HP == 1)
    {
        price =  *ptr;

    }
    else if (motorsize == 1 && HP == 2)
    {
        price= *(ptr +1);
    }

    else if (motorsize == 1 && HP == 3)
    {
        price= *(ptr+2);
    }

     else if(motorsize == 2 && HP == 1)
    {
        price = *(ptr+3);

    }
    else if (motorsize == 2 && HP == 2)
    {
        price= *(ptr+4);
    }

    else if (motorsize == 2 && HP == 3)
    {
        price= *(ptr+5);
    }
    printf("**********************************************************************************");
    printf("\n The price of Kirloskar motor is: %d\n", price);
    printf("\n********************************************************************************** \n");
    printf("If you want to buy press 1 else press 2 \n");
    scanf("%d",&buy);
    if (buy == 1)
    {
    printf("Enter your details \n");
       details();
    }

    printf("********************************************************************************\n");
    printf("\nThis is your billing details\n");
    printf(" Name %s\n", B.name);
    printf(" Phonenumber: %d \n", B.phonenumber);
    printf(" email id: %s \n", B.email);
    printf("Your Kirloskar motor of will be delivered to your address\n",HP, B.address);

    printf("--------------thank you--------------\n");
}

void CRI()
{
    int price,motorsize,HP,buy;
    int a[10]={16500,29000,37000,30000,43600,50300};
    int *ptr =a;
    printf("Enter the size of motor you want \n");
    printf(" 4 inches (press 1)\n");
    printf(" 6 inches (press 2)\n");
    scanf("%d",&motorsize);

    printf("Enter the HP you want \n");
    printf(" 2HP  (press 1)\n");
    printf(" 5 HP (press 2) \n");
    printf(" 6 HP (press 3) \n");
    scanf("%d",&HP);

    if(motorsize == 1 && HP == 1)
    {
        price =  *ptr;

    }
    else if (motorsize == 1 && HP == 2)
    {
        price= *(ptr +1);
    }

    else if (motorsize == 1 && HP == 3)
    {
        price= *(ptr+2);
    }

     else if(motorsize == 2 && HP == 1)
    {
        price = *(ptr+3);

    }
    else if (motorsize == 2 && HP == 2)
    {
        price= *(ptr+4);
    }

    else if (motorsize == 2 && HP == 3)
    {
        price= *(ptr+5);
    }

    printf("**********************************************************************************");
    printf(" \n The price of CRI motor is: %d\n", price);
    printf(" \n********************************************************************************** \n");
    printf("If you want to buy press 1 else press 2 \n");
    scanf("%d",&buy);
    if (buy == 1)
    {
    printf("Enter your details\n");
       details();
    }

    printf("********************************************************************************\n");
    printf("\nThis is your billing details\n");
    printf(" Name %s\n", B.name);
    printf(" Phonenumber: %d \n", B.phonenumber);
    printf(" email id: %s \n ", B.email);
    printf("Your CRI-pump will be delivered to your address\n", B.address);

    printf("--------------------thank you-----------------\n");
}



void Taro()
{
    int price,motorsize,HP,buy;
    int a[10]={17000,29500,37200,30000,45500,51000};
    int *ptr =a;
    printf("Enter the size of motor you want \n");
    printf(" 4 inches (press 1)\n");
    printf(" 6 inches (press 2)\n");
    scanf("%d",&motorsize);

    printf("Enter the HP you want \n");
    printf(" 2HP  (press 1)\n");
    printf(" 5 HP (press 2) \n");
    printf(" 6 HP (press 3) \n");
    scanf("%d",&HP);

    if(motorsize == 1 && HP == 1)
    {
        price =  *ptr;

    }
    else if (motorsize == 1 && HP == 2)
    {
        price= *(ptr +1);
    }

    else if (motorsize == 1 && HP == 3)
    {
        price= *(ptr+2);
    }

     else if(motorsize == 2 && HP == 1)
    {
        price = *(ptr+3);

    }
    else if (motorsize == 2 && HP == 2)
    {
        price= *(ptr+4);
    }

    else if (motorsize == 2 && HP == 3)
    {
        price= *(ptr+5);
    }

    printf("**********************************************************************************");
    printf(" \n The price of Taro motor is: %d\n", price);
    printf(" \n********************************************************************************** \n");
    printf("If you want to buy press 1 else press 2 \n");
    scanf("%d",&buy);
    if (buy == 1)
    {
    printf("Enter your details\n");
       details();
    }

    printf("********************************************************************************\n");
    printf("\nThis is your billing details\n");
    printf(" Name %s\n", B.name);
    printf(" Phonenumber: %d \n", B.phonenumber);
    printf(" email id: %s \n ", B.email);
    printf("Your Taro-pump will be delivered to your address\n", B.address);

    printf("--------------------thank you-----------------\n");
}


