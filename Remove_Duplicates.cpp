string removeDups(string S) 
	{
	    // Your code goes here
	    string temp = "";
	    int freq[26] = {0};
	    
	    for(int i = 0; i<S.size(); i++){
	        if(freq[S[i] - 'a'] == 0){
	            temp+=S[i];
	            freq[S[i] - 'a']++;
	        }
	    }
	    return temp;
	}
