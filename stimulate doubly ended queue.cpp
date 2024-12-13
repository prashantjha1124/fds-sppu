#include <iostream> #include<bits/stdc++.h> using namespace std; const short MAX = 10; class Deque{
int data[MAX]; int front, rear;
public: Deque(){
front = rear = -1;
 
}
public:




};
 


void addFront(); void addRear(); void removeFront(); void removeRear();
 

void Deque::addFront(){ int num;
cout << "\n Enter item to insert : "; cin >> num;
if(front<=1){
cout << "\n Cannot add item at front end" << endl; return;
 
}
else{

}
}
 


front--; data[front]=num;
 
void Deque::addRear(){ int num;
cout << "\n Enter Item to insert : "; cin >> num;
if(rear==MAX){
cout << "\n Queue is Overflow"; return;
 
}
else{






}
}
 


rear++; data[rear]=num; if(rear==0)
rear=1; if(front==0)
front=1;
 

void Deque::removeFront(){ int num;
 
if(front==0){
cout << "\n Queue is Underflow\n"; return;
 
}
else{
 


num=data[front];
cout << "\n Deleted item is : " << num << endl; if(front==rear){
front=0; rear=0;
 
}
else{

}
}
}
 


front++;
 

void Deque::removeRear(){ int num; if(rear==0){
cout << "\n Cannot delete item at rear end\n" << endl; return;
}
else{
num=data[rear]; if(front==rear){
front=0; rear=0;
 
}
else{


}
}
}
 


rear--;
cout << "\n Deleted item is : " << num << endl;
 

int main(){
Deque obj; int ch = 0; do{
cout << "Choices : " << endl;
cout << "1. Insert Element at the front-end\n2. Insert Element at the rear-end\n3.
Remove Element from the front\n4. Remove Element from the back\n5. Exit"<< endl; cout << "Enter your choice : ";
cin >> ch; switch(ch){ case 1:
 


case 2:


case 3:
 
obj.addFront(); break;

obj.addRear(); break;
 


case 4:


case 5:
 
obj.removeFront(); break;

obj.removeRear(); break;

cout << "Program Ended !!!!" << endl; break;
 
default:
cout << "Invalid Choice "<< endl; break;
}
}while(ch != 5);
}
 

