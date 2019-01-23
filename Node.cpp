#include <iostream>
#include "Student.h"
#include "Node.h"

using namespace std;

Node::Node(Student* student, Node*  node) {
  this->student = student;
  next = node;
}

Node::~Node() {
 delete student;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

Node* Node::getNext() {
  return next;
}

void Node::setStudent(Student* newstudent) {
  student = newstudent;
}

Student* Node::getStudent() {
  return student;
}


