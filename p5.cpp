#include <iostream>
using namespace std;

class student{
    int id;
    string name;
    int age;
    string course;
    
    public:
    void setDetails(int id,string name,int age, string course){
        this->id =id;
        this->name = name;
        this->age=age;
        this->course=course;
    }
    void show(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Course: "<<course<<endl;
    }
};

int main(){
    student s[2];
    for(int i=0;i<2;i++){
        int id,age;
        cout<<"Enter id : ";
        cin>>id;
        string name,course;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Enter course : ";
        cin>>course;
        cout<<endl;
        s[i].setDetails(id,name,age,course);
    }
    cout<<"The details are \n\n";
    for(int i=0;i<2;i++){
        s[i].show();
        cout<<endl;
    }
    
    
    return 0;
}
