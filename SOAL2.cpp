#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int uang[] = {1000, 5000, 2000, 20000, 100000, 50000};
    int n = 6; 
    for (int i = 0; i < n; i++) {
        cout << uang[i] << endl;
    }
    return 0;
}