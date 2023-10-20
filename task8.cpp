
#include<iostream>
using namespace std ;

int calculateMoney(int age, int price, int toycost);






main(){

int age ;
int WMprice ;
int price ;
cout<<"Enter Lilly's age: " ;
cin>> age ;

cout<<"Enter the price of the washing machine: " ;
cin>> WMprice ; 

cout<<"Enter the unit price of each toy: " ;
cin>> price ; 




int totalsavings = calculateMoney( age,  WMprice,  price);


    if(totalsavings >= WMprice){

        totalsavings = totalsavings - WMprice ;

        cout<<"Yes!" << endl << totalsavings;
    }
    
   else if(totalsavings < WMprice){

        totalsavings = WMprice - totalsavings ;

        cout<<"No!" <<endl << totalsavings;
    }


}
    

int calculateMoney(int age, int price, int toycost){
    int totalyearseven = 0 ;
    int totalyearsodd = 0 ;
    int money = 0 ;


    for(int x = 2 ; x <= age ; x = x  + 2 )
    {
        money = money + 10 ;
        totalyearseven = totalyearseven + money ;
        totalyearseven = totalyearseven - 1 ;
    }


    for(int x = 1 ; x < age ; x = x  + 2 )
    {
        totalyearsodd = totalyearsodd + 1 ;
    }


    int totdollarswithtoys ;
     totdollarswithtoys = totalyearsodd * toycost ;
    int totalamount = totalyearseven + totdollarswithtoys ;
    return totalamount ;
}

    
