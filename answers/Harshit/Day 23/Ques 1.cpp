#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    stack<char> t;
    for(int i = 0;i < s.length();i++){
        if(s[i] != ' '){
            t.push(s[i]);
        }
        else{
            while(!t.empty()){
                cout << t.top();
                t.pop();
            }
            cout << " ";
        }
    }
    return 0;
}
