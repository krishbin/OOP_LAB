#include <iostream>

using namespace std;

class complex {
private:
  float real;
  float imag;

public:
  complex(float r = 0, float i = 0) {
    real = r;
    imag = i;
  };
  complex(complex &c1) {
    real = c1.real;
    imag = c1.imag;
  }
  void getData() {
    cout << "enter the real and imag part of a complex number" << endl;
    cin >> real >> imag;
  };
  void showData() { cout << real << " + " << imag << "i" << endl; };
  friend complex operator+(complex &c1, complex &c2);
};

complex operator+(complex &c1, complex &c2) {
  complex temp;
  temp.real = c1.real + c2.real;
  temp.imag = c1.imag + c2.imag;
  return temp;
};
int main() {
  complex c1, c2, c3;
  c1.getData();
  c2.getData();
  c3 = c1 + c2;
  c1.showData();
  c2.showData();
  c3.showData();
  return 0;
};
