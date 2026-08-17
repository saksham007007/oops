#include <iostream>
using namespace std;

class SavingsAccount{
static float annualInterestRate;
float savingsBalance;

public:
SavingsAccount(float savingsBalance){
this->savingsBalance = savingsBalance;
}

float calculateMonthlyInterest(){
float interest;
interest = (savingsBalance *annualInterestRate )/12;
savingsBalance = savingsBalance+interest;
return savingsBalance;
}

static void modifyInterestRate(float per){
annualInterestRate=per;
}
};

float SavingsAccount::annualInterestRate = 0.0;


int main(){
SavingsAccount saver1(2000);
SavingsAccount saver2(3000);
saver1.modifyInterestRate(0.04);
cout<<"Balance of 1 after 4 percent interest is : "<<saver1.calculateMonthlyInterest()<<endl;
cout<<"Balance of 2 after 4 percent interest is : "<<saver2.calculateMonthlyInterest()<<endl;
saver1.modifyInterestRate(0.05);
cout<<"Balance of 1 after 5 percent interest is : "<<saver1.calculateMonthlyInterest()<<endl;
cout<<"Balance of 2 after 5 percent interest is : "<<saver2.calculateMonthlyInterest()<<endl;

return 0;
}
