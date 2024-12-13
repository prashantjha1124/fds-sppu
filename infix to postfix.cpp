


#include<iostream> #include<bits/stdc++.h> using namespace std;

int prec(char c){
if(c == '/' || c == '*'){return 2;}
else if(c == '+' || c == '-'){return 1;} else{return -1;}
}


void infixToPostfix(char s[]){ char result[1000];
int resultIndex = 0; int len = strlen(s); char stack[1000]; int stackIndex = -1;

for(int i = 0; i < len; i++){ char c = s[i];

if((c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z') || (c >= '0' && c <= '9')){ result[resultIndex++] = c;
}
else{
while(stackIndex >= 0 && (prec(s[i]) < prec(stack[stackIndex]) || prec(s[i]) == prec(stack[stackIndex]))){
result[resultIndex++] = stack[stackIndex--];
 
}
stack[++stackIndex] = c;
}
}


while(stackIndex >= 0){
result[resultIndex++] = stack[stackIndex--];
}
result[resultIndex] = '\0'; cout << result << endl;
}


int main(){
char exp[50]; bool flag = true; while(flag){
cout << "Choices : " << endl;
cout << "1. Enter expression\n2. Process Infix to Postfix & display the results\n3. Exit" << endl;
int ch;
cout << "Enter your choice : "; cin >> ch;
switch (ch)
{
case 1:
cout << "Enter the expression : "; cin >> exp;
cout<<endl; break;
case 2:
infixToPostfix(exp);
 
cout << endl; break;
case 3:
cout << "---------Program Ended	" << endl;
flag = false; break;
default:
cout << "Invalid choice" << endl; break;
}
}
}
 

