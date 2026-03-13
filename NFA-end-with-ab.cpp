
#include <bits/stdc++.h>
using namespace std;

int main(){

    string in;
    cout<<"Enter:";
    cin>>in;
    int l=in.length();
    if(l>=2){
        if( in[l-2]=='a' && in[l-1]=='b'){
            cout<<"accepted"<<endl;
        }
        else {
            cout<<"Rejected"<<endl;
        }
    }
        else {
            cout<<"Rejected"<<endl;
        }

    return 0;
}
