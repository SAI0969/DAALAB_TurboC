#include <stdio.h>
#include <conio.h>

int Find_Max(int arr[], int n){
if(n == 1)
return arr[0];

if(arr[n - 1] > Find_Max(arr, n - 1))
return arr[n - 1];
else
return Find_Max(arr, n - 1);
}

int main(){
int n, i, max;
int arr[100];

clrscr();

printf("Enter the number of elements : ");
scanf("%d", &n);

for(i = 0; i < n; i++){
printf("Enter element %d : ", i);
scanf("%d", &arr[i]);
}

max = Find_Max(arr, n);

printf("The max element is %d", max);

getch();
return 0;
}
