#include <iostream>
#include <cmath>
#include "bmplib.h"

using namespace std;

// global variable. bad style but ok for this lab
unsigned char image[SIZE][SIZE];

// Fill in this function:
void draw_rectangle(int top, int left, int height, int width) {
   int x, y, x1, y1, x2, y2, x3, y3; //top left is (x,y) proceeding C.C.
   x = x1 = top;
   y = y3 = left;
   y1 = y2 = y + height;
   x2 = x3 = x + width;
 
   for (int xcount=x;xcount<=x3;xcount++){
      if ((xcount<SIZE)&&(xcount>0)){ 
         for (int ycount=y; ycount<=y1; ycount++){
            if ((ycount<SIZE)&&(ycount>0)){ 
               if ((y<SIZE)&&(y>0))  
               image[y][xcount] = 0;
               if ((y1<SIZE)&&(y1>0))
               image[y1][xcount] = 0;
               if ((x<SIZE)&&(x>0))      
               image[ycount][x]=0;
               if ((x2<SIZE)&&(x2>0))
               image[ycount][x2] = 0;
         
            }
         }
         
      }    
   }
       
}

// Fill in this function:
void draw_ellipse(int cy, int cx, int height, int width) {  
   int x_shift, y_shift;
   for(double theta=0; theta <= 2*(M_PI); theta+=.01 ){
      double x = (width/2)*(cos(theta));
      double y = (height/2)*(sin(theta));
      x_shift=x+cx;
      y_shift=y+cy;
      if (((y_shift<SIZE)&&(x_shift<SIZE))&&((y_shift>0)&&(x_shift>0))){
         image[(int)y_shift][(int)x_shift] = 0; 
      }    
   }
}


int main() {
   // initialize the image to all white pixels
   for (int i=0; i < SIZE; i++) {
      for (int j=0; j < SIZE; j++) {
         image[i][j] = 255;
      }
   }
   
   // Main program loop here
   

   //draw_rectangle(10, 10, 500, 20); 
   //draw_ellipse(125, 125, 100, 500);
   
  
  int menu_choice=0, top, left, height_rec, width_rec;
  int cy, cx, height_ell, width_ell;
  while (menu_choice <2){
 
     cout<<"To draw a rectangle, enter: 0 top left height width"<<endl;
     cout<<"To draw an ellipse, enter: 1 cy cx height width"<<endl;
     cout<<"To save your drawing as output.bmp and quit, enter: 2"<<endl;
     cin>>menu_choice;
        if ((menu_choice<0)||(menu_choice>2)){
           cout<<"Please enter a valid option..."<<endl;
           menu_choice=0;      
        } 
        else if (menu_choice==0){
          cin>>top>>left>>height_rec>>width_rec;
          draw_rectangle(top, left, height_rec, width_rec);        
        }
        else if (menu_choice==1){
           cin>>cy>>cx>>height_ell>>width_ell;
           draw_ellipse(cy, cx, height_ell, width_ell);
        } 
        else{
           break;
        }
   } 
   
  
   //Write the resulting image to the .bmp file
   writeGSBMP("output.bmp", image);
   showGSBMP(image);
   return 0;
}
