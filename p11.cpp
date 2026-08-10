#include <iostream>
using namespace std;

class tollbooth{
unsigned int noc;
double cash;
public:
tollbooth(){
this->noc = 0;
this->cash=0;
}
void payingCar(){
noc++;
cash+=0.5;
}

void nonPayingCar(){
noc++;
}
void display(){
cout<<"Number of cars : "<<noc<<endl;
cout<<"Total amount : "<<cash<<endl;
}
};

int main(){
tollbooth t;
int choice;
while(choice!=3){
cout<<"Enter a choice 1.Paying Car   2.Non paying car   3.Display and exit "<<endl;
cin>>choice;
switch(choice){
case 1: 
t.payingCar();
break;

case 2:
t.nonPayingCar();
break;


case 3:
t.display();
return 0;

default:
cout<<"Invalid input "<<endl;
}
}
return 0;
}

