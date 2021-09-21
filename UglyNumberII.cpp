#include <bits/stdc++.h>
using namespace std;

/* Ugly Number 

1 = 2^0 || 3^0 || 5^0
2 = 2^1 || 3^0 || 5^0
3 = 2^0 || 3^1 || 5^0
.......

MinHeap -- containing our contendars..
                    1       
            /       |      \
        1 * 2     1 * 3     1 * 5
        / |  \     / | \     / | \
          2*3     3*2
so repeating elements therefore we will be keeping map to take care of uniqueness
*/      


int uglyNumber(int & n){
    priority_queue<int, vector<int>, greater<int>> pq;
    map<int, bool> m;
    
    pq.push(1);
    m[1] = true;
    vector<int> primes = {2, 3, 5};
    int x;
    while(n--){
        x = pq.top();
        pq.pop();
        for(int i = 0; i < primes.size(); i++){
            if(m.find(primes[i] * x) == m.end()){
                pq.push(primes[i] * x);
                m[primes[i] * x] = true;
            }
        }
    }

    return x;
}





int main(void){
    int n;
    cin >> n;

    cout << uglyNumber(n) << endl;
}



