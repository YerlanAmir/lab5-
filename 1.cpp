#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    stack<int> numb;
    for(int i=0;i<5;i++){
        cin>>n;
        numb.push(n);
    }
    for(int i=0;i<5;i++){
        cout<<numb.top()<<" ";
        numb.pop();
    }

}