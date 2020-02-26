#include<iostream>
using namespace std;
#define MAX_SIZE 7

void binarySearch();


int main(){
	int a[MAX_SIZE]=[1,2,8,9,10,21,98];
	int target;
	cout<<"Enter the data you want to search \n";
	cin<<target;
	binarySearch(int target, int a)

}


void binarySearch(int targ, int list[]){
	int min, max, mid;
	min = 0 ;
	max = MAX_SIZE - 1;
	while(){
		mid = (min + max)/2;
		if(list[mid]==target)
			cout<<targ<<"is present in the given list \n";
		if (list)			
	}
}
