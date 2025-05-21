// File: bits/stdc++.h
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <bitset>
#include <utility>
using namespace std;

const int INF = 2e9 + 7;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto& it : v)
    {
        cin>>it;
    }

        for(auto it : v)
    {
        cout<<it;
    }
    return 0;
}