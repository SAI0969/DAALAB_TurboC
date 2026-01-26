#include<stdio.h>
#include<conio.h>

int partition(int a[],int l,int r){
int p,i,j,temp;
p=a[l];
i=l;
j=r+1;
while(i<j){
for(i=i+1;i<=r&&a[i]<p;i++);
for(j=j-1;a[j]>p;j--);
if(i<j){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[l];
a[l]=a[j];
a[j]=temp;
return j;
}

void quick_sort(int a[],int l,int r){
int s;
if(l<r){
s=partition(a,l,r);
quick_sort(a,l,s-1);
quick_sort(a,s+1,r);
}
}

int main(){
int a[50],n,i;
clrscr();
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quick_sort(a,0,n-1);
printf("Sorted array:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
return 0;
}
