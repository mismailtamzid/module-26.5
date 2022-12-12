#include<stdio.h>
int swap(int arr[], int n);


int main(){
int n,i;
scanf("%d", &n);
int arr[n];
for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
}
swap(arr, n);

return 0;
}

int swap(int arr[], int n){
int small=arr[0];
int i, j, temp;
for(i=0; i<n; i++){
   for(j=i+1; j<n; j++){
     if(arr[i]>arr[j]){
       temp= arr[i];
       arr[i]= arr[j];
       arr[j]= temp;
    }
   }
}
for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
}
}
