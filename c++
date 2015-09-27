#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    cin>> a >> b >> c >> d ;
    int ans = max_of_four(a, b, c, d);
    cout<<"ans";
    return 0;
}

int max_of_four(int a, int b, int c, int d)
    {
     int res;
     if (a > b && a > c && a > d)
        res = a;
    if (b > a && b > c && b > d)
        res = b;
    if (c > a && c > b && c > d)
        res = c;
    if (d > b && d > c && d > a)
        res = d;
    return res;
}
