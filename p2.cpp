#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string : ";
    getline(cin, s);
    cout << "Enter a character to remove : ";
    char ch;
    cin >> ch;
    string s2= "";
    int l = s.length();
    for (int i = 0;i<l; i++)
    {
        if (s[i] != ch)
        {
            s2 = s2 + s[i];
        }
    }
    cout << "Output : " << s2<<endl;
    return 0;
}
