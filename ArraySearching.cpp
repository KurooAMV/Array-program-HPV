#include<iostream>
using namespace std;
int linear_search(int array[], int key, int n){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    //Enetering the length of the array
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    
    //Entering the elements of the array
    int array[n];
    cout<<"Enter the elemnets of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    //Entering the element to be searched
    int element;
    cout<<"Enter the element to be search: ";
    cin>>element;

    //Searching for the element
    int ans;
    ans=linear_search(array,element,n);
    if (ans==-1){
        cout<<"Element not found!";
    }
    else{
        cout<<"Element found at index: "<<ans+1;
    }

    return 0;
}