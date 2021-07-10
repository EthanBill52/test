

#include"swap.h"
#include<iostream>
using namespace std;
int main(){
    int val1=10;
    int val2=20;
    cout<<"before:"<<endl;
    cout<<"val1="<<val1<<",val2="<<val2<<endl;
    cout<<"after:"<<endl;
    swap(val1,val2);
    int tmp = 0;
    cin>>tmp;
    cout<<tmp<<endl;
    cout<<"val1="<<val1<<",val2="<<val2<<endl;
    //system("pause");
    return 0;
    // g++ -g -o
}