// C++ program to Demonstrate
// std::find for vectors
#include <bits/stdc++.h>
using namespace std;


// Driver code
int main()
{
    int n;
    cin>>n;
    
    int cnt = floor(log10(n) + 1);
    cout<<cnt<<endl;
    
    int k;
    int sum = 0;
    while(n){
        k = n%10;
        n = n/10;
        sum += pow(k,cnt);
    }
    cout<<sum;
}
