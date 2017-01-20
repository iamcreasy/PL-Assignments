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
    cout << "\nMerged and Sorted : ";
    for(unsigned int i = 0; i<array2.size(); i++){
        cout << array3[i] << ",";
    }
}

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

bool contains(double item, vector<double> array){
    if(find(array.begin(), array.end(), item) != array.end())
        return true;

    return false;
}


void print(vector<double> array1, vector<double> array2){
    cout << "Array 1 : ";
    for(unsigned int i = 0; i<array1.size(); i++)
        cout << array1[i] << " " ;

    cout << "\nArray 2 : ";
    for(unsigned int i = 0; i<array2.size(); i++)
        cout << array2[i] << " " ;
}
