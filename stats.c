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
 * @file stats.c
 * @brief performing statistical analytics on a dataset in an array.
 *
 * @author Priyankan Vettivel
 * @date 03-March-2025
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void print_statistics(unsigned char *array, unsigned int length);
void print_array(unsigned char *array, unsigned int length);
unsigned char find_median(unsigned char *array, unsigned int length);
unsigned char find_mean(unsigned char *array, unsigned int length);
unsigned char find_maximum(unsigned char *array, unsigned int length);
unsigned char find_minimum(unsigned char *array, unsigned int length);
void sort_array(unsigned char *array, unsigned int length);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
	printf("\nOriginal Array:\n");
    print_array(test, SIZE);
    print_statistics(test, SIZE);
    printf("\nSorted Array:\n");
	sort_array(test, SIZE);
    print_array(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *array, unsigned int length) {
    printf("\nStatistics:\n");
    printf("Minimum: %d\n", find_minimum(array, length));
    printf("Maximum: %d\n", find_maximum(array, length));
    printf("Mean: %d\n", find_mean(array, length));
    printf("Median: %d\n", find_median(array, length));
}

void print_array(unsigned char *array, unsigned int length) {
    for (unsigned int i = 0; i < length; i++) {
        printf("%d ", array[i]);
        if ((i + 1) % 10 == 0) printf("\n");
    }
    // printf("\n");
}

unsigned char find_median(unsigned char *array, unsigned int length) {
    unsigned char temp_array[length];
    for (unsigned int i = 0; i < length; i++) {
        temp_array[i] = array[i]; // Copy original array
    }
    sort_array(temp_array, length); // Sort the copy

    if (length % 2 == 0)
        return (temp_array[length / 2 - 1] + temp_array[length / 2]) / 2;
    else
        return temp_array[length / 2];
}

unsigned char find_mean(unsigned char *array, unsigned int length) {
    unsigned int sum = 0;
    for (unsigned int i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum / length;
}

unsigned char find_minimum(unsigned char* array, unsigned int length) {
    unsigned char min = array[0];
    for (unsigned int i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

unsigned char find_maximum(unsigned char *array, unsigned int length) {
    unsigned char max = array[0];
    for (unsigned int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void sort_array(unsigned char *array, unsigned int length) {
    for (unsigned int i = 0; i < length - 1; i++) {
        for (unsigned int j = 0; j < length - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                unsigned char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
	// printf("Sorted Array:\n");
    // print_array(array, length);
}

