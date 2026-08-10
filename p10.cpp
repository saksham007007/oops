#include <iostream>
using namespace std;

class invoice{
string partNo;
string partDesc;
int qty;
double ppy;
public:
invoice(string partNo,string partDesc,int qty,double ppy){
this->partNo=partNo;
this->partDesc=partDesc;
this->qty=qty;
this->ppy=ppy;
if(ppy<0)this->ppy=0;
}

void setpartNo(string partNo){
this->partNo=partNo;
}
string getpartNo(){
return partNo;
}

void setpartDesc(string partDesc){
this->partDesc = partDesc;
}
string getpartDesc(){
return partDesc;
}

void setqty(int qty){
this->qty=qty;
}
int getqty(){
return qty;
}

void setppy(double ppy){
this->ppy=ppy;
if (ppy<0) this->ppy=0;
}
double getppy(){
return ppy;
}

double getInvoiceAmt(){
double amt = ppy * qty;
if(amt<0)amt=0;
return amt;
}
};


int main(){
invoice i("1325","ABC",10,145.23);

cout<<"Part number : "<<i.getpartNo()<<endl;
cout<<"Part description : "<<i.getpartDesc()<<endl;
cout<<"Price per item : "<<i.getppy()<<endl;
cout<<"Quantity : " <<i.getqty()<<endl;
cout<<"Invoice amount : "<<i.getInvoiceAmt()<<endl;

i.setppy(-1441.41);
i.setqty(42);
cout<<endl<<"Part number : "<<i.getpartNo()<<endl;
cout<<"Part description : "<<i.getpartDesc()<<endl;
cout<<"Price per item : "<<i.getppy()<<endl;
cout<<"Quantity : "<<i.getqty()<<endl;
cout<<"Invoice amount : "<<i.getInvoiceAmt()<<endl;
return 0;
}
