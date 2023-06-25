int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1)
        return 1;
        
        int sum = 0;
        int leftSum = 0;
        
        for(int i=0; i<n; i++){
            sum+=a[i];
        }
        
        for(int i=0; i<n; i++){
            sum-=a[i];
            
            if(leftSum == sum)
            return i+1;
            
            leftSum+=a[i];
        }
        return -1;
    }
