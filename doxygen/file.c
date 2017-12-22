/**
 * @file file.c
 *
 * @brief Simple test file
 *
 * @author Santhosh Kumar A
 * @date 22 Dec 2017
 *
 * @see https://github.com/santhoshamilineni/quick_start.git
 */

#include <stdio.h>
#include "file.h"

/** 
 * @brief This function is used for adding 2 numbers.
 *
 * @detail Describe in detail
 *
 * @param [in ] num1 	Input number 1
 * @param [in ] num2 	Input number 2
 *
 * @param [out] return 	Sum
 */
int addition(int num1,int num2) 
{
	return num1+num2;
}

/** 
 * @brief Function for sending rf packets over the IEEE802.15.4 rf socket.
 *
 * @param [in ] argc 	Number of command-line arguments passed by the user including the name of the program.
 * @param [in ] argv 	Array of character pointers listing all the arguments.
 *
 * @param [out] return 	0 Success, -1 Fail
 */
int main(int argc,char *argv[]) 
{
	int a,b,sum;
	
	a=10;
	b=20;
	sum = addition(a,b);
	printf("Sum a,b is :%d\n",sum);
	return 0;
}

