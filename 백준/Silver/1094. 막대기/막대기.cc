#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int x, cnt = 0;
    vector<int> xc;
    cin >> x;
    while (x != 0)
    {
        xc.push_back(x % 2);
        x /= 2;
    }
    for (int i = 0; i < xc.size(); i++)
    {
        if (xc[i] == 1)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}