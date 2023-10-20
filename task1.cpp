#include<iostream>
using namespace std ;


void printTable(int number);



main(){

int number ;

cout<<"Enter a number: " ;
cin>> number ;

    printTable(number) ; 

}

    void printTable(int number){

        for(int num = 1 ; num  <= 10 ; num = num + 1)
        {
        int product = number*num  ;

        cout << number << " x " <<num << " = " << product<<endl ;
        }
  }  