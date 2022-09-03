#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
  int temp = swapValues.first;

    // Make 'a' equal to 'b'.
    swapValues.first = swapValues.second;

    // Make 'b' equal to 'temp'.
    swapValues.second = temp;

    return swapValues;
}