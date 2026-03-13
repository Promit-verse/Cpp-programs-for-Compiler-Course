#include <bits/stdc++.h>

using namespace std;

int main(){
string s;
cout<<"Enter a string:";
cin>>s;

int l=s.size();
int j=0;
 bool val=true;

 if(s=="a"){
        cout<<"string matches with a"<<endl;
 }
 else if(s=="abb"){
    cout<<"string matches with abb"<<endl;
 }

 else {
    while(j<l && s[j]=='a'){
        j++;
    }
    if(j==l){
            val=false;
    }
    else{
        for(int i=j; i<l; i++){
            if(s[i]!='b') {
                val=false;
                break;
            }
        }
    }
    if(val){
        cout<<"String matches with a*b+"<<endl;
    }
    else{
        cout<<"String does not match"<<endl;
    }
 }

return 0;
}
