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

pair<int,int> fn(vector<int>& arr , int n ){
    unordered_map<int, int> freq;
    for(auto it : arr)
    {
        freq[it] ++;
    }
    int maxfreq = INT_MIN; int minfreq = INT_MAX;

    for(auto it : freq){
        if(it.second > 0){
            maxfreq = max(maxfreq, it.second);
            minfreq = min(minfreq, it.second);
        }
    }
    return pair<int,int>(maxfreq, minfreq);
}

int main() {
    vector<int> arr = {4, 1, 2, 2, 3, 1, 1, 4, 4,4,4};
    pair <int, int> result = fn(arr, arr.size());
    cout << "Max freq: " << result.first << endl;
    cout << "Min freq: " << result.second << endl;
    return 0;
}
