#ifndef __MainBoreMotor_H__
#define __MainBoreMotor_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct BoreMotor
{
    int bore_depth;
    char purpose[6];
	char name[15];
	char email[15];
	char address[100];
	int phonenumber[10];
};

struct BoreMotor B;
#endif