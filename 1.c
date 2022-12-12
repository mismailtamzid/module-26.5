#include<stdio.h>
int sum(int a, int b){
  return a+b;
}
int main(){
    int x, y;
    float z;
    scanf("%d%d", &x, &y);
    z= (float) sum(x,y)/2;
    float* pointer;
    pointer = &z;
    printf("%.3f", *pointer);
return 0;
}
