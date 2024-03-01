#include<iostream>
using namespace std;
void permutations(int arr[],int n){
    int counter=0;
    for(int i=0; i<n-counter; i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            for(int k=0; k<n;k++){
            cout<<arr[k]<<" ";
            
        }
        cout<<endl;
        }
        
        counter++;
        
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    permutations(arr,n);

    return 0;
}