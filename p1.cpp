#include <iostream>
using namespace std;

class users{
int units;
string name;
float bill;
float calculateBill(){
if(units>0 && units<=100) bill = units*60;
else if(units>100 && units<=300) bill = 100*60 + (units-100)*80;
else bill = 100*60 + 200*80 + (units-300)*90;
bill = bill/100;
bill = bill+50;
if(bill>300) bill = bill+(0.15)*bill;
return bill;
}

public:
void setDetails(int units,string name){
this->units=units;
this->name = name;
}

void showBill(){
float amt = calculateBill();
cout<<"Name : "<<name<<"   "<<"Bill: "<<bill<<endl;
}
};

int main(){
int n;
cout<<"Enter the number of users : ";
cin>>n;
users u[n];
for(int i=0;i<n;i++){
string name;
cout<<"Enter name : ";
cin>>name;
int units;
cout<<"Enter units : ";
cin>>units;
u[i].setDetails(units,name);
cout<<endl;
}
cout<<"Details\n\n";
for(int i=0;i<n;i++) u[i].showBill();
return 0;
}
