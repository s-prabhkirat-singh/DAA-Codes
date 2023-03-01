#include<iostream>
using namespace std;
int binarysearch(int arr[],int l,int r,int x){
    if(r>=1){
        int mid= l+(r-l)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            return binarysearch(arr,l,mid-1,x);

        }
        else {
            return binarysearch(arr,mid+1,r,x);
        }

    }
    return -1;
}
int main(){
    cout<<"We are considering elements to be already sorted in ascending order"<<endl;
    int arr[]={10,20,30,40,50,60};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ele;
    cout<<"Enter the element which you want to search"<<endl;
    cin>>ele;
        int result = binarysearch(arr, 0, size - 1, ele);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;

}