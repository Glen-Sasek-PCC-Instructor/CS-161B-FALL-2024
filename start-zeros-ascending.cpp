// Credit Sara Allen
// https://replit.com/@sallenpcc/startZeros#main.cpp

#include <iostream>

using namespace std;

void startZeros(int[], int);
void printArray(const int nums[], int size);

int main() {
    int nums1[] = {2, 0, 0, 1};
    int nums2[] = {1, 0, 0, 2};
    int nums3[] = {0, 1, 2, 0, 3};
    int nums4[] = {1, 0};

    cout << "nums1 before: ";
    printArray(nums1, 4);
    startZeros(nums1, 4);
    cout << "nums1 after:  ";
    printArray(nums1, 4);

    cout << "\nnums2 before: ";
    printArray(nums2, 4);
    startZeros(nums2, 4);
    cout << "nums2 after:  ";
    printArray(nums2, 4);

    cout << "\nnums3 before: ";
    printArray(nums3, 5);
    startZeros(nums3, 5);
    cout << "nums3 after:  ";
    printArray(nums3, 5);

    cout << "\nnums4 before: ";
    printArray(nums4, 2);
    startZeros(nums4, 2);
    cout << "nums4 after:  ";
    printArray(nums4, 2);
}


void startZeros(int n[], int size){
    int temp = 0;
    // loop through entire array
    for (int i = 0; i < size; i++) {
        // when a 0 is found
        if (n[i] == 0) {
             // shift right the contents starting at the cell
             // with the 0, to first cell
             for (int j = i; j > 0; j--) {
                 n[j] = n[j-1];
             }
            // add a 0 to front of array
            n[0] = 0;
        }
    }   
}


void printArray(const int nums[], int size) {
    for (int i = 0; i < size; i++){
        cout << "[" << nums[i] << "] ";
    }
    cout << endl;
}
