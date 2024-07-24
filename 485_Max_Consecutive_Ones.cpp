#include <iostream>
#include <vector>
using namespace std;

    int findMaxConsecutiveOnes(vector<int>& a) {
        int max = 0;
        int count = 0;

        for (int i = 0; i < a.size(); i++){
            if(a[i] == 0){
                count = 0;
            }else{
                count++;
                max = ::max(max, count);
            }
        }
        return max;
    }


int main(){
    int arr[] = {0, 1, 1, 0, 0, 0};
    vector<int> a(arr, arr + (sizeof(arr)/sizeof(int)));

    cout << findMaxConsecutiveOnes(a) << endl;
    return 0;
}
