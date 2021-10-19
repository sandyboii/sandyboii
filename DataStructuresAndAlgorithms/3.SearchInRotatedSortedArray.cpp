/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binarySearch(int arr[],int l, int h,int key){
    int m=l+(h-l)/2;
    if(arr[m]==key){
        return m;
    }
    else if(arr[m]>key){
        return binarySearch(arr,0,m-1,key);
    }
    else{
        return binarySearch(arr,m+1,h,key);
    }
    
}
int findPivot(int arr[], int l,int h){
    int mid=0;
    while(l<h){
        mid= l + (h-l)/2;
        if(arr[mid]<arr[l] ){
            h=mid;
            
        }
        else if(arr[mid]>arr[h]){
            l=mid;
        }
        else if(arr[mid]>arr[l] && arr[mid]<arr[h]){
            return mid;
        }
    }
    return -1;
}

int findInRotatedSortedArray(int arr[],int n, int key){

    int pivot=findPivot(arr,0,n-1);
    if(pivot==-1){
        return binarySearch(arr,0,n-1,key);
    }
    
    if(arr[pivot]==key){
        return pivot;
    }
    else if(key<=arr[n-1]){
        return binarySearch(arr,pivot+1,n-1,key);
    }
    else if(key>arr[n-1] ){
        return binarySearch(arr,0,pivot-1,key);
    }
    else{
        return -1;
    }
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    int ans=findInRotatedSortedArray(arr,9,7);
    cout<<ans;
    return 0;
}
