// Student : Quazi Irfan
// Course : CSC-461 Programming Languages (Assignment 1)
// Instructor : Dr. Sung Shin
// Due Date : Jan 23rd, 2017
// File Name : MergeAndSort.c

// Program description :
// This program asks the user to input two list of double numbers.
// For every list the program asks how many numbers there should be in the list, and then it prompts the user that many time to enter those numbers.
// Note that each number has to be entered into a separate line.
// Then the program prints both the lists.
// Then we copy the numbers on the first list that are not repeated on the second list to a new array(narray1).
// Then we merge the second list and new array together in a separate array(merge).
// Finally we feed the merge array in the method insertionSort to sort the number using insertion sort.
// The program terminates by printing the sorted array.

// Sample I/O:
//Enter length of first array : 3
//Array element 1 :1.1
//Array element 2 :2.3
//Array element 3 :3.4
//Enter length of second array : 5
//Array element 1 :2.1
//Array element 2 :2.2
//Array element 3 :2.3
//Array element 4 :3.4
//Array element 5 :3.5
//First array [3] :1.10 2.30 3.40
//Second array [5] :2.10 2.20 2.30 3.40 3.50
//Merged and Sorted [6] : 1.10,2.10,2.20,2.30,3.40,3.50,

// Input restriction :
// Each list of double numbers can't contain any repeating numbers.

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isEqual(double a, double b);
bool contains(double d, double array[], int size);
void insertionSort(double array[], int size);

int main(){
    // ask for first list of double numbers
    int array1Length;
    printf("Enter length of first array : ");
    scanf("%d", &array1Length);
    double array1[array1Length];
    int a;
    for(a=0; a<array1Length; a++){
        double temp;
        printf("Array element %d : ", a + 1);
        scanf("%lf", &temp);
        array1[a] = temp;
    }

    // ask for first list of double numbers
    int array2Length;
    printf("Enter length of second array : ");
    scanf("%d", &array2Length);
    double array2[array2Length];
    int b;
    for(b=0; b<array2Length; b++){
        double temp;
        printf("Array element %d : ", b+1);
        scanf("%lf", &temp);
        array2[b] = temp;
    }

    // Prints both the lists
    printf("First array [%d] :", array1Length);
    int aa;
    for(aa=0; aa<array1Length; aa++){
        printf("%3.2f ", array1[aa]);
    }
    printf("\nSecond array [%d] :", array2Length);
    int bb;
    for(bb=0; bb<array2Length; bb++){
        printf("%3.2f ", array2[bb]);
    }

    // placeholder for resized array 1
    double narray1[array1Length];

    // copy the number from array1 that are are not duplicated in array2 into narray1
    int count = 0;
    int i;
    for(i = 0; i<array1Length; i++){
        if(!contains(array1[i], array2, array2Length)){
                narray1[count] = array1[i];
                count++;
        }
    }

    // initiate the merge array, this will hold the contents of narray1 and array2
    int mergeSize = array2Length + count;
    double merge[mergeSize];

    // copy all data from array 2 into merge array
    int k;
    for(k = 0; k<array2Length; k++){
        merge[k] = array2[k];
    }

    // copy all numbers from narray1 into merge array
    int l;
    for(l = 0; l<count; l++){
        merge[array2Length+l] = narray1[l];
    }

    // feed the merge array into insertionSort
    insertionSort(merge, mergeSize);

    // print the sorted array
    printf("\nMerged and Sorted [%d] : ", mergeSize);
    int x;
    for(x = 0; x<mergeSize; x++){
        printf("%3.2f,", merge[x]);
    }


    return 1;
}

// this is a helper method to check if a number is available in an array
// returns true is available, false otherwise
bool contains(double d, double array[], int size){

    int i;
    for(i = 0; i < size; i++ ){
        if(isEqual(d, array[i]))
            return true;
    }

    return false;
}

// this is a helper method to check the equality of double number, since we can't use equal sign for double and float numbers
// isEqual return true if two numbers are close enough, false otherwise.
bool isEqual(double a, double b){
    if (fabs(a - b) < 0.00001)
        return true;

    return false;
}

// insertionSort method accepts an array of double and the size of the array as argument and sorts the content of the array in ascending order.
void insertionSort(double array[], int size){
    int i;
    for(i = 1; i<size; i++){
        int l = i;

        while(l > 0 && array[l-1] > array[l]){
            double temp = array[l];
            array[l] = array[l-1];
            array[l-1] = temp;

            l--;
        }
    }
}
