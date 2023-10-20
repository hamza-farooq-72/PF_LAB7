
#include<iostream>
using namespace std ;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);





main(){

int number1 ;
int number2 ;
int gcd ;
cout<<"Enter the first number: " ;
cin>> number1 ;

cout<<"Enter the second number: " ;
cin>> number2 ; 
gcd = calculateGCD( number1,  number2) ;

cout<< "GCD: " << gcd  << endl; 

cout<< "LCM: " << calculateLCM( number1,  number2,  gcd);

}
    
    int calculateGCD(int number1, int number2) {

        while(number1 != number2 ){

            if(number1>number2){

                number1 = number1 - number2 ;
                
        }
        if(number2>number1){


                number2 = number2 - number1 ;
        }
       
    }
        return number1 ;
    }
    
        int calculateLCM(int number1, int number2, int gcd){

       int lcm = (number1*number2) / gcd ;

        return lcm ;
}

    
