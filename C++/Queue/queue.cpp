#include <iostream>
#include <string>

using namespace std;

//create stack class

class Q{
  private:
    //initialize array
    int array[4];
    int F;
    int R;

  public:
    //create a constructor

    // METHODS
    void isFull(){
      if(R == sizeof(arr)-1){
        return true;
      }
      else{
        return false;
      }
    }

    void isEmpty(){
      if(F==R==-1){
        return true;
      }
      else{
        return false;
      }
    }

    void enq(int value){
      //check if full -> overflow
      //add elem
    }

    int deq(){
      //check if empty -> underflow
      //add elem
      return 0;
    }

    int count(){
      return 0;
    }

    void display(){
      cout << sizeof(array)/sizeof(array[0]) << endl;
      cout << "Array entries are: " << endl;
      cout << "[ ";
      for(int i = 0; i<sizeof(array)/sizeof(array[0]);i++){
        cout << array[i] << " ";
      }
      cout << "]" << endl;
    }


};

int main(){
  //create Object
  Q* myqueue;
  myqueue = new Q();
  //display method
  myqueue->display();

  //
  // do{
  //  cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
  //  cout << "1. Push() ";
  //  cout << "2. Pop() ";
  //  cout << "3. isEmpty() " ;
  //  cout << "4. isFull() " ;
  //  cout << "5. peek() " ;
  //  cout << "6. count() " ;
  //  cout << "7. change() " ;
  //  cout << "8. display() " ;
  //  cout << "9. Clear Screen " ;
  //
  //  cin >> option;
  //  switch (option) {
  //  case 0:
  //    break;
  //  case 1:
  //    cout << "Enter an item to push in the stack" << endl;
  //    cin >> value;
  //    s1.push(value);
  //    break;
  //  case 2:
  //    cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
  //    break;
  //  case 3:
  //    if (s1.isEmpty())
  //      cout << "Stack is Empty" << endl;
  //    else
  //      cout << "Stack is not Empty" << endl;
  //    break;
  //  case 4:
  //    if (s1.isFull())
  //      cout << "Stack is Full" << endl;
  //    else
  //      cout << "Stack is not Full" << endl;
  //    break;
  //  case 5:
  //    cout << "Enter position of item you want to peek: " << endl;
  //    cin >> position;
  //    cout << "Peek Function Called - Value at position " << position << " is " << s1.peek(position) << endl;
  //    break;
  //  case 6:
  //    cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
  //    break;
  //  case 7:
  //    cout << "Change Function Called - " << endl;
  //    cout << "Enter position of item you want to change : ";
  //    cin >> position;
  //    cout << endl;
  //    cout << "Enter value of item you want to change : ";
  //    cin >> value;
  //    s1.change(position, value);
  //    break;
  //  case 8:
  //    cout << "Display Function Called - " << endl;
  //    s1.display();
  //    break;
  //  case 9:
  //    system("cls");
  //    break;
  //  default:
  //    cout << "Enter Proper Option number " << endl;
  //  }
  //
  // }
  // while(option != 0);

  return 0;
}





































//
//
//
//
//
// class Myclass{
//
//   private:
//     int number;
//     string name;
//
//   public:
//     void print_class_method(){
//       cout << "Class method initiatiated!\n";
//     }
//
//
// };
//
// int main(){
//   Myclass Object;
//   Object.print_class_method();
//   cout << "Hello World\n";
//   return 0;
// }
