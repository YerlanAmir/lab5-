#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    stack<char> word;
    string w;
    string s="";
    getline(cin,w);
    for(char c : w){
        word.push(c);
    }
    while(!word.empty()){
        s+=word.top();
        word.pop();
    }
    cout<<s;
    
}