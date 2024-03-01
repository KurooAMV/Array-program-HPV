//Minimun=m and Maximum elements of an array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    //Entering the length of the array
    int n;
    cout<<"Enter the length of arrays: ";
    cin>>n;

    //Entering the elements of the array
    int array[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<=n; i++){
        cin>>array[i];
    }

    //comparing values of array for minimum and maximum elements
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    for(int j=0; j<n; j++){
        if(maxNo<array[j]){
            maxNo=array[j];
        }
        if(minNo>array[j]){
            minNo=array[j];
        }
    }
    
    //Printing the max values
    cout<<"Maximum value is: "<<maxNo<<endl;
    cout<<"Minimum value is: "<<minNo<<endl;

    return 0;
}