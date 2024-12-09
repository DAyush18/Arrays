//C++ Program to Create and Print 2 Dimensional Array 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][4];

    //Creation of 2D Array
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];1
        }
    }
    
    //Print 2D Array
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}