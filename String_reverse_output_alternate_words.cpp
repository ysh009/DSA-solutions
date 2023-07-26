int main()
{
    string s = "yash dodiya";
    string temp = "";
    
    // temp+=s[0];
    
    for(int i=0; i<s.size(); i++){
        if(i%2 != 0){
            temp+=s[i];
        }
    }
    
    reverse(temp.begin(),temp.end());
    
    cout<<temp;
}
