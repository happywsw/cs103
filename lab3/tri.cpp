
#include <iostream>
#include <cmath>

using namespace std;

int main() {

int degrees;
double radians, lengthofxaxis;
//bool twenties;

//twenties = false;


cout<<"Please enter a degree value between 15 and 75: ";
cin>>degrees;

radians = (((double)(degrees)*(M_PI))/(180));



for (int i=1 ; i<=30 ; i++){
   lengthofxaxis = i*(tan(radians));
   
   if((lengthofxaxis>=20) && (lengthofxaxis<=30)){     
         for(int k=0; k<20; k++){  
            cout<<"*";
         }
   }
   
   else {
      for(int j=1 ; j<=lengthofxaxis ; j++){
         cout<<"*";   
      }
   }
   
cout<<endl;
}


return 0;
}

