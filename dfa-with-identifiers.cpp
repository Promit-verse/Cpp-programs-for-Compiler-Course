

#include <bits/stdc++.h>
using namespace std;

int main(){

    string in;
    cout<<"Enter:";
    cin>>in;

        if(in[0] == '_' || (in[0]>='a' && in[0]<= 'z' )||(in[0]>='A' && in[0]<='Z')) {
            cout<<"Valid Identifier";
        }
        else {
            cout<<"Invalid Identifer";
        }


    return 0;
}
