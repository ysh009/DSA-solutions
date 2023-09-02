#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n, int k){
    int ans = 1;
    for(int i = 0; i<n; i++){
        ans = ans * (k-i);
        ans = ans / (i+1);
    }
    return ans;
}

int main() {
	int r = 6,c = 3;
	int ans = 1;
	cout<<ans<<" ";
	
	for(int i = 1; i<r; i++){
	    ans = ans * (r-i);
	    ans = ans/i;
	    cout<<ans<<" ";
	}
}
