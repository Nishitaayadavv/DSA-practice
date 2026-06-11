#include <iostream>
#include <vector>
using namespace std;
vector<int> selectionsort(vector<int> &nums) {
  for (int i = 0; i < nums.size() - 1; i++) {
    int min = nums[i];
    int idx = i;
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[j] < min) {
        min = nums[j];
        idx = j;
      }
    }
    nums[idx] = nums[i];
    nums[i] = min;
  }
  return nums;
}
int main() {
  vector<int> vec;
  cout << "enter the number of elements in the vector: ";
  int size;
  cin >> size;
  cout << "enter the elements in the vector:";
  int element;
  for (int i = 0; i < size; i++) {
    cin >> element;
    vec.push_back(element);
  }
  vector<int> ans = selectionsort(vec);
  for (int j = 0; j < size; j++) {
    cout << ans[j] << " ";
  }
}