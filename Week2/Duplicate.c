#include <stdio.h>
#include <conio.h>

int main(){
int i, n, j;
int found = 0;
int arr[100];

clrscr();

printf("Enter the number of elements in the array : ");
scanf("%d", &n);

for(i = 0; i < n; i++){
printf("Enter the elements %d: ", i + 1);
scanf("%d", &arr[i]);
}

for(i = 0; i < n - 1; i++){
for(j = i + 1; j < n; j++){
if(arr[i] == arr[j]){
found = 1;
break;
}
}
if(found == 1)
break;
}

if(found == 1){
printf("Duplicate found");
}
else{
printf("Duplicate does not exist");
}

getch();
return 0;
}
