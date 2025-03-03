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
 *
 * @author Priyankan Vettivel
 * @date 03-March-2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array
 *
 * This function prints the minimum, maximum, mean, and median of the array.
 *
 * @param array Pointer to the data array
 * @param length The size of the array
 */
void print_statistics(unsigned char *array, unsigned int length);

/**
 * @brief Prints the elements of an array
 *
 * This function prints each element of the array to the screen.
 *
 * @param array Pointer to the data array
 * @param length The size of the array
 */
void print_array(unsigned char *array, unsigned int length);

/**
 * @brief Finds the median of an array
 *
 * This function returns the median value of the sorted array.
 *
 * @param array Pointer to the data array
 * @param length The size of the array
 *
 * @return The median value of the array
 */
unsigned char find_median(unsigned char *array, unsigned int length);

/**
 * @brief Finds the mean of an array
 *
 * This function calculates and returns the mean value of the array.
 *
 * @param array Pointer to the data array
 * @param length The size of the array
 *
 * @return The mean value of the array
 */
unsigned char find_mean(unsigned char *array, unsigned int length);

/**
 * @brief Finds the maximum value in an array
 *
 * This function returns the maximum value in the array.
 *
 * @param array Pointer to the data array
 * @param length The size of the array
 *
 * @return The maximum value of the array
 */
unsigned char find_maximum(unsigned char *array, unsigned int length);

/**
 * @brief Finds the minimum value in an array
 *
 * This function returns the minimum value in the array.
 *
 * @param array Pointer to the data array
 * @param length The size of the array
 *
 * @return The minimum value of the array
 */
unsigned char find_minimum(unsigned char *array, unsigned int length);

/**
 * @brief Sorts an array from largest to smallest
 *
 * This function sorts the array in descending order.
 *
 * @param array Pointer to the data array
 * @param length The size of the array
 */
void sort_array(unsigned char *array, unsigned int length);



#endif /* __STATS_H__ */
