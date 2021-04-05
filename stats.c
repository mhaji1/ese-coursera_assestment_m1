/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stat.c
 * @brief implementation of stat.c
 *
 * 
 *
 * @author Mohamed Haji
 * @date 4/1/2021
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};



}

void print_statistic(unsigned char test[]){}

void print_array(unsigned char test[],int l){}

int find_mean(unsigned char test[],int l){}

int find_median(unsigned char test[], int l){}

int find_maximum(unsigned char test[],int l){}

int find_minimum(unsigned char test[],int l){}

void swap(unsigned char *a, unsigned char *b){}

void sort_array(unsigned char test[],int l){}
