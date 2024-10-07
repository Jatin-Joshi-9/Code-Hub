#include <bits/stdc++.h>
using namespace std;

int sumOfTopThreeScores(const vector<int>& v, int k) {
    int n = v.size();
    
    // Initialize the sum of the first window
    int sum = 0;
    for (int i = 0; i < k; i++) sum += v[i];
    
    // Initialize a max heap to store the top three sums
    priority_queue<int> maxHeap;
    maxHeap.push(sum);
    
    // Sliding window to calculate the sum of each subarray of size k
    for (int i = k; i < n; i++) {
        sum += v[i] - v[i - k];
        maxHeap.push(sum);
    }
    
    // Extract the top three sums
    vector<int> topThreeSums;
    for (int i = 0; i < 3 && !maxHeap.empty(); i++) {
        topThreeSums.push_back(maxHeap.top());
        maxHeap.pop();
    }
    
    // Return the sum of the top three sums
    return accumulate(topThreeSums.begin(), topThreeSums.end(), 0);
}

int main() {
    int n;
    // Take input for the number of elements
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    int k;
    // Take input for the size of the sliding window
    cin >> k;
    
    // Call the function and print the result
    int result = sumOfTopThreeScores(v, k);
    cout << result << endl;
    
    return 0;
}
