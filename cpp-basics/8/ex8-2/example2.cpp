#include <iostream>
using namespace std;

class A {
 public:
  A() {
    x = 0;
    cout << "A  Default Constructor:" << x << endl;
  }
  A(int vx) : x(vx) { cout << "A Constructor:" << x << endl; }
  virtual void display() { cout << "A:" << x << endl; }
  ~A() { cout << "A Destructor:" << x << endl; }

 protected:
  int x;
};

class B : public A {
 public:
  B(int vy) : y(vy) { cout << "B Constructor:" << x << "," << y << endl; }
  B() : A(5), y(6) { cout << "B default:" << x << "," << y << endl; }
  void display() { cout << "B:" << x << "," << y << endl; }
  virtual ~B() { cout << "B Destructor:" << x << "," << y << endl; }

 protected:
  int y;
};

class C : public B {
 public:
  C(int vy) : B(vy) { cout << "C Constructor:" << x << "," << y << endl; }
  C() { cout << "B default:" << x << "," << y << endl; }
  void display() { cout << "C:" << x << "," << y << endl; }
  ~C() { cout << "C Destructor:" << x << "," << y << endl; }
};
// main1
// int main() {
//   A aobj(11);
//   B bobj(22);
//   C cobj;
//   return 0;
// }

// main2
// int main() {
//   A *pa;
//   pa = new A(11);
//   pa->display();
//   delete pa;
//   pa = new C(33);
//   pa->display();
//   delete pa;
//   return 0;
// }

// main3
int main() {
  B *pb;
  pb = new B(11);
  pb->display();
  delete pb;
  pb = new C(33);
  pb->display();
  delete pb;
  return 0;
}
