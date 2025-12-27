#include <stdio.h>
#include <conio.h>

int main(){
char text[100], pattern[50];
int n, m, i, j, found = 0;

clrscr();

printf("Enter the length of text string : ");
scanf("%d", &n);

printf("Enter the text string : ");
scanf("%s", text);

printf("Enter the length of pattern string : ");
scanf("%d", &m);

printf("Enter the pattern string : ");
scanf("%s", pattern);

for(i = 0; i <= n - m; i++){
j = 0;
while(j < m && text[i + j] == pattern[j]){
j++;
}
if(j == m){
printf("Pattern found at position %d\n", i + 1);
found = 1;
}
}

if(!found){
printf("Pattern not found");
}

getch();
return 0;
}
