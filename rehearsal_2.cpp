#include <iostream>
using namespace std ; 

int main ()
{
    int x ;
    int sum = 0 ;
    
   
    while(x>0){
        cout << "Enter X : " ;
         cin >> x ; 
        
         sum = sum + x ;
        cout << sum ; 
         cout << endl;
        
    }
    
    if(x=0){
        cout<<" sum : "<< sum ; 
    }
    
return 0 ;
}
