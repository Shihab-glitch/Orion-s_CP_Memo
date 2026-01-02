/*
 * Binary Search Implementation
 * 
 * Binary search is an efficient algorithm for finding a target value 
 * within a sorted array by repeatedly dividing the search interval in half.
 * 
 * Time Complexity: O(log n)
 * Space Complexity: O(1)
 */

// #include <bits/stdc++.h> // For all libraries

#include <iostream>
#include <vector>
using namespace std;

// Iterative Binary Search
int binarySearch(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;  // Target found
        }
        else if (arr[mid] < target) {
            left = mid + 1;  // Search in right half
        }
        else {
            right = mid - 1;  // Search in left half
        }
    }
    
    return -1;  // Target not found
}

// Recursive Binary Search
int binarySearchRecursive(vector<int>& arr, int target, int left, int right) {
    if (left > right) {
        return -1;
    }
    
    int mid = left + (right - left) / 2; // Overflow Handling
    
    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] < target) {
        return binarySearchRecursive(arr, target, mid + 1, right);
    }
    else {
        return binarySearchRecursive(arr, target, left, mid - 1);
    }
}

int main() {
    
    int n, target, result; cin >> n;

    vector<int> arr(n);

    for (int i=0; i<n; ++i) cin >> arr[i];

    cin >> target;
    
    result = binarySearch(arr, target);
    
    (result != -1) ? cout << "Element found at index: " << result << '\n' : cout << "Element not found" << '\n';

    return 0;
}
