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
   // Start and end of array n[size-1]
   for(int i = size-1; i >= 0; i--){
      int j = i;
      // Skip zeros
      while(n[j] == 0 && j >= 0){
         j--;
      }
      // Found at least 1 zero followed by non-zero at n[j]
      if(j < i && j >= 0) {
         n[i] = n[j]; // Move non-zero at n[j] to n[i]
         n[j] = 0;
      }
      i = j;
   }
}


void printArray(const int nums[], int size) {
    for (int i = 0; i < size; i++){
        cout << "[" << nums[i] << "] ";
    }
    cout << endl;
}
