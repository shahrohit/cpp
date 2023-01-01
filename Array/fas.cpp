#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max1 = -1, max2 = -1;
  for (int i = 0; i < n; i++) {
    if (a[i] > max1) {
      max2 = max1;
      max1 = a[i];
    } else if (a[i] > max2) {
      max2 = a[i];
    }
  }
  cout << "The second largest number is " << max2 << endl;
  return 0;
}
