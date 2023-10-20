

#include<iostream>
using namespace std ;

int frequencyChecker(int number, int digit);





main(){

int number ;
int digit ;
cout<<"Enter a number: " ;
cin>> number ;

cout<<"Enter the digit to check: " ;
cin>> digit ;

    cout << "Frequency: " << frequencyChecker(number, digit);


}
    
    int frequencyChecker(int number, int digit){
        
        int sum = 0 ;
        int mode = 0;

        for(int x = number ; x > 0 ; x = x / 10  )
        {
           
           mode = x % 10;
           if(mode==digit)
           {
         sum = sum + 1 ;    
           }
        
        }
        return sum ;
  }     