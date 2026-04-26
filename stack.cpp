#include <iostream>
using namespace std;
 const int maxsize=10;
int stack[5];
int top=-1;

bool isfull(){
if(top==maxsize-1)
    return true;
else
    return false;

}
bool isempty(){
if(top==-1)
    return true;
    else
        return false;
}
void push(int x){
if(isfull()){
    cout<<"Stack overflow"<<endl;
} else{
    top++;
stack[top]=x;}
}

void pop(){
if(isempty()){cout<<"stack underflow"<<endl;}
else{top--;}
}

void show(){
if(isempty()){cout<<"nothing to show";}
   else{for(int i=top;i>=0;i--){
    cout<<stack[i]<<" ";
   }

   }
}
int main(){
push(10);
push(20);
push(30);
show();
pop();
show();
return 0;}



