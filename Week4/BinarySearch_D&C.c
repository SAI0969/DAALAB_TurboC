#include<stdio.h>
#include<conio.h>

int binarySearch(int arr[],int left,int right,int key){
int mid;

  
if(left>right)
return-1;
mid=(left+right)/2;

  
if(arr[mid]==key)
return mid;
  
else if(key<arr[mid])
return binarySearch(arr,left,mid-1,key);
  
else
return binarySearch(arr,mid+1,right,key);
}

int main(){
int arr[100],n,i,key,result;
clrscr();

  
printf("Enter number of elements:");
scanf("%d",&n);

  
printf("Enter elements in sorted order:");
  
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
  
printf("Enter key to search:");
scanf("%d",&key);
  
result=binarySearch(arr,0,n-1,key);
if(result!=-1)
printf("Element found at position %d",result);

  
else
printf("Element not found");

  
getch();
return 0;
}
