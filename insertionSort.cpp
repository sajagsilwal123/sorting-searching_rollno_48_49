#include<iostream>
#include <bits/stdc++.h>
using namespace std;

//Insertion Sort
void insertionSort(int arr[]){
	int i=0;
		for(int j=1; j<5; j++){
		int key = arr[j];
		i = j-1;
		while(i>=0 && arr[i]>key){
			arr[i+1] = arr[i];
			i = i-1;
		}
		arr[i+1] = key;
	}
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main(){

	int arr[] = {7,5,9,2,10};
	int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

	insertionSort(arr);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
}
