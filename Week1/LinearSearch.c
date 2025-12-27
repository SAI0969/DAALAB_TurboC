#include <stdio.h>
#include <conio.h>

int main() {
int key, n, i;
int arr[100];

clrscr();

printf("Enter the number of elements in array : ");
scanf("%d", &n);

for(i = 0; i < n; i++) {
printf("Enter the element %d : ", i);
scanf("%d", &arr[i]);
}

printf("Enter the key to search : ");
scanf("%d", &key);

for(i = 0; i < n; i++) {
if(arr[i] == key) {
printf("The entered key %d is present in the array at position %d", key, i);
getch();
return 0;
}
}

printf("The entered key %d is not found in array", key);
getch();
return 0;

}
