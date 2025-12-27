#include <stdio.h>
#include <conio.h>

int main(){
int n, i, j;
int arr[100];

clrscr();


printf("Enter the number of elements in the array : ");
scanf("%d", &n);

for(i = 0; i < n; i++){
printf("Enter the element %d : ", i);
scanf("%d", &arr[i]);
}


for(i = 0; i < n - 1; i++){
for(j = 0; j < n - 1 -i; j++){

if(arr[j] > arr[j + 1]){

int temp = arr[j];

arr[j] = arr[j + 1];

arr[j + 1] = temp;
}
}
}

printf("Sorted array is : ");

for(i = 0; i < n; i++){
printf("%d ", arr[i]);
}

getch();
return 0;

}


