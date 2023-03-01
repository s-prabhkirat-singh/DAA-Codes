#include <iostream>
using namespace std;
int linear_search(int element,int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if(element==arr[i]){
            return i;
        }
        
    }
    return -1;
}
int main(){
    int x;
    cout<<"Enter the size of array"<<endl;
    cin>>x;
    
    int arr[x];
    cout<<"Now enter the elements in the array";
    for (int i = 0; i <= x; i++)
    {
        cin>>arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    int ele;
    cout<<"Enter the element you want to search in the array"<<endl;
    cin>>ele;
    cout<<n;
    int index= linear_search(ele,arr,n);
    if(index==-1){
        cout<<"The element is not present in the array"<<endl;

    }
    else{
        cout<<"The element is present at the " <<index<<"index";
    }

    
    
}
