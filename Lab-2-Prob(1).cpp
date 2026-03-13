#include <bits/stdc++.h>

using namespace std;

int main(){

string l;
cout<<"Enter a line/comment:";
getline(cin, l);


if(l.size()>=2 && l[0]=='/' && l[1]=='/'){
    cout<<"It's a Single line comment"<<endl;
}
else if(l.size()>=4 && l[0]=='/' && l[1]=='*' && l[l.size()-2]=='*' && l[l.size()-1]=='/'){
    cout<<"Multi line comment"<<endl;
}
else {
    cout<<"It's not a comment"<<endl;
}

return 0;
}
