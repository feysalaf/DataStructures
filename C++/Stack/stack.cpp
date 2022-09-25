#include <iostream>
#include <string>

using namespace std;

//create stack class

class Stack{
  private:
    int top;
    //declare integer array of size 5
    int arr[5];

  public:
    //create a constructor
    Stack (){
      //set top to -1
      top = -1;
      for(int i = 0;i<5;i++){
        //initialize all elements to 0
        arr[i] = 0;
      }
    }

    // METHODS
    //check if stack is empty or not
    bool isEmpty(){
      if(top == -1){
        return true;
      }
      else{
        return false;
      }
    }

    //check if stack is full or not
    bool isFull(){
      if(top == 4){
        return true;
      }
      else{
        return false;
      }

    }

    //push a value on the stack
    void push(int val){
      // Input: the input value to add in the stack
      // check if stack is full, if it is then stop else push value
      if(isFull() == true){
        cout << "Stackoverflow!\n";
      }
      else{
        //increment the top num?
        top++;
        //set value at top of array to val
        arr[top] = val;
      }
    }

    //pop a value on the stack
    int pop(){
      if(isEmpty() == true){
        cout << "Stackunderflow!\n";
        return 0;
      }
      else{
        // top always points to index location of top variable
        int popValue = arr[top];
        arr[top] = 0;
        //decrement top variable value by 1
        top--;
        return popValue;
      }

    }

    //return number of values in the stack
    int count(){
      return(top+1);
    }

    //check value on a specific index
    int peek(int pos){
      if(isEmpty() == true){
        cout << "Stack underflow!";
        return 0;
      }
      else{
        return arr[pos];
      }
    }

    //change position at a specific index
    void change(int pos, int val){
      arr[pos] = val;
      cout << "Value is changed at the location!\n";
    }

    //display all the values in the stack
    void display(){
      for( int i = 4; i >= 0; i--){
        cout << arr[i] << endl;
      }
    }

};

int main(){
  //create stack Object
  Stack s1;
  int option,position,value;

  do{
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
   cout << "1. Push() ";
   cout << "2. Pop() ";
   cout << "3. isEmpty() " ;
   cout << "4. isFull() " ;
   cout << "5. peek() " ;
   cout << "6. count() " ;
   cout << "7. change() " ;
   cout << "8. display() " ;
   cout << "9. Clear Screen " ;

   cin >> option;
   switch (option) {
   case 0:
     break;
   case 1:
     cout << "Enter an item to push in the stack" << endl;
     cin >> value;
     s1.push(value);
     break;
   case 2:
     cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
     break;
   case 3:
     if (s1.isEmpty())
       cout << "Stack is Empty" << endl;
     else
       cout << "Stack is not Empty" << endl;
     break;
   case 4:
     if (s1.isFull())
       cout << "Stack is Full" << endl;
     else
       cout << "Stack is not Full" << endl;
     break;
   case 5:
     cout << "Enter position of item you want to peek: " << endl;
     cin >> position;
     cout << "Peek Function Called - Value at position " << position << " is " << s1.peek(position) << endl;
     break;
   case 6:
     cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
     break;
   case 7:
     cout << "Change Function Called - " << endl;
     cout << "Enter position of item you want to change : ";
     cin >> position;
     cout << endl;
     cout << "Enter value of item you want to change : ";
     cin >> value;
     s1.change(position, value);
     break;
   case 8:
     cout << "Display Function Called - " << endl;
     s1.display();
     break;
   case 9:
     system("cls");
     break;
   default:
     cout << "Enter Proper Option number " << endl;
   }

  }
  while(option != 0);

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
