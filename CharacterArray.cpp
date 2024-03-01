#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of character array: ";
    cin>>n;

    char arr[n+1 ];
    cout<<"Enter the array: ";
    cin>>arr;
    
    bool palindrone=true;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            palindrone = false;
            break;
        }
    }

    if(palindrone){
        cout<<"The array is a palindrone.";
    }
    else{
        cout<<"The array is not a palindrone.";
    }

    return 0;
}