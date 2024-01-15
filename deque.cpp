
#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
    d.push_back(10);
    d.push_front(12);
    d.push_back(5);
    d.push_front(7);
    d.push_back(4);

    for(int i:d){
        cout<<i<<endl;
    }

    cout<<" before erase :" <<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);

    cout<<" after erase :" <<d.size()<<endl;

    

    for(int i:d){
        cout<<i<<endl;
    }

    
}