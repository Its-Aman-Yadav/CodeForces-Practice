//https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, count=0;
    cin >> n;
    while (n--)
    {
        cin >> a>> b >> c;
        if (a+ b + c >= 2){
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
