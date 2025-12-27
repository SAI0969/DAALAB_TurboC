#include <stdio.h>
#include <conio.h>

void Insertion_sort(int arr[], int n){
int key, j;

if(n <= 1)
return;

Insertion_sort(arr, n - 1);

key = arr[n - 1];
j = n - 2;

while(j >= 0 && arr[j] > key){
arr[j + 1] = arr[j];
j--;
}

arr[j + 1] = key;
}

int main(){
int n, i;
int arr[100];

clrscr();

printf("Enter the number of elements in array : ");
scanf("%d", &n);

for(i = 0; i < n; i++){
printf("Enter the elements %d : ", i);
scanf("%d", &arr[i]);
}

Insertion_sort(arr, n);

printf("Sorted array is : \n");
for(i = 0; i < n; i++){
printf("%d\n", arr[i]);
}

getch();
return 0;
}
