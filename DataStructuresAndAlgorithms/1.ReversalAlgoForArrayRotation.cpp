#include <iostream>

using namespace std;


void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int l,int h){
    
    while(l<h){
        int temp= arr[h];
        arr[h]= arr[l];
        arr[l]=temp;
        l++;
        h--;
    }
    
}

void rotate(int arr[],int d,int n){

    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    rotate(arr,2,9);
    printArr(arr,9);
    return 0;
}
