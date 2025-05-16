#include <iostream>
using namespace std;

int main(){
int a;
int b;

cout<<"Enter integer a:";
cin>>a;
cout<<"Enter integer b:";
cin>>b;
cout<<"Before Swap a:"<<a<<endl;
cout<<"Before Swap b:"<<b<<endl;
a= a+b;
b=a-b;
a=a-b;
cout<<"After Swap a:"<<a<<endl;
cout<<"After Swap b:"<<b<<endl;
return 0;
}
