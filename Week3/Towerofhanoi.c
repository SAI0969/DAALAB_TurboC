#include <stdio.h>
#include <conio.h>

void towerofhanoi(int n, char Source, char Auxiliary, char Target){
if(n == 1){
printf("\n Move disk ---> 1 from %c to %c", Source, Target);
return;
}
towerofhanoi(n - 1, Source, Target, Auxiliary);
printf("\n Move disk ---> %d from %c to %c", n, Source, Target);
towerofhanoi(n - 1, Auxiliary, Source, Target);
}

int main(){
int n;

clrscr();

printf("Enter the number of disks: ");
scanf("%d", &n);

towerofhanoi(n, 'A', 'B', 'C');

getch();
return 0;
}
