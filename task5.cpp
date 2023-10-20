
#include<iostream>
using namespace std ;


void totalDigits(int digit) ;




main(){

int digit ;

cout<<"Enter a number: " ;
cin>> digit ;

    totalDigits(digit) ; 

}
    
    void totalDigits(int digit) {
        
        int sum = 0 ;
        int tot  = 0;


        while(digit > 0)
        {
           
         sum = digit%10;
        tot = tot + sum ;
         digit = digit/10 ;


        }
        cout<< "Sum of digits: " <<tot ;
  }     