// Student : Quazi Irfan
// Course : CSC-461 Programming Languages (Assignment 1)
// Instructor : Dr. Sung Shin
// Due Date : Jan 23rd, 2017
// File Name : MergeAndSort.cpp

// Program description :
// This program asks the user to input two list of double numbers.
// For every list the program asks how many numbers there should be in the list, and then it prompts the user that many time to enter those numbers.
// Note that each number has to be entered into a separate line.
// Then the program prints both the lists.
// Then we check find the numbers in array1 that are not duplicated in array2. Then we push the numbers in array2.
// Then we feed the array2 into our insertion sort to sort the elements in ascending order.
// Finally the program terminates by printing the sorted array2.

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

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void insertionSort(double array[], int size);
bool contains(double item, vector<double> array);
void print(vector<double> array1, vector<double> array2);

int main(){
    // ask input for first array
    int array1Length;
    cout << "Enter the length of first array : ";
    cin >> array1Length;
    vector<double> array1(array1Length);
    for(int i = 0; i<array1Length;i++){
        double temp;
        cout << "Array element " << i +1 << " : ";
        cin >> temp;
        array1[i] = temp;
    }

    // ask input for second array
    int array2Length;
    cout << "Enter the length of second array : ";
    cin >> array2Length;
    vector<double> array2(array2Length);
    for(int i = 0; i<array2Length;i++){
        double temp;
        cout << "Array element " << i +1 << " : ";
        cin >> temp;
        array2[i] = temp;
    }

    // print the number lists
    cout << "First array [" << array1Length << "] : ";
    for(unsigned int i = 0; i<array1.size(); i++){
        cout << array1[i] << " ";
    }
    cout << "\nSecond array [" << array2Length << "] : ";
    for(unsigned int i = 0; i<array2.size(); i++){
        cout << array2[i] << " ";
    }

    // Merge and delete duplicate items
    vector<double>::iterator p = array1.begin();
    while(p != array1.end()){
        if(!contains(*p, array2)){
            array2.push_back(*p);
        }
        p++;
    }

    // copy the content of vector array2 into an array
    double array3[array2.size()];

    for(unsigned int i=0; i<array2.size(); i++){
        array3[i] = array2[i];
    }

    // call the insertion sort
    insertionSort(array3, array2.size());

    // print the sorted array
    cout << "\nMerged and Sorted [" << array2.size() << "] : ";
    for(unsigned int i = 0; i<array2.size(); i++){
        cout << array3[i] << ",";
    }
}

// insertionSort method accepts an array of double and the size of the array as argument and sorts the content of the array in ascending order.
void insertionSort(double array[], int size){
    for(int i = 1; i<size; i++){
        int l = i;

        while(l > 0 && array[l-1] > array[l]){
            double temp = array[l];
            array[l] = array[l-1];
            array[l-1] = temp;

            l--;
        }
    }
}

// this is a helper method to check if a number is available in an vector
// returns true is available, false otherwise
bool contains(double item, vector<double> array){
    if(find(array.begin(), array.end(), item) != array.end())
        return true;

    return false;
}
