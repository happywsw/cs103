#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   // Enter your code here
   
   int red, green, blue, temp_max;
   double cyan, magenta, yellow, black, white;
  
   cout<< "Enter a value for red: "; 
   cin >> red; 
   cout<< "Enter a value for green: "; 
   cin >> green;
   cout<< "Enter a value for blue: "; 
   cin >> blue;
  
   temp_max = max(red, green);
   white = (max(temp_max, blue))/255.0;
  
   cyan =  ((white - (red/255.0))/white);
   magenta =  ((white - (green/255.0))/white);
   yellow =  ((white - (blue/255.0))/white);
   black = (1 - white); 
  
  
   cout << "cyan:    " << cyan << endl;
   cout << "mageta:  " << magenta << endl;
   cout << "yellow:  " << yellow << endl;
   cout << "black:   " << black << endl; 
   
   
   return 0;
}
