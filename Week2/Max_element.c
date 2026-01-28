#include <stdio.h>
#include <conio.h>

int main() {
int i, n, min, max;
int arr[100];

clrscr();

printf("Enter the number of elements in the array: ");
scanf("%d", &n);

for(i = 0; i < n; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &arr[i]);
}

min = max = arr[0];

for(i = 1; i < n; i++) {
if(arr[i] > max)
max = arr[i];

if(arr[i] < min)
min = arr[i];
}

printf("Maximum element = %d\n", max);
printf("Minimum element = %d", min);

getch();
return 0;
}
