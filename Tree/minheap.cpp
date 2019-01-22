// C++ program to use priority_queue to implement min heap
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main ()
{
	// Creates a min heap
	priority_queue <int, vector<int>, greater<int> > pq;
	pq.push(12);
	pq.push(5);
	pq.push(4);
	pq.push(8);
	pq.push(79);
	pq.push(6);
	pq.push(54);

    cout<<pq.top();

	return 0;
}

