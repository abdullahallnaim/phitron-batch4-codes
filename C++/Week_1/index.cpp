#include<bits/stdc++.h>
using namespace std;

void fun2(){
    int n = 30;
    cout << "I am from fun2" << endl;
}

void fun1(){
    int n = 20;
    fun2();
    cout << "I am from fun1" << endl;
}
int main()
{
    int a = 10;
    cout << "I am from main" << endl;
    fun1();
    return 0;
}
