#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v ;

    vector<int> a(5,1);
    
    for(int i:a){
        cout<<i<<endl;
    }

    cout<<"capacity ->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity ->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity ->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity ->"<<v.capacity()<<endl;

    

    v.size();
    cout<<"size ->"<<v.size()<<endl;

    v.pop_back();
    cout<<"after_pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }


}