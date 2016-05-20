#include "bigint.h"
#include <iostream>

using namespace std;



BigInt::BigInt(string s){

	stringSsize = s.size();
	carry=0;

	for (int i=stringSsize-1; i>=0; i--){
		intvector.push_back(((int)s[i])-48);

	}
}


 string BigInt::to_string(){
 	//cout<<"SIZE: " <<intvector.size()<<", " <<stringSsize<<endl;
 	mystring = "";
 	for (int i=stringSsize-1; i>=0; i--){
 		tempchar=(char)(intvector[i]+48);
 		//cout<<"1 char: "<<tempchar<<endl;
		mystring += tempchar;
 
 	}
 	return mystring;

 }

 void BigInt::add(BigInt b){
 	
 		
 		if (stringSsize>b.stringSsize){
 			//cout<<"b smaller"<<endl;
 			sizedifference = stringSsize - b.stringSsize;

 			for (int i=0; i<sizedifference; i++){
 				b.intvector.push_back(0);
 			}
 			finalvectorsize = stringSsize;
 		}


 		else if (stringSsize<b.stringSsize){
 			//cout<<"b bigger"<<endl;
 			sizedifference = b.stringSsize - stringSsize;

 			for (int i=0; i<sizedifference; i++){
 				intvector.push_back(0);

 			}
 			finalvectorsize = b.stringSsize;
 		}

 		else {
 			//cout<<"b same size"<<endl;
 			finalvectorsize = b.stringSsize;

 		}

		

 		


 		//cout << intvector.size() << " " << b.intvector.size() << endl;
 		for (int i=0; i<finalvectorsize; i++){

 			if ((intvector[i]+b.intvector[i]+carry)>=10){

 				tempsum = intvector[i]+b.intvector[i]+carry;
 				carry = tempsum/10;
 				//cout<<"Tempsum: "<<tempsum<<"Carry: "<<carry<<endl;
 				//cout<<"intvi: "<<intvector[i]<<" b.intvi: "<<b.intvector[i]<<endl;

 				
 				intvector[i]=(tempsum-10);

 			}



 			else{
 				//cout<<"intvi: "<<intvector[i]<<" b.intvi: "<<b.intvector[i]<<endl;
 				intvector[i]+=b.intvector[i]+carry;
 				carry =0;
 				//cout<<"2intvi: "<<intvector[i]<<endl;

 			}



 		}

 		//mkae makcout<<"carry: "<<carry<<endl;
 		if(carry == 1){
 			stringSsize ++;
 			intvector.push_back(1);
 		}
 		carry=0;
 		//cout<<"Final vector size: "<<finalvectorsize<<endl;

 		
 }
