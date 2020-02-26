#include<iostream>
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

