#include<stdio.h>
#include<conio.h>

void merge(int a[],int low,int mid,int high){
int i=low,j=mid+1,k=low;
int temp[100];
while(i<=mid&&j<=high){
if(a[i]<a[j]){
temp[k]=a[i];
i++;
}
else{
temp[k]=a[j];
j++;
}
k++;
}
while(i<=mid){
temp[k]=a[i];
i++;
k++;
}
while(j<=high){
temp[k]=a[j];
j++;
k++;
}
for(i=low;i<=high;i++)
a[i]=temp[i];
}

void merge_sort(int a[],int low,int high){
int mid;
if(low<high){
mid=(low+high)/2;
merge_sort(a,low,mid);
merge_sort(a,mid+1,high);
merge(a,low,mid,high);
}
}

int main(){
int a[100],n,i;
clrscr();
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
merge_sort(a,0,n-1);
printf("Sorted array:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
return 0;
}
