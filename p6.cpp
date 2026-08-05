#include <iostream>
using namespace std;

class Hotel{
    int Rno;
    string name;
    float tariff;
    int nod;
    float calc(){
        float amt = nod*tariff;
        if(amt>10000) amt = 1.05*amt;
        return amt;
    }
    
    public:
    void checkIn(int Rno,string name,float tariff,int nod){
        this->Rno = Rno;
        this->name = name;
        this->tariff = tariff;
        this->nod=nod;
    }
    void checkOut(){
        cout<<"Room Number : "<<Rno<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Tariff : "<<tariff<<endl;
        cout<<"Number of days :  "<<nod<<endl;
        cout<<"Amount : "<<calc()<<endl;
}
};

int main(){
    Hotel h[2];
    for(int i=0;i<2;i++){
        int Rno,nod;
        float tariff;
        string name;
        cout<<"Enter Room number : ";
        cin>>Rno;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Tariff : ";
        cin>>tariff;
        cout<<"Enter Number of days : ";
        cin>>nod;
        h[i].checkIn(Rno,name,tariff,nod);
        cout<<endl;
    }
    
    cout<<"\n\nThe details are\n\n";
    for(int i=0;i<2;i++){
        h[i].checkOut();
        cout<<endl;
    }
    
    return 0;
}
