#include <iostream>

using namespace std;

class Myclass{

  private:
    int number;
    string name;

  public:
    void print_class_method(){
      cout << "Class method initiatiated!\n";
    }


};

int main(){
  Myclass Object;
  Object.print_class_method();
  cout << "Hello World\n";
  return 0;
}
