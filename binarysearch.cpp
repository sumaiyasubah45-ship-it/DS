#include <iostream>
using namespace std;
 int binarysearch(int array[],int size,int target){
 int first=0;
 int last =size-1;
 int mid;
 while(first<=last){
    mid=first+(last-first)/2;
    if(array[mid]==target){
        return mid;
    }
    else if(array[mid]<target){
        first=mid+1;
    }
    else{
        last=mid-1;
    }
 }
 return -1;
 }
 int main(){
 int array[]={1,2,3,4};
 int size =sizeof(array)/sizeof(array[0]);
 int target;
 cout<<"enter target value";
 cin>>target;
 int result =binarysearch(array,size,target);
 if(result!=-1){
    cout<<"element found at index"<<result<<endl;
 }
 else{cout<<"element not found"<<endl;}


 return 0;
 }
