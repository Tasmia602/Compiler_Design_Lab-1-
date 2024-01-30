
#include <iostream>
using namespace std;


int main() {

  int n;

  cout << "Size of Array: " ;
  cin >> n;


  int * v = new int[n];

  cout << "Enter " << n << " numbers: " << endl;

  for (int i = 0; i < n; i++)
    cin >> v[i];

  cout << endl;

  float sum = 0;
  float average = 0;


  for (int i = 0; i < n; i++)
    sum += v[i];
  average = (float)(sum / n);
  cout << "Average = " << average << endl;

  return 0;
}
