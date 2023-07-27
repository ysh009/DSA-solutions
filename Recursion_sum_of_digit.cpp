// C++ program to Demonstrate
// std::find for vectors
#include <bits/stdc++.h>
using namespace std;

int sod(int n){
    
    if(n == 0){
        return 0;
    }
    return (n%10 + sod(n/10));
}




// Driver code
int main()
{
    int n = 123;

    int ans = sod(n);
    
    cout<<ans;
}
