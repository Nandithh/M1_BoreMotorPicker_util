/**
 * @file MainBoreMotor.h
 * @author nandith
 * @brief header file
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __MainBoreMotor_H__
#define __MainBoreMotor_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * @brief structure is used to get customer details
 * 
 */

struct BoreMotor
{
	char name[15];
	char email[15];
	char address[100];
	int phonenumber[10];
};

struct BoreMotor B;
#endif
