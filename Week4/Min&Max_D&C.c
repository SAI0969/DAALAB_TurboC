#include<stdio.h>
#include<conio.h>

int Maximum(int arr[],int low,int high){
int mid,leftmax,rightmax;
  
if(low==high)
return arr[low];
  
mid=(low+high)/2;
  
leftmax=Maximum(arr,low,mid);
rightmax=Maximum(arr,mid+1,high);
  
if(leftmax>rightmax)
return leftmax;
  
else
return rightmax;
}

int Minimum(int arr[],int low,int high){
int mid,leftmin,rightmin;
  
if(low==high)
return arr[low];
  
mid=(low+high)/2;
  
leftmin=Minimum(arr,low,mid);
rightmin=Minimum(arr,mid+1,high);
  
if(leftmin<rightmin)
return leftmin;
  
else
return rightmin;
}

int main(){
int arr[100],n,i,max,min;
clrscr();
  
printf("Enter the number of elements in array:");
scanf("%d",&n);
  
for(i=0;i<n;i++){
printf("Enter the element %d:",i);
scanf("%d",&arr[i]);
}
  
max=Maximum(arr,0,n-1);
  
printf("Maximum element is:%d",max);
min=Minimum(arr,0,n-1);
  
printf("\nMinimum element is:%d",min);
getch();
return 0;
}
