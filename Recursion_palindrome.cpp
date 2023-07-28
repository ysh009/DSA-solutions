bool isPalindrome(string s, int i){
        
    if(i > s.size()/2){
       return true ;
    }
    
    return s[i] == s[s.size()-i-1] && isPalindrome(s, i+1) ;
    
}
