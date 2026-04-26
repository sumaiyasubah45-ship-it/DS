#include <iostream>
using namespace std;
void selectionsort(int a[],int n){
int i,j,temp,k;
for(i=0;i<n-1;i++){
        k=i;
    for(j=i+1;j<n;j++){
        if(a[k]>a[j]){
            k=j;
        }}
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
}
}
int main(){

int a[]={4,67,9,6,3};
int n=sizeof(a)/sizeof(a[0]);
selectionsort(a,n);
cout<<"sorted:";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}


