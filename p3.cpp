#include<iostream>
#include<string>
using namespace std;

int main()
{
string s;
cout<<"Enter a string : ";
getline(cin,s);
int c;
int l = s.length();
for(int i=0;i<l;i++)
{
c=0;

for(int j=0;j<l;j++)
{
if(s[i]==s[j])
{
c++;
}
}

if(c==1)
cout<<s[i]<<" ";
}
cout<<endl;
return 0;
}
