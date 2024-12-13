#include <iostream> #define MAX 5 using namespace std; class cqueuepizza
{
 

public:




};
 
int q[MAX],rear,front;

cqueuepizza(); void insert(int); int delete1(); void display();
 

cqueuepizza :: cqueuepizza()
{
front=rear=-1;
}
void cqueuepizza::insert (int value)
{
if (((rear == MAX-1) && (front == -1))|| (rear -front)==-1)

 

else
{
 
cout<<"\n Queue is Full";


if (rear == MAX-1)
rear = -1;
 
rear ++;
q[rear] = value;
cout<<"Order added at "<<rear<<endl;
}
}
int cqueuepizza::delete1 ( )
{
int value;
if (rear == front)
{
 


}
else
{





}
}
 
cout<<endl<<"Queue is Empty"; return -999;



if ((front == MAX-1) && rear < front) front = -1;
front ++;
value = q[front];
cout<<"Order removed from "<<front<<endl; return value;
 

void cqueuepizza :: display()
{
int i; cout<<endl;
 
if(front <= rear)
{
 



}
else
{





}
}
int main()
{
 
i = front+1; while(i <= rear)
cout<<q[i++]<<" ";



i = front+1;
while(i <= MAX - 1)
cout<<q[i++]<<" ";
i = 0;
while(i <= rear)
cout<<q[i++]<<" ";
 
int choice,x,y; char ans; cqueuepizza q1; do
{
cout<<"\n*****MENU*****"; cout<<"\n1. Place an order id "; cout<<"\n2. Remove an order id "; cout<<"\n3. Display the queue "; cout<<"\nEnter your choice: "; cin>>choice;
switch(choice)
{
case 1: cout<<"\n Enter the order id : "; cin>>y;
q1.insert(y);
q1.display(); break;
case 2: x=q1.delete1();
if(x!=-999)
cout<<"\nThe removed order is: "<<x; q1.display();
break; case 3: q1.display();
break;
default: cout<<"\nWrong choice!!";
break;
 




return 0;

}
 
}
cout<<"\nDo you want to continue(y/n)??"; cin>>ans;
}while(ans=='y');
 



