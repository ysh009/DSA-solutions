//Here two code solutions are given so look on both

// solution bases on the sorting number
vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int> ans;
        int nsum = 0;
        int sum = 0;
        
        for(int i = 1; i<=n; i++){
            nsum+=i;
        }
        
        sort(arr.begin(), arr.end());
        int a = -1;
        
        for(int i = 1; i<n; i++){
            if(arr[i] == arr[i-1]){
                a = arr[i-1];
                arr[i-1] = 0;
            }
        }
        ans.push_back(a);
        for(int i = 0; i<n; i++){
            sum += arr[i];
        }
        ans.push_back(nsum - sum);
        
        
        return ans;
    }

//Solution 2 on the basis of the index
vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        // vector<int> ans;
        int i1 = 0;
        int i2 = 0;
        
        for(int i = 0; i<n; i++){
            
            if(arr[abs(arr[i]) - 1] < 0){
                i1 = abs(arr[i]);
            }
            else{
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            }
        }
        
        for(int i = 0; i<n; i++){
            
            if(arr[i] > 0){
                i2 = i+1;
                break;
            }
        }
        
        
        return {i1,i2};
    }
