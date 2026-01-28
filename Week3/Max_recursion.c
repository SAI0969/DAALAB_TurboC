#include<stdio.h>
#include<conio.h>

int Find_Max(int arr[],int n){
if(n==1)
return arr[0];
if(arr[n-1]>Find_Max(arr,n-1))
return arr[n-1];
else
return Find_Max(arr,n-1);
}

int Find_Min(int arr[],int n){
if(n==1)
return arr[0];
if(arr[n-1]<Find_Min(arr,n-1))
return arr[n-1];
else
return Find_Min(arr,n-1);
}

int main(){
int n,i,max,min;
int arr[100];

clrscr();

printf("Enter number of elements:");
scanf("%d",&n);

for(i=0;i<n;i++){
printf("Enter element%d:",i+1);
scanf("%d",&arr[i]);
}

max=Find_Max(arr,n);
min=Find_Min(arr,n);

printf("Max=%d\n",max);
printf("Min=%d",min);

getch();
return 0;
}
