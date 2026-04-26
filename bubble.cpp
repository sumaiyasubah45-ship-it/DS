#include <iostream>
using namespace std;
void bubblesort(int num[], int array_size){
int i,j,temp;
for(i=array_size-1;i>=0;i--){
    for(j=1;j<=i;j++){
            if(num[j-1]>num[j]){
                temp=num[j-1];
                num[j-1]=num[j];
                num[j]=temp;

            }

    }
}

}
int main(){
int num[]={7,2,0,2,3};
int array_size=sizeof(num)/sizeof(num[0]);
bubblesort(num,array_size);
    cout<<"sorted"<<endl;
for(int i=0;i<array_size;i++){
        cout<<num[i];

}

return 0;
}

