#include<iostream>
using namespace std;
void check(string s)
{
    int cnt=0,b=0,i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]!='a' && s[i]!='b')
        {
            b++;
            break;
        }
        if(s[i]=='b' && s[i+1]=='a')
        {
            cnt++;
            break;
        }
    }
    if(b>0)
    {
        cout<<"Not accepted";
    }
    else if(cnt>0)
    {
        cout<<"Not accepted";

    }
    else
    {
        cout<<"Accepted";
    }
}
int main()
{
    string shamim;
    cin>>shamim;
    check(shamim);
}
