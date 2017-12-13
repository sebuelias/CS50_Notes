/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm, binary search O(log n)
    // O(n) first just to see if value can be found, linear search

    if (n < 0)
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        if (values[i] == value)
        {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm, selection sort or bubble sort O(n^2)
    int counter = -1;

    for (int i = 0; i < n; i++)
    {
        counter = 0;
        if (values[i] > values[i]+1)
        {
            values[i]++;
            counter++;
        }
    }
}
