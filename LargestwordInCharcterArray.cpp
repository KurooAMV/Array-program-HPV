#include<iostream>
//#include<string.h>
using namespace std;
int main(){
    //Find the largest word entered in the sentence in the array
    int n;
    cout<<"Enter the size of character array: ";
    cin>>n;
    cin.ignore();//used to flush the buffer

    char arr[n+1];
    cout<<"Enter the array: ";
    cin.getline(arr,n);//used to get a line as input including its white spaces
    cin.ignore();
    
    int i=0;
    int currLen=0, maxLen=0;
    int st=0, maxst=0;
    while(1){
        if(arr[i]==' '||arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                maxst=st;
            }
    
            currLen=0;
            st=i+1;
            }else{
                currLen++;
                if(arr[i]=='\0'){
                    break;
                }
            }
            i++;
        }
    

    cout<<"The maximum length is: "<<maxLen<<endl;
    cout<<"The maximum length word is: ";
    int j;
    for(j=0; j<maxLen; j++){
        cout<<arr[j+maxst];
    }

    return 0;
}