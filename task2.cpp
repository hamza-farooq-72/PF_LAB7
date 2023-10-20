#include<iostream>
using namespace std ;


void generateFibonacci(int length) ;




main(){

int length ;

cout<<"Enter the length of the Fibonacci series: " ;
cin>> length ;

    generateFibonacci(length) ; 

}
    
    void generateFibonacci(int length){
        int num1 = 1 ;
         int num2 = 0 ;
        int sum = 0 ;

        for(int x = length ; x  > 0 ; x = x - 1)
        {
         cout << sum ;
         if(x>1)
         {
            cout<<", ";
         }
         sum = num1 + num2 ;
        num1 = num2 ;
        num2 = sum ;


        }
  }     