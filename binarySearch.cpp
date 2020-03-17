#include<iostream>
#include"insertion.cpp"
using namespace std;
#define MAX_SIZE 5

void binarySearch(int a[], int target);


void binarySearch(int a[], int target)
{
	int n = 20;
	int mid,max,min;
	max=n-1;
	min=0;
	
	int temp;
	
	while(max>=min)
	{
		mid = (max+min)/2;
		
		if(target==a[mid])
		{
			temp = 1;
			break;
		}
		
		else if(target>a[mid])
		{
			min = mid+1;
		}
				
		
		else 
		{
			max=mid-1;
		}
	}
	
	if(temp==1)
		cout<<target<<" FOUND!";
	else 
		cout<<target<<" NOT FOUND!";
}


int main(){
	
		int arr[20] = {7,5,9,2,10,900,877,45,23,123,321,345,0,1234,3,11,22,33,10,11};
	insertionSort(arr);
	/*for(int i=0 ;i<20 ;i++){
			cout<<arr[i]<<endl;
		}*/
		int target,ret;
		cout<<"Enter the data you want to search \n";
		cin>>target;
		binarySearch(arr, target);
}


