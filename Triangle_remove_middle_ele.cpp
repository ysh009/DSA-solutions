/*
Here is pattern
         
      * *      
     ** **     
    *** ***    
   **** ****   
  ***** *****  
 ****** ****** 
******* *******

*/



int main()
{
    int n;
    cin>>n;
    
    for(int i = 0; i<n; i++){
        
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k = 0; k<2*i+1; k++){
            if(k == i)
            cout<<" ";
            else
            cout<<"*";
        }
        for(int l = 0; l<n-i-1; l++){
            cout<<" ";
        }
        cout<<endl;
    }
}
