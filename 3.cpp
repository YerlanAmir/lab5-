#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    queue<int> lst;
    for(int i=0;i<5;i++){
        cin>>n;
        lst.push(n);
    }
    for(int i=0;i<5;i++){
        cout<<lst.front()<<" ";
        lst.pop();
    }
    cout<<endl;
    if(!lst.empty()){
        cout<<"queue not empty";
    }
    else{
        cout<<"queue is empty";
    }
}