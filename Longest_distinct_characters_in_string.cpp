int longestSubstrDistinctChars (string S)
{
    // your code here
    map<char,int> m;
    int n = S.size();
    int i = 0;
    int j = 0;
    int ans = 0;
    
    while(j<n){
        if(m.find(S[j]) == m.end()){
            m[S[j]]++;
            j++;
            int temp = m.size();
            ans = max(ans,temp);
        }
        else{
            while(m.find(S[j])!=m.end()){
                m.erase(S[i++]);
            }
            m[S[j]]++;
            j++;
        }
    }
    return ans;
}
