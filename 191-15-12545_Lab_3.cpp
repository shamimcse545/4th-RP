#include<iostream>
using namespace std;
void check(string s)
{

    if(s=="if" || s =="auto" || s=="break" || s=="case" || s=="char" || s=="const" || s=="continue"|| s=="default" || s=="do" || s=="double" || s=="else" || s=="enum" || s=="extern" || s=="float" || s=="for" || s=="goto"
    || s=="int" || s=="long" || s=="register" || s=="return" || s=="short" || s=="signed" || s=="sizeof" || s=="static"
    || s=="struct" || s=="switch" || s=="typedef" || s=="union" || s=="unsigned" || s=="void" || s=="volatile" || s=="while")
    {
        cout<<"Identifier Invalid";
        return;
    }

    else if((s[0]>=48 && s[0]<=57) || (s[0]>=33 && s[0]<=47))
    {
        cout<<"Identifier Invalid";
        return;
    }
    else{
        cout<<"Valid Identifier";
        return;
    }
}
int main()
{
    string s;
    cin>>s;
    check(s);
}
