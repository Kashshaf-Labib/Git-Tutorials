/*“So, be patient. Surely Allah’s promise is true, and let not the disbelievers shake your firmness” (Quran, 30:60)*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    int count = 0;
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        char temp;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    cout << s << endl;

    return 0;
}