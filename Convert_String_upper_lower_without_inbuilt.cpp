int main()
{
    string s = "YaSh DOdiYa";
    
    
    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i]-32;
        }
    }
    cout<<s<<endl;
    for(int i = 0; i<s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i]+32;
        }
    }
    cout<<s<<endl;
}
