#include <stdio.h>
#include <conio.h>

int main(){
int i, n, j, key;
int arr[100];

clrscr();

printf("Enter the number of elements in the array : ");
scanf("%d", &n);

for(i = 0; i < n; i++){
printf("Enter the elements %d: ", i + 1);
scanf("%d", &arr[i]);
}

for(i = 1; i < n; i++){
key = arr[i];
j = i - 1;
while(j >= 0 && arr[j] > key){
arr[j + 1] = arr[j];
j--;
}
arr[j + 1] = key;
}

printf("Sorted Array is : ");
for(i = 0; i < n; i++){
printf("%d ", arr[i]);
}

getch();
return 0;
}
