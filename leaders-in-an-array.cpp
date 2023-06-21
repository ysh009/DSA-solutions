class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        // stack<int> s;
        vector<int> v;
        int maxEle = a[n-1];
        v.push_back(maxEle);
        
        
        for(int i = n-2; i>=0; i--){
            
            int max1 = maxEle;
            if(maxEle == a[i]){
                v.push_back(a[i]);
            }
            maxEle = max(maxEle,a[i]);
            if(maxEle != max1){
                v.push_back(maxEle);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
