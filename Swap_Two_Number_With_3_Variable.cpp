#include <iostream>
using namespace std;

int main(){
int a;
int b;
int temporary;

cout<<"Enter integer a:";
cin>>a;
cout<<"Enter integer b:";
cin>>b;
cout<<"Before Swap a:"<<a<<endl;
cout<<"Before Swap b:"<<b<<endl;
temporary=a;
a=b;
b=temporary;
cout<<"After Swap a:"<<a<<endl;
cout<<"After Swap b:"<<b<<endl;
return 0;
}
