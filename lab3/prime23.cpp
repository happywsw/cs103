#include <iostream>
#include <cmath>


using namespace std;

int main(){

int usernum;
double forcenum;
bool nofactors;

nofactors = true;


cout<< "Please input a natural number: ";
cin>> usernum;

   
   if ((usernum > 1)) {
         
      for (int i=0; i<1000; i++) { 
         for (int j=0; j<1000; j++){
            forcenum = ((pow(2,j))*((pow(3,i))));   
            if (usernum == forcenum){  
               cout<<"Yes"<<endl;
               cout<<"Two's   = "<<j<<endl;
               cout<<"Three's = "<<i<<endl;
               nofactors = false;
            }     
         }    
      }   
   }
      
   if (nofactors == true){
   cout<<"No"<<endl;
   }  
   

   
   
return 0;  
}   












































