//https://codeforces.com/contest/4/problem/A


#include <iostream> 
using namespace std;
int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES" << endl;
    }
    else    {
        cout << "NO" << endl;
    }
    return 0;
}
