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
 * @file stats.h 
 * @brief header file for stats.c 
 *
 * <Add Extended Description Here>
 *
 * @author Mohamed Haji
 * @date 4/1/2021 
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistic(unsigned char []);
/**
 * @brief prints the statistics of an array
 *
 * function prints maximum.minimum,mean and median of a given array
 *
 * @param array
 *
 */

void print_array(unsigned char [],int l);
/**
 * @brief prints data of an array given array and length
 *
 * @param1 array
 * @param2 length of array
 *
 */

int find_mean(unsigned char [],int );
/**
 * @brief finds the mean of array given array and length
 *
 * @param array
 * @param2 length of array
 *
 * @return mean of array 
 */

int find_median(unsigned char test[], int l);
/**
 * @brief finds the median of array given array and length
 *
 * @param array
 * @param2 length of array
 *
 * @return median of array 
 */

int find_maximum(unsigned char [],int l);
/**
 * @brief finds the maximum of array given array and length
 *
 * @param array
 * @param2 length of array
 *
 * @return maximum value in array
 */

int find_minimum(unsigned char [],int l);
/**
 * @brief finds the minimum of array given array and length
 *
 * @param array
 * @param2 length of array
 *
 * @return minimum value in aaray 
 */

void sort_array(unsigned char [],int l);
/**
 * @brief sorts the array from largest to smallest
 *
 * @param array
 * @param2 length of array
 *
 */
#endif /* __STATS_H__ */
