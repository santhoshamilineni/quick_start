/**
 * @file file.h
 *
 * @brief This header file contains all sample file definitions.
 *
 * @author Santhosh Kumar A
 * @date 22 Dec 2017
 *
 * @see https://github.com/santhoshamilineni/quick_start.git
 */

#ifndef __FILE_H__
#define __FILE_H__

/**
 * @brief Use brief, explination
 *
 * Detailed explanation.
 */
typedef struct file_struct {
  float a;    /** Information about the member #a. */
  int   b;    /** Information about the member #b. */
  char  c;    /** Information about the member #b. */
} file;


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
int addition(int num1,int num2);

#endif
