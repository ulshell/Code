#include <bits/stdc++.h>
using namespace std;



struct comp{
    bool operator() (pair<int, int> & x, pair<int, int> & y){
        int distanceOfXFromOrigin = x.first * x.first + x.second * x.second;
        int distanceOfYFromOrigin = y.first * y.first + y.second * y.second;
        return distanceOfXFromOrigin > distanceOfYFromOrigin;
    }  
};




vector<pair<int, int>> getKClosestPoints(vector<pair<int, int>> & points, int & k){
    priority_queue <pair<int, int>, vector<pair<int, int>>, comp> pq(points.begin(), points.end());
    vector<pair<int, int>> ans;

    while(k--){
        ans.push_back(pq.top());
        //cout << pq.top().first << " " << pq.top().second << "\n";
        pq.pop();
    } 
    return ans;  
}

void printKClosestPoints(vector<pair<int, int>>& ans){
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << "\n";
    }
}


int main(void){
    int n;
    cin >> n;

    vector<pair<int, int>> points(n);
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        points[i] = {x, y};
    }
    int k;
    cin >> k;
    vector<pair<int, int>> ans = getKClosestPoints(points, k);

    printKClosestPoints(ans);
}