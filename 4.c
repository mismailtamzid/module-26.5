#include<stdio.h>

int circle_area(int r){
  float area= 3.1416*r*r;
  printf("%f", area);
}

int main(){
float redius;
scanf("%f", &redius);
circle_area(redius);
}
