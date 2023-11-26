
// pass by reference
// pass by address

#include <bits/stdc++.h>
using namespace std;
// pass by value
// void swap_two(int *x, int *y)
// {
//     // formal parameters
//     int tmp = *x; // x ke derefence korlam mane ki hocche value chole asche
//     *x = *y;
//     *y = tmp;
// }



// void swap_two(int &x, int &y)
// {
//     cout << &x << " " << &y << endl;
//     int tmp = x; 
//     x = y;
//     y = tmp;
// }

// int *fun(int n){
//     int *p = &n;
//     return p;
// }

int main()
{
    int a = 10, b = 40;
    swap_two(a, b);
    cout << &a << " " << &b << endl;
    cout << a << " " << b << endl;
    return 0;
}
