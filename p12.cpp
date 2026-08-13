#include <iostream>
using namespace std;

class Time{
int hr;
int min;
int sec;
public:

Time(){
hr =0,min=0,sec=0;
}

Time(int hr,int min, int sec){
this->hr =hr;
this->min=min;
this->sec=sec;
}

void show(){
cout<<hr<<":"<<min<<":"<<sec<<endl;
}

void add(Time &t1,Time &t2){
hr = t1.hr + t2.hr;
min = t1.min + t2.min;
if(min>60){
hr = hr + min/60;
min = min %60;
}
sec = t1.sec + t2.sec;
if(sec>60){
min = min+sec/60;
sec = sec%60;
}
}
};

int main(){
Time t1(12,140,201);
Time t2(50,130,592);
Time t3;
t3.add(t1,t2);
t3.show();
return 0;
}
