// A program to sort the given array:-

#include<bits/stdc++.h>     //Header files initialization
#include<iostream>          //Header files initialization
using namespace std;
    int main(){
    int n;

    cout<<"Enter the elements of the Array"<<endl;
    cin>>n;
    int arr[n];     // Array Declaration

    cout<<"Enter the elements of the Array"<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);       //Default sorting of the array:

    cout<<"Array after sorting using default sort is -"<<endl;

    for (int i = 0; i < n; i++){    
        cout<<arr[i]<<" ";      //Displaying the sorted array
    }


        return 0;
    }