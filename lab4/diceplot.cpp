#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int num_rolls = 4; //number of rolls per experiment
int maxrollvalue = num_rolls*6;
const int array_value = maxrollvalue-3;

int roll(){ //random dice roll
   int roll_value = rand()%(6) +1;
   return roll_value;
}

//int main(){
//   cout<<roll()<<endl;
//return 0;
//}
 
void printHistogram(int counts[]){ //prints histogram
   for(int i=0; i<array_value; i++){
      cout<<i+num_rolls<<":";
      for(int j=0; j<counts[i]; j++){
         cout<<"x";
      } 
      cout<<endl;
   }
}

int experiment_result(){ // stores random dice roll in a 4-element array
   int array_sum=0;
   
   int roll_fours[num_rolls];
      for(int j=0; j<num_rolls; j++){         
         roll_fours[j] = roll();
         //cout<<j<<": "<<roll_fours[j]<<endl;
         array_sum+=roll_fours[j];
      }     
return array_sum;
}
 
//int main(){
//   int counts[21]; // 21 options of sum of 4 dice => [4,24]
//   for (int i=0; i<21; i++)
//      counts[i] = i/2; // fill the array
//      printHistogram(counts); // call your method
//    
//return 0;
//}



int main(){
   
   srand(time(NULL));
   
   int counts[array_value], n, experiment_value, experiment_counter=0;
   
   for(int i=0; i<array_value;i++){ //initializes counts array
      counts[i] = 0;
   }
   
   
   cout<<"Please enter a number: "; //user input exp number as n
   cin>>n;
   
     while (experiment_counter<n){ //cycles through all n values
      experiment_value=0;
      experiment_value = experiment_result();
      //cout<<"The random sum is: "<<experiment_value<<endl;
      
      for(int i=0; i<array_value; i++){ //counts 4 roll sum values
      // cout<<i<<endl;  
         if (experiment_value == i+4){
            counts[i]=counts[i]+1;
            //cout<<"lol"<<endl;
         }
      }   
      experiment_counter++;  
   }


//for (int i = 0; i<21; i++){
//cout<<counts[i]<<endl;     
//}

printHistogram(counts);
return 0;
}
