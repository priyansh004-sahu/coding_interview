#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // VERY IMPORTANT (clears newline after n)

    vector<pair<int,int>> v;

    for(int i = 0; i < n; i++) {
        string s;
        getline(cin, s);   // take full line

        stringstream ss(s);

        string name, city, temp;
        int time, amount;

        // parsing CSV: name,time,amount,city
        getline(ss, name, ',');
        getline(ss, temp, ','); 
        time = stoi(temp);

        getline(ss, temp, ','); 
        amount = stoi(temp);

        getline(ss, city, ',');

        // store time & amount as pair
        v.push_back({time, amount});

        // (optional debug)
        // cout << name << " " << time << " " << amount << " " << city << endl;
    }

    // sorting
    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
        if(a.first == b.first)
            return a.second < b.second;
        return a.first < b.first;
    });

    // output
    for(auto p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}