#include<iostream>
using namespace std;
#define MAX_SIZE 7

int binarySearch(int targ, int list[]);

int main(){
	int a[7]={1,2,8,9,10,21,98};
	int target,ret;
	cout<<"Enter the data you want to search \n";
	cin>>target;
	ret = binarySearch(target, a);
	if(ret==1)
		cout<<target<<" Found! ";
	else
		cout<<target<<" Not found!";
}

int binarySearch(int targ, int list[]){
	int min, max, mid;
	min = 0 ;
	max = MAX_SIZE - 1;
	while(min<MAX_SIZE  && max>=0){
		mid = (min + max)/2;
		if(list[mid]==targ){
			return 1;
			break;
		}			
		else if (targ<list[mid])	
			max = mid -1;
		else if (targ>list[mid])
			min = mid +	1;	 			 	
	}
		return -1;
}
