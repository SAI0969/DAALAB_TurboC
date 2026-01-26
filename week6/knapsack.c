#include<stdio.h>
#include<conio.h>

int main(){
int n,i,j;
float capacity,temp,totalProfit=0;
float profit[50],weight[50],ratio[50];

clrscr();
printf("Enter number of items:");
scanf("%d",&n);

printf("Enter knapsack capacity:");
scanf("%f",&capacity);

for(i=0;i<n;i++){
printf("Item %d profit:",i+1);
scanf("%f",&profit[i]);
printf("Item %d weight:",i+1);
scanf("%f",&weight[i]);
ratio[i]=profit[i]/weight[i];
}

for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(ratio[i]<ratio[j]){
temp=ratio[i];
ratio[i]=ratio[j];
ratio[j]=temp;

temp=profit[i];
profit[i]=profit[j];
profit[j]=temp;

temp=weight[i];
weight[i]=weight[j];
weight[j]=temp;
}
}
}

for(i=0;i<n;i++){
if(weight[i]<=capacity){
capacity=capacity-weight[i];
totalProfit=totalProfit+profit[i];
}
else{
totalProfit=totalProfit+(profit[i]*(capacity/weight[i]));
break;
}
}

printf("Maximum Profit=%.2f",totalProfit);
getch();
return 0;
}
