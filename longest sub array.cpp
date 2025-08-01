#include <iostream>
using namespace std;

int main()
{
    int i=0, k=3, arr[] = {1,2,3,1,1,1,1,4,2,3}, sizeOfArr=10, first = -1, last = -1;

    while( i<sizeOfArr )
    {
        int j=i+1, sum=arr[i];

        while( sum<k && sum!=k )
        {
            sum += arr[j];
            j++;
        }
        j--;

        if( sum == k )
        {
            int noOfElements = (j-i) + 1;
            int currentMaxNumberOfElements = (last-first)+1;

            if( noOfElements > currentMaxNumberOfElements )
            {
                first = i;
                last = j;
            }
        }

        i++;
    }

    cout<< first << "  " << last;
}
