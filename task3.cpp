
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

        if(digit == 0)
        {sum = 1 ; }

        while(digit > 0)
        {
           
         sum = sum + 1 ;
         digit = digit/10 ; 
        }
        cout<< "Total number of digits: " <<sum ;
  }     