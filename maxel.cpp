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

unordered_map<int,int> fn(vector<int>& arr , int n ){
    unordered_map<int, int> mp;
    int maxcnt = 0;
    int element = 0;
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if(mp[arr[i]] > maxcnt)
        {
            maxcnt = mp[arr[i]];
            element = arr[i];
        }
    }
    unordered_map<int, int> ele;
    ele[element] = maxcnt;
    return ele;
}

int main() {
    vector<int> arr = {4, 1, 2, 2, 3, 1, 1, 4, 4,4,4};
    unordered_map <int, int> result = fn(arr, arr.size());
    cout << "Most frequent element: " << result.begin()->first << endl;
    cout << "Number of times: " << result.begin()->second << endl;
    return 0;
}
