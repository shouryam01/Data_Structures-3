// To find the the minimum and maximum elements in an array:
#include<bits/stdc++.h>     //header files
#include<iostream>      //Header files
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in Array"<<endl;
    cin>>n;
    int arr1[n];        //Array Declaration

    cout<<"Enter the elements of Array :"<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr1[i];       //Taking elements from array
        }

        int mini = arr1[0];     //Assigning value to minimum
        int maxi = arr1[0];     //Assigning value to maximum
    for (int i = 0; i < n; i++){

        if(maxi<arr1[i])
            maxi=arr1[i];

        else if(mini>arr1[i])
            mini = arr1[i];
    }
        cout<<"Maximum = "<<maxi<<endl;
        cout<<"Minimum = "<<mini<<endl;

    
    return 0;
}