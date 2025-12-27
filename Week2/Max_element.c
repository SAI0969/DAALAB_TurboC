#include <stdio.h>
#include <conio.h>

int main(){
int i, n, max;
int arr[100];

clrscr();

printf("Enter the number of elements in the array : ");
scanf("%d", &n);

for(i = 0; i < n; i++){
printf("Enter the elements %d: ", i + 1);
scanf("%d", &arr[i]);
}

max = arr[0];

for(i = 1; i < n; i++){
if(arr[i] > max){
max = arr[i];
}
}

printf("The largest element in array is : %d", max);

getch();
return 0;
}
