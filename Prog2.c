#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isEqual(double a, double b);
bool contains(double d, double array[], int size);
void insertionSort(double array[], int size);

int main(){
    int array1Length;
    printf("Enter length of first array : ");
    scanf("%d", &array1Length);
    double array1[array1Length];
    int a;
    for(a=0; a<array1Length; a++){
        double temp;
        printf("Array element %d :", a + 1);
        scanf("%lf", &temp);
        array1[a] = temp;
    }

    int array2Length;
    printf("Enter length of second array : ");
    scanf("%d", &array2Length);
    double array2[array2Length];
    int b;
    for(b=0; b<array2Length; b++){
        double temp;
        printf("Array element %d :", b+1);
        scanf("%lf", &temp);
        array2[b] = temp;
    }

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

    // extract and put non-duplicate elements in narray
    int count = 0;
    int i;
    for(i = 0; i<array1Length; i++){
        if(!contains(array1[i], array2, array2Length)){
                narray1[count] = array1[i];
                count++;
        }
    }

    // initiate the resultant array
    int mergeSize = array2Length + count;
    double merge[mergeSize];

    // copy all data from array 2
    int k;
    for(k = 0; k<array2Length; k++){
        merge[k] = array2[k];
    }

    // copy all data from resized array 1
    int l;
    for(l = 0; l<count; l++){
        merge[array2Length+l] = narray1[l];
    }

    // sort the merged array
    insertionSort(merge, mergeSize);

    // print the merged array
    printf("\nMerged and Sorted : ");
    int x;
    for(x = 0; x<mergeSize; x++){
        printf("%3.2f,", merge[x]);
    }


    return 1;
}

bool contains(double d, double array[], int size){

    int i;
    for(i = 0; i < size; i++ ){
        if(isEqual(d, array[i]))
            return true;
    }

    return false;
}

bool isEqual(double a, double b){
    if (fabs(a - b) < 0.00001)
        return true;

    return false;
}

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
