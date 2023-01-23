//Given an array arr of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of arr except arr[i].
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    
        
    //finding the size of nums array

        
    vector<int> output;
        
    //if no element is present in the array, just return the output array.

    if(n<1){
        for(int i=0; i<n; i++){
            cout<<output[i]<<" ";
            }
        }
            
        
        int product=1;
        //Storing product of all elements present on the left-hand side of element at the ith position in the output array.

        for(int i=0; i<n; i++){
            product *= nums[i];
            output.push_back(product);
        }
        
        //product of all elements present on the right-hand side of element at the ith position will be tracked by a variable(say product).

        product=1;
        for(int i=n-1; i>0; i--){

            //Ultimate goal is to find the product of all elements towards the left and the product of all elements right-hand towards the right.

            output[i]=output[i-1]*product;
            product*=nums[i];
        }
        
        //At the first position, we would get the product of all elements present towards the right-hand side, which is already stored in a variable(i.e.product).

        output[0]=product;
        for(int i=0; i<n; i++){
            cout<<output[i]<<" ";
            }
    }    
    