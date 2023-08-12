#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,2,3,4,5,5,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int freq[5+1] = {0};
    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
    }
    for(auto i : freq){
        cout<<i<<" ";
    }
    cout<<endl;
    int j = 0;
    for(int i = 0; i<6; i++){
        if(freq[i] > 0){
            
            while(freq[i]){
                arr[j] = i;
                j++;
                freq[i]--;
            }
        }
    }
    
    for(auto i : arr){
        cout<<i<<" ";
    }
    
}
