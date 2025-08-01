#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void shuffler(int mini, int maxi)
{
    if( mini == maxi ) {
        ans.push_back( mini );
        return;
    }
    else if( maxi<mini ) return;

    int r = mini + ( rand()% (maxi-mini+1) );
    ans.push_back(r);
    shuffler( mini, r-1 );
    shuffler( r+1, maxi );
}

int main()
{
    srand(time(0));

    shuffler(1,5);
    for( int i=0; i<ans.size(); i++ ) {
        cout<< ans[i] << "  ";
    }
}

//int main() {
//    const int rangeStart = 1;
//    const int rangeEnd = 100000;
//    const int arraySize = 100000;
//
//    if (arraySize > (rangeEnd - rangeStart + 1)) {
//        cout << "Error: Not enough unique numbers in the range!" << endl;
//        return 1;
//    }
//
//    int arr[arraySize];
//    int count = 0;
//
//    srand(time(0));  // Seed the random number generator
//
//    while (count < arraySize) {
//        int num = rand() % (rangeEnd - rangeStart + 1) + rangeStart;
//
//        // Check if the number is already in the array
//        bool exists = false;
//        for (int i = 0; i < count; ++i) {
//            if (arr[i] == num) {
//                exists = true;
//                break;
//            }
//        }
//
//        if (!exists) {
//            arr[count] = num;
//            count++;
//        }
//    }
//
//    // Print the array
//    cout << "Unique random numbers: ";
//    for (int i = 0; i < arraySize; ++i) {
//        cout << arr[i] << "  ";
//    }
//    cout << endl;
//
//    return 0;
//}
