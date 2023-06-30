        vector<string> temp;
        string s = "";
        
        for(int i=0; i<S.size(); i++){
            
            if(S[i] == '.'){
                temp.push_back(s);
                s="";
            }
            else
            s+=S[i];
        }
        temp.push_back(s);
        s="";
        s = s + temp[temp.size()-1];
        if(temp.size() == 1){
            return s;
        }
        
        for(int i = temp.size()-2; i>0; i--){
            s = s + "." + temp[i];
        }
        s = s + "." + temp[0];
        
        return s;
