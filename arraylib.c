#include <stdio.h>
#include "arraylib.h"

int findMaxIndex(int arr[], int size) {
    //#Cp
    int max = 0;
    for (int i = 1; i < size; i++)
        if (arr[i] > arr[max]) max = i;
    return max;
}

int findMinIndex(int arr[], int size) {
    //#Cp
    int min = 0;
    for (int i = 1; i < size; i++)
        if (arr[i] < arr[min]) min = i;
    return min;
}

float findAverage(int arr[], int size) {
    //#Cp
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return (float)sum / size;
}

void displayArray(int arr[], int size) {
    //#Cp
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

void reverseArray(int arr[], int size) {
    //#Cp
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void sortArray(int arr[], int size) {
    //#Cp
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int linearSearch(int arr[], int size, int value) {
    //#Cp
    for (int i = 0; i < size; i++)
        if (arr[i] == value) return i;
    return -1;
}
