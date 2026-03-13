
#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cout<<"Enter an Identifier :";
    getline(cin, s);
    int val=1;

    if(!(s[0]=='_' || (s[0]>='a' && s[0]<='z') || (s[0]>= 'A' && s[0]<= 'Z'))){
        val=0;
    }
    else {
        for(int i=1; i<s.size(); i++){
            if(!(isalnum(s[i]) || s[i]=='_')){
                val=0;
                break;
            }
        }
    }

    if(val){
        cout<<"Valid identifier"<<endl;
    }
    else {
        cout<<"Invalid identifier"<<endl;
    }
return 0;
}
