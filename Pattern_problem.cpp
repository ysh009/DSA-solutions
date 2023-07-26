/*

A
22
BBB
3333
CCCCC

*/


int main()
{
    char x = 'A';
    int a = 2;
    
    int flagx = 0;
    int flaga = 0;
    
   for(int i = 0; i<5; i++){
       for(int j=0; j<i; j++){
           
           if(i % 2 == 0){
               cout<<a;
               flagx = 1;
           }
           else{
               cout<<x;
               flaga = 1;
           }
       }
       
       cout<<endl;
       
       if(flagx == 1){
           a++;
           flagx = 0;
       }
       if(flaga == 1){
           x++;
           flaga = 0;
       }
   }
}
