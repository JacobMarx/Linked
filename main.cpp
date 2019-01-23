#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

int main() {
  Student* s1 = new Student();
  Student* s2 = new Student();
  s1->id = 1;
  s2->id = 2;
  
  Node* n2 = new Node(s2);
  Node* n1 = new Node(s1, n2);
  if (n2->getStudent() == s2) {
    cout << "wow turn this in" << endl;
  }
  if (n1->getNext() == n2) {
    cout << "this works" << endl;
  }
  
  return 0;
}
