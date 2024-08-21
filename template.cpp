
#include<iostream>
#include<string>
using namespace std;

template <typename T>
void swap(T &x,T &y){
    T t = x;
    x = y;
    y = x;
}

int main(){
    string t1 = "hello", t2 = "world";
    cout<<"before swapping:"<<endl;
    cout<<"1st string :"<<t1<<endl;
    cout<<"2nd string :"<<t2<<endl;
    swap(t1,t2);
    cout<<"after swapping:"<<endl;
    cout<<"1st string :"<<t1<<endl;
    cout<<"2nd string :"<<t2<<endl;

}
