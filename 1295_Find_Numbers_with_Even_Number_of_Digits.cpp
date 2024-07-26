#include <iostream>
#include <vector>

using namespace std;

int countNumOfDigits(int n)
{
    int count = 0;

    while(n != 0)

    // n = 1
    {
        n = n/10;
        count++;
    }

    return count;
}

int findNumbers(vector<int>& a)
{
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(countNumOfDigits(a[i]) % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[] = {555, 901, 482, 1771};
    vector<int> a(arr, arr + sizeof(arr) / sizeof(int));

    cout << findNumbers(a) << endl;
    
    return 0;
}