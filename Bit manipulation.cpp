// Given a 32 bit unsigned integer num and an integer i. Perform following operations on the number - 

// 1. Get ith bit

// 2. Set ith bit

// 3. Clear ith bit

// Note : For better understanding, we are starting bits from 1 instead 0. (1-based)

// Example 1:

// Input: 70 3
// Output: 1 70 66
// Explanation: Bit at the 3rd position from LSB is 1. (1 0 0 0 1 1 0)
// The value of the given number after setting the 3rd bit is 70. 
// The value of the given number after clearing 3rd bit is 66. (1 0 0 0 0 1 0)

public:
    void bitManipulation(int num, int i) {
        // your code here
        int mask = 1<<(i-1);
        if(num & mask)
        cout<<"1 ";
        else
        cout<<"0 ";
        
        cout<<(num | mask)<<" ";
        
        mask = ~mask;
        cout<<(num & mask);
    }
