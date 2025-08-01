#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector< pair< pair<int, int>, int > >& arr,  pair< pair<int, int>, int >  temp_pair)
{
    int low = 0, high = arr.size()-1;

    while ( low <= high ) {
        int mid = low + (high - low) / 2;

        // Check if temp_pair ka required data is present at mid
        if (arr[mid].first == temp_pair)
            return arr[mid];

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

pair<int, int> solution( vector<int>& arr, int k )
{
    vector< pair< pair<int, int>, int > > looking_for_vector;
    for(int i=0; i<arr.size(); i++)
    {
        int looking_for = k-arr[i];


        if()

        // temp-pair mein data daaling below and then pushing in the vector -->
        pair< pair<int, int>, int >  temp_pair;
        if( looking_for < arr[i] )
        {
            temp_pair.first.first = looking_for;
            temp_pair.first.second = arr[i];        }
        else
        {
            temp_pair.first.first = arr[i];
            temp_pair.first.second = looking_for;
        }
        temp_pair.second = i;

        looking_for_vector.push_back( temp_pair );
    }

    pair<int, int> temp(1,2);

    return temp;
}


int main()
{
    vector<int> arr = {2,6,5,8,11};
    int k=14;

    solution(arr, k);

    return 0;
}
