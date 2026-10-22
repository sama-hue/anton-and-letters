#include <iostream>
#include<set>
#include<string>
using namespace std;

int main()
{

    string s;
    getline(cin,s);
    set<char>d(s.begin(),s.end());

    if(d.size()==2){
        cout<<"0";
    }
    else if(d.size()==3){
     cout<<"1";
    }
    else if(d.size()==4){
     cout<<"1";
    }
   else{
    cout<<d.size()-4;
    }

    return 0;
}
