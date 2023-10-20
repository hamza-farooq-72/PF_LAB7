
#include<iostream>
#include<iomanip>
using namespace std ;


main(){

float count ;
float p1 = 0.0 ,p2 = 0.0,  p3 = 0.0 ,p4 = 0.0 ,p5 = 0.0 ;
float num ;

cout<<"Enter numbers count: " ;
cin>> count ;

for(int x = 1 ; x <=  count ; x = x + 1)
{
cout<<"Enter a number: " ;
cin>> num ; 

if(num >= 0 && num < 200 ){

p1 = p1 + 1 ;

}
if(num >= 200 && num <= 399 ){

p2 = p2 + 1 ;

}
if(num >= 400 && num <= 599 ){

p3 = p3 + 1 ;

}
if(num >= 600 && num <= 799 ){

p4 = p4 + 1 ;

}
if(num >= 800 ){

p5 = p5 + 1 ;

}
}

p1 = (p1/count)*100 ;
p2 = (p2/count)*100 ;
p3 = (p3/count)*100 ;
p4 = (p4/count)*100 ;
p5 = (p5/count)*100 ;






cout<< fixed << setprecision(2)<< p1 <<"%" <<endl ;
cout<<fixed << setprecision(2) << p2 <<"%" <<endl ;
cout<<fixed << setprecision(2) <<  p3 <<"%" <<endl ;
cout<<fixed << setprecision(2) <<  p4 <<"%" <<endl ;
cout<<fixed << setprecision(2) <<  p5 <<"%" ;


}
