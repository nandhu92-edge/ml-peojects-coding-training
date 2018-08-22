#include<std io.h>
int main(void){
int t,smallest;
int n;
int arr[10];
int myArray[10];
int exarr[10];
printf("Please enter the no. of test cases\n");
scanf("%d", &t);
if(t < 0 || t > 100){
  printf("Please enter a number between 1 and 100 for test cases\n");
  scanf("%d", &t);
}
printf("Please enter the no. of elements in the array\n");
scanf("%d", &n);
if(n < 0 || n > 100){
  printf("Please enter a number between 1 and 100 for the no.of elements in the array\n");
  scanf("%d", &n);
}
printf("Please enter the elements in the array\n");
for(int i=0; i <n; i++){
        scanf("%d", &arr[i]);
}
for (int k = 0; k < n; k++){
        printf("hi");
  for (int m = 0; m < n; m++){
      printf("hi again");
      if (myArray[m] > myArray[k]){
        for(int i = 0; i < n; i++){
           arr[i] = myArray[m];
      }
    }
  }
      smallest = arr[0];
      for (int z = 0; z < n; n++){
          //printf("hello");
        if (smallest > myArray[z]){
           smallest = myArray[z];
           }
      }
      exarr[k] = smallest;
}
for (int l = 0; l < n; l++){
   printf("hi finally");
   printf(exarr[l]);
}
}
