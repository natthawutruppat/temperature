#include <iostream>
#include <math.h>
using namespace std;

void main()

{
 
float cc , frh ; 
cout << ("Enter Celsius temperature : ") ;
cin >> cc ; 

frh =  (1.8 * cc) + 32 ;
cout << "  " << endl; 
cout << "Fahrenheit = " << frh << endl;
cout << "  " << endl; 
cout << frh << " is "<<  (frh > 70 ?"Now weather in Thailand is HOT":"Now weather in Thailand is COOL" ) ;
cout << "  " << endl; 

}

