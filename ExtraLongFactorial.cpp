#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
    unsigned long long myFactorial = 1;
    vector<int> myArr;
    int acarreo, val;
    
    myArr.push_back(myFactorial);
    for (int i = 2; i <= n; i++) {
        val = acarreo = 0;
        for (int j = 0; j < myArr.size(); j++) {
            val = myArr[j] * i + acarreo;
            acarreo = val / 10;
            myArr[j] = val % 10;
        }
        while (acarreo) {
            myArr.insert(myArr.end(), acarreo%10);
            acarreo /= 10;
        }
    }
    for (int myIndex = myArr.size() - 1; myIndex >= 0; myIndex--){
        cout << myArr[myIndex];
    }
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
