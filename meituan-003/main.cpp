#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

bool cmp(pii &a, pii &b){
    if(a.first != b.first)
        return a.first > b.first;
    else 
        return a.second < b.second;
}

int main()

{
    int num, ord;
    cin >> num >> ord;

    ord = ord > num ? num : ord;
    
    vector<pii> value;
    value.resize(num);

    for(int i = 0; i < num; ++i){
        int v, w;
        cin >> v >> w;
        value[i] = {v + w * 2, i + 1};
    }
    
    sort(value.begin(), value.end(), cmp);

    vector<int> res;
    res.resize(ord);

    for(int i = 0; i < ord; ++i){
        res[i] = value[i].second;
    }

    sort(res.begin(), res.end());

    for(int i = 0; i < ord; ++i){
        cout << res[i] << " ";
    }

    return 0;
}