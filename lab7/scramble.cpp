// wscramble.cpp
// Word Scramble guessing game
// Illustrates string library functions, character arrays,
//  arrays of pointers, etc.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <string>
#include <cctype>
#include <fstream>

using namespace std;

// Scramble the letters of this string randomly
void permute(char items[], int len);

// Define an array of strings (an array of char pointers, like argv)
/*const char* wordBank[] = {
   "computer", "president", "trojan", "program", "coffee",
   "library", "football", "popcorn", "science", "engineer"}; */

//const int numWords = 10;

int main(int argc, char *argv[]) {

if (argc != 2) {
		cerr << "Usage: ./scramble wordlist.txt"<< endl;
		return -1;
	}

  srand(time(0));
  char guess[80];
  bool wordGuessed = false;
  int numTurns = 10;
  int numwords = 0;
  int wordlen;
  ifstream myfile(argv[1]);


 

  if(myfile.fail()){
    cerr<<"Failed to open file..."<<endl;
    return -1;
  }

  myfile>>numwords;


  if (cin.fail()){
    cerr<<"The first value in your file is not of type int...";
  }
  /*
  else {
    cerr<< "Why isn't it a digit?"<<endl;
    return -1;
  }
  */

  char** wbptr;

  wbptr = new char* [numwords];
  char buffer [41];
  int counter =0;
  //char* middleman;





  while (!myfile.eof()){
    myfile>>buffer;
    wordlen = strlen(buffer);
    wbptr[counter] = new char [wordlen+1];
    //middleman = new char [wordlen+1];
    //wbpte[counter] = new char [wordlen+1];

   strcpy(wbptr[counter], buffer);

    buffer[0] = '\0';
    counter++;
  }

  myfile.close();





    

  // Pick a random wordfrom the wordBank
 int target = rand() % numwords;
  int targetLen = strlen(wbptr[target]);

  // Make a dynamically-allocated copy of the word and scramble it
  char* word = new char[targetLen+1];
  strcpy(word, wbptr[target]);
  permute(word, targetLen);
  
  // An individual game continues until a word
  //  is guessed correctly or 10 turns have elapsed
  while (!wordGuessed && numTurns > 0) {
    cout << "Scrambled word: " << word << endl;
    cout << "What do you guess the original word is? ";
    cin >> guess;
   wordGuessed = (strcmp(guess, wbptr[target]) == 0);
    numTurns--;
  }
  if (wordGuessed) {
    cout << "You win!" << endl;
  }
  else {
    cout << "Too many turns...You lose!" << endl;
  }
  delete [] word;
  //delete [] middleman;numwordsnumwordsnumwordsnumwords
  for (int i =0; i<numwords; i++){
    delete [] wbptr[i];
  }
  delete [] wbptr;

  
  return 0;
}

// Scramble the letters. See "Knuth shuffle" on Wikipedia.
void permute(char items[], int len) {
  for (int i = len-1; i > 0; --i) {
    int r = rand() % i;
    char temp = items[i];
    items[i] = items[r];
    items[r] = temp;
  }
}

