
#include<iostream>
using namespace std ;

int calculatePrice(int money, int year);






main(){

int year ;
int money ;

cout<<"Enter Money: " ;
cin>> money ;

cout<<"Enter Year: " ;
cin>> year ; 





int tatalspend = calculatePrice(money,  year);


    if(money >= tatalspend){

        tatalspend = money - tatalspend ;

        cout<<"Yes! He will live a carefree life and will have " << tatalspend << " dollars left.";
    }
    
   else if(money < tatalspend){

        tatalspend = tatalspend - money ;

        cout<<"He will need " << tatalspend << " dollars to survive.";
    }


}
    
   int calculatePrice( int money,  int year){

    int evenyearsspent = 0 ;
    int oddyearsspent = 0 ;
    int evenyearsmoneyspent ;
    int oddyearsmoneyspent = 0 ;
    int agedifference = 0  ;
    int totalspent ;



    for(int x = 1800 ; x <= year ; x = x  + 2 )
    {
        evenyearsspent = evenyearsspent + 12000 ;
       
    }
        

for(int x = 1801 ; x <= year ; x = x  + 2 )
    {
        oddyearsspent = oddyearsspent + 1 ;
        agedifference = ((x - 1800) + 18)*50 ;

        oddyearsmoneyspent = oddyearsmoneyspent + 12000 + agedifference ;
      
    }
    
     totalspent = evenyearsspent + oddyearsmoneyspent ;

    return totalspent ;
}

    
