#include<iostream>
#include"insertion.cpp"
using namespace std;
#define MAX_SIZE 5

int binarySearch(int targ, int list[]);


int binarySearch(int targ, int list[]){
	int min, max, mid;
	min = 0 ;
	max = MAX_SIZE - 1;
	while(min<MAX_SIZE  && max>=0){
		mid = (min + max)/2;
		if(list[mid]==targ){
			return mid;
			break;
		}			
		if (targ<list[mid])	
		{
			max = mid -1;
		}
		else 
		{
			min = mid +	1;
		}				 			 	
	}
	return -1;
}


int main(){
	//sameer's portion
	
		int arr[5] = {7,5,9,2,10};
	insertionSort(arr);
	for(int i=0 ;i<5 ;i++){
			cout<<arr[i]<<endl;
		
		int target,ret;
		cout<<"Enter the data you want to search \n";
		cin>>target;
		ret = binarySearch(target, arr);
		if(ret==-1)
			cout<<target<<" not Found! ";
		else
			cout<<target<<" Found!";
	}
}


