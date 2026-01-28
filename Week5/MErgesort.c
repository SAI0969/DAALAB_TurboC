#include<stdio.h>
#include<conio.h>

void merge(int b[],int p,int c[],int q,int a[]){
int i=0;
int j=0;
int k=0;
while(i<p&&j<q){
if(b[i]<c[j]){
a[k]=b[i];
i=i+1;
k=k+1;
}
else{
a[k]=c[j];
j=j+1;
k=k+1;
}
}
if(i==p){
while(j<q){
a[k]=c[j];
j=j+1;
k=k+1;
}
}
else{
while(i<p){
a[k]=b[i];
i=i+1;
k=k+1;
}
}
}

void merge_sort(int a[],int n){
int mid;
int b[50];
int c[50];
int i,j;
if(n>1){
mid=n/2;
for(i=0;i<mid;i=i+1)
b[i]=a[i];
j=0;
for(i=mid;i<n;i=i+1){
c[j]=a[i];
j=j+1;
}
merge_sort(b,mid);
merge_sort(c,n-mid);
merge(b,mid,c,n-mid,a);
}
}

int main(){
int n;
int a[100];
int i;
clrscr();
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter elements:");
for(i=0;i<n;i=i+1)
scanf("%d",&a[i]);
merge_sort(a,n);
printf("Sorted array:");
for(i=0;i<n;i=i+1)
printf("%d",a[i]);
getch();
return 0;
}
