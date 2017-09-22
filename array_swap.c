/* 
Queenie Xiang
Systems pd5
HW3 -- Get to the Point
2017-09-22
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  srand(time(NULL));

  int arr[10];
  int arr_rev[10];
  int i; 

  arr[9] = 0; 
  for (i = 0; i < 9; i++) {
    arr[i] = rand();
    printf("memoryLoc at %d: %d\n", i, arr[i]);
  }
  printf("memoryLoc at %d: %d\n\n", 9, arr[9]);

  
  //Filling in the reversed array:
  int * pointer = &arr[9];
  int counter = 0; 

  for (; pointer > &arr[-1]; pointer--) {
    arr_rev[counter] = *pointer;
    printf("memoryLoc at %d: %d\n",counter, arr_rev[counter]);
    counter++;
  }
  
  /* Other way? 
  for (i = 9; i > -1; i--) {
     num = arr[i];
     int * pointer = &num;
     arr_rev[9-i] = *pointer;
     printf("memoryLoc at %d: %d\n", 9-i, arr_rev[9-i]);
  } */ 

  return 0; 
} 
  
