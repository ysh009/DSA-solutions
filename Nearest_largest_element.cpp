vector<long long> ans;
        stack<long long> s;
        
        for(int i = n-1; i>=0; i--){
            
            if(s.empty()){
                ans.push_back(-1);
                s.push(arr[i]);
            }
            else{
                while(!s.empty()){
                    if(s.top() > arr[i]){
                        ans.push_back(s.top());
                        s.push(arr[i]);
                        break;
                    }
                    s.pop();
                }
                if(s.empty()){
                    ans.push_back(-1);
                    s.push(arr[i]);
                }
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
