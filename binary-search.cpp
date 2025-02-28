// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}
 
// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, x);

    (result == -1)? cout << "Element is not present in array" : cout << "Element is present at index " << result;

    return 0;
}

/* Binary-search implemented in cpp

#include <algorithm>
#include <iostream>
#include <vector>
 
int main()
{
    std::vector<int> haystack{1, 3, 4, 5, 9};
    std::vector<int> needles{1, 2, 3};
 
    for (const auto needle : needles)
    {
        std::cout << "Searching for " << needle << '\n';
        if (std::binary_search(haystack.begin(), haystack.end(), needle))
            std::cout << "Found " << needle << '\n';
        else
            std::cout << "No dice!\n";
    }
}


*/
