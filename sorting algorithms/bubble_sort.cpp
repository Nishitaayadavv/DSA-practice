#include <iostream>
#include <vector>
using namespace std;
vector<int> bubblesort(vector<int> &nums) {
  for (int i = 0; i < nums.size() - 1; i++) {
    bool swapped = false;
    for (int j = 0; j < nums.size() - 1 - i; j++) {
      int temp = nums[j];
      if (nums[j] > nums[j + 1]) {
        nums[j + 1] = temp;
        swapped = true;
      }
    }
    if (swapped == false) {
      return nums;
    }
  }
  return nums;
}
int main() {
  vector<int> vec;
  int size;
  int element;
  cout << "enter the size of the vec:";
  cin >> size;
  cout << "enter the elements: ";
  for (int i = 0; i < size; i++) {
    cin >> element;
    vec.push_back(element);
  }
  vector<int> ans = bubblesort(vec);
  for (int j = 0; j < size; j++) {
    cout << ans[j] << " ";
  }
}