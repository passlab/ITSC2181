#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
float findMin(float arr[], int size);
float findMax(float arr[], int size);
float calculateAverage(float arr[], int size);
int findIndexOf(float arr[], int size, float num);
int countOccurrences(float arr[], int size, float num);
void printFirst100(float arr[]);

int main() {
    // Declare an array of 1000 floats (for demo purposes, we initialize it with random numbers)
    float balance[1000];
    int size = 1000;

    // Initialize the array with random values between 0 and 100
    srand((unsigned int)time(NULL));
    for (int i = 0; i < size; i++) {
        balance[i] = ((float)rand()/(float)(RAND_MAX)) * 100.0; // Random float values from 0 to 100
    }

    //Add your code here for the command line interface and interacting with the program
}

//Add code here for the implementation of the above function prototypes
