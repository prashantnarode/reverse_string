

#include <stdio.h>


void reverse_string(char* start){

  char* end = start;
  char tmp;
 
  // move the 'end' pointer to the last character
  while ( *end){ 
    end++;
  }
  end--;
   
  while( start < end ){
    tmp = *start;
    *start = *end;
    *end   = tmp;
    start++;
    end--;
  }
}


int main(){

  char a[] = "watermelon";
  char b[] = "fleamarket";

  
  reverse_string(a);
  reverse_string(b);

  printf("%s \n",a);
  printf("%s \n\n",b);

  return 0;
}


