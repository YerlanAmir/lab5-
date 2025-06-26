#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> numb;
    int a,b,c;
    cout<<"Push front: ";
    cin>>a;
    cout<<endl;
    cout<<"Push back: ";
    cin>>b;
    cout<<endl;
    cout<<"Push front: ";
    cin>>c;
    cout<<endl;
    numb.push_front(a);
    numb.push_back(b);
    numb.push_front(c);
    cout<<"Deque contains: ";
    for(int c: numb){
        cout<<c<<" ";
    }
    cout<<endl;
    cout<<"Pop back: "<<numb.back()<<endl;
    cout<<"Pop front: "<<numb.front()<<endl;
    numb.pop_back();
    numb.pop_front();
    cout<<"Remaining: "<<numb.front();
}