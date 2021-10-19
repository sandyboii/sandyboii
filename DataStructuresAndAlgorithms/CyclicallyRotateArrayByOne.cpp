#include <iostream>

using namespace std;


void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void cyclicallyRotate(int arr[],int n){

    int i=0;
    while(i<n-1){
        swap(arr[i],arr[n-1]);
        i++;
    }
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    cyclicallyRotate(arr,9);
    printArr(arr,9);
    return 0;
}
