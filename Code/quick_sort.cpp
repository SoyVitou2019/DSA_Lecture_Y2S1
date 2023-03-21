#include<iostream>
using namespace std;
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main(){
    //write method partitioning
    int arr[]={2,4,2,5,6,7,4,2,5,35,33,5,1};
    // use function quicksort
    quicksort(arr,0,sizeof(arr)/sizeof(int)-1);
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//write function quicksort
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pivot=partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}
//write function swap
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
//write function partition
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;

}
