int main()
{
    vector<int> v = {5,12,11,25,62,98,10,5,6,8};
    
    // as s stores the all data in acending order at the initialization time;
    set<int> s(v.begin(),v.end());
    
    int i;
    cin>>i;
    
    v.clear();
    
    for(auto i:s){
        v.push_back(i);
    }
    int n = v.size()-1;
    
    cout<<v[n-i+1];
}
