#include <iostream>
using namespace std;

int main() {

   int integer, integer_hundreds, integer_tens, integer_ones;
   cout << "Enter an integer between 0 and 999:";
   cin >> integer ;
   
   
   
   integer_ones = (integer%10);
   integer_tens = ((integer%100) - integer_ones)/10;
   integer_hundreds = (integer - (integer_tens + integer_ones))/100;
   
   
   
   
   cout << "1's digit is:   " << integer_ones << endl;
   cout << "10's digit is:  " << integer_tens << endl;
   cout << "100's digit is: " << integer_hundreds << endl;
   //cout << integer << endl;










   return 0;
}
