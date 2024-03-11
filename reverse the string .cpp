#include<iostream>
#include<string>
using namespace std;

string recursion(string& ch,int index)
{
if(index==ch.length())
{
    return "";
}
 string reversed = recursion(ch, index + 1);
  return reversed + ch[index];
}
int main()
{
    string ch;
    cin>>ch;
    string reversed=recursion(ch,0);
    cout<<"reversed string="<<reversed<<endl;
}
