#include<stdio.h>
int a[16];

int top=0,bottom=0;

void insert(int data){

 a[bottom]=data;
 bottom++;
 
}


int out(){
  int data;
  data=a[top];
  top++;
  return data;
}


int main(){

 int tpc=12; 
 int a[]={116,10,3,100,7,26,55,97,14,255,111,19,255,68,84,255,255,177,81,90,255,255,2,3,4,5,93,255,255,9,9};
 int k=1,r=0,height=0;
 
 int data;
 int data1=a[0];
 int address=0;
 int ad=0; 
 int j=0;
 
 while(top<=bottom){
   
   
      
     data=a[address]+tpc*height;
     
     if(data1>data) {data1=data;   ad=address;}
       
    if(a[address+1]!=255) {     insert(a[address+1]);    r++;  }
    if(a[address+2]!=255) {     insert(a[address+2]);    r++;  }
      
    address=out();
     
     
    

          j++;

        if(j==k) {    
                      k=r;
                      r=0;
                      height++;  
                      j=0;
                         
                      }



 }

 printf("data1=%d,ad=%d",data1,ad);

 }

