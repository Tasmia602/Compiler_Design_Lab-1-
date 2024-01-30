#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
 vector<char> first_name_vector, last_name_vector, full_name_vector;

 cout << "Enter your first name: ";
 for (char c; cin.get(c) && c != '\n';) {
   first_name_vector.push_back(c);
 }

 cout << "Enter your last name: ";
 for (char c; cin.get(c) && c != '\n';) {
   last_name_vector.push_back(c);
 }

 full_name_vector = first_name_vector;
 full_name_vector.push_back(' ');
 full_name_vector.insert(full_name_vector.end(), last_name_vector.begin(), last_name_vector.end());

 string full_name(full_name_vector.begin(), full_name_vector.end());
 cout << "Your full name is: " << full_name << endl;

 return 0;
}
