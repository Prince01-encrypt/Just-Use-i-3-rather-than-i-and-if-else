#include <iostream>
#include <cmath>
#include <algorithm>
#define ll long long
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int size = 3 * n;
    char* arr = new char[size];
    int count = 0;
    // int threes = 0;

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i < size; i+=3) {
        if(arr[i] == '+') {
            count++;
        }
        else {
            count--;
        }
    }

    cout << count;
    return 0;
}
