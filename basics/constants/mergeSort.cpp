////program to implemete merge sort algorithm: The popular divide and conquer then combine algorithm:
//#include <iostream>
//using namespace std;
//int sizeCount(int arr[], int size){
//	return size;
//}
//int main(){
//	int arr[]={12,2,3,4,5};
//	int	size = sizeof(arr)/sizeof(arr[0]);
//	cout<<sizeCount(arr,size);
//	return 0;
//}


//program to implemete merge sort algorithm: The popular divide and conquer then combine algorithm:
#include <iostream>
using namespace std;
int mergeSort(int array[],int arraySize){
	int i;
	arraySize= sizeof(array)/sizeof(array[0]);
	for (i=0;i<arraySize;i++){
		cout<<array[i]<<" ";
	}
}

int main(){
	int myArray[] = {45,12,1,4,0,9,4},sizeArray;
	cout<<mergeSort(myArray,sizeArray);
	return 0;
}
