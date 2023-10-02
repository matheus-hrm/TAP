using namespace std;

#include <iostream>
#include <string>

int main (){
    
  string s;
  string t;
  cin >> s >> t;
  if (s.find(t) != std::string::npos){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}