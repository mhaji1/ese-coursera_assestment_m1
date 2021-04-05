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


print_statistic(test);

}


void print_statistic(unsigned char test[]){
  
  printf("Test Array: ");
  print_array(test,SIZE);
  printf("mean: %d \n",find_mean(test,SIZE));
  printf("median: %d \n",find_median(test,SIZE));
  printf("maximum: %d \n",find_maximum(test,SIZE));
  printf("minimum: %d \n",find_minimum(test,SIZE));
  sort_array(test,SIZE);
  printf("Sorted test array from largest to smallest: ");
  print_array(test,SIZE);

}

void print_array(unsigned char test[],int l){
  int i;
  for(i = 0; i < l; i++){
	printf("%d ",test[i]);
}
  printf("\n");
}

int find_mean(unsigned char test[],int l){
  int i;
  int sum = 0;
  for(i = 0; i < l; i++){
	sum += test[i];
}
  return sum / l ;
}

int find_median(unsigned char test[], int l){
  int median;
  sort_array(test,l);
  median = test[(l/2)];
  return median;
}

int find_maximum(unsigned char test[],int l){
  int max;
  sort_array(test,l);
  return max = test[0];
}

int find_minimum(unsigned char test[],int l){
  int min;
  sort_array(test,l);
  return min = test[l-1];
}

void swap(unsigned char *a, unsigned char *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void sort_array(unsigned char test[],int l){
  int i,j,max;	
  for(i = 0; i < l - 1; i++){
	max = i;
	for(j = i + 1; j < l; j++){
		if(test[j] > test[max])
 			max = j;
	}
	swap(&test[max],&test[i]);
  }
}
