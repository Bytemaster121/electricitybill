// write a C++ program to input electricity unit charge and calculate   
//   the total electricity bill according to yhe given condition :-

// cost of 7 rupees per unit 
//   and additional subcharge of 20% is added  to bill 


#include<iostream>
using namespace std ;
int main(){
 int unit;
 int bill = 0 ;
cout<<"enter your electricity consumption in units"<<endl;
cin>>unit;
if(unit<=50){
    bill = 7*unit;
}
else if(unit<=150){
    bill = (7* 50)+ 7*(unit-50);
}
else if(unit<=250){
    bill = (7 * 50)+(7*100)+(7*(unit-150));
}
else {
    bill = (7 * 50)+ (7*100)+(7*100)+(7*(unit-250));
}
bill = bill +(0.2*bill);

cout<<"your total bill for your consumped units are - Rs. "<<bill<<endl;

return 0 ;


}
