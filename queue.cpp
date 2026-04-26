#include <iostream>
using namespace std;
const int maxsize=5;
int queue[maxsize];
int front=0;
int rear=0;

void enqueue(int x){
if(rear==maxsize){
    cout<<"Queue overflow"<<endl;

} else{
queue[rear]=x;
rear++;}
}
void dequeue(){
if(front==rear){
    cout<<"Queue underflow"<<endl;
} else{
    front++;
}
}

void show(){
if(front==rear){
    cout<<"Nothing to show"<<endl;
} else{
    for(int i=front;i<rear;i++){
        cout<<queue[i]<<" ";
    }
}
}


int main(){
enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
show();
dequeue();
show();
return 0;}
