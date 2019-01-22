#include <algorithm>  
#include <iostream>  
#include <sstream>  
#include <string>  
#include <vector>  
#include <queue>  
#include <set>  
#include <map>  
#include <cstdio>  
#include <cstdlib>  
#include <cctype>  
#include <cmath>  
#include <cstring>
#include <list>  
#include <cassert>
#include <climits>
#include <bitset>
 
using namespace std;
int main(){
    priority_queue <int, vector<int>, greater<int> > pq;
    int n;
    while(cin >> n && n != EOF){
        pq.push(n);
    }
    cout << pq.top() << endl;
    return 0;
}
