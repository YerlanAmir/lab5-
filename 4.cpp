#include <iostream>
#include <queue>
#include <sstream>
using namespace std;
int main(){
    queue<string> names;
    string n;
    for(int i=0;i<3;i++){
        cin>>n;
        names.push(n);
    }
    while(!names.empty()){
        cout<<"Serving: "<<names.front()<<endl;
        names.pop();
    }

}