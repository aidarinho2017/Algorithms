#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  sort(array.begin(), array.end());
  int start = 0;
  int end = array.size()-1;
  while(end>start){
    int cur = array[start] + array[end];
    if(cur==targetSum){
      return {array[start], array[end]};
    }
    else if (cur < targetSum){
      start++;
    }
    else{
      end--;
}
  }
  return {};
}
