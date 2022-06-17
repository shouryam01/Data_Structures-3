// To reverse an Array:
#include<bits/stdc++.h>     //header files
#include<iostream>          //header files
using namespace std;

int main(){
    int array[10] = {1,2,3,4,5,6,7,8,9};        //array declaration

    for (int i = 0,j = 10-1;i < 10/2;i++,j--){      //loop for reversing the array
            int temp = array[i];
            array[i]=array[j];      //swapping the values
            array[j]=temp;
            }
        
        cout<<"Reverse of the array will be :"<<endl;

        for (int i = 0; i < 10; i++){       //displaying the reversed array
            cout<<array[i]<<" ";
        }
        
    }