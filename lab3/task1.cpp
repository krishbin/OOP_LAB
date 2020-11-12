#include <iostream>

using namespace std;

class complex{
  private:
    float real;
    float imag;
  public:
    complex operator++(){
      ++real;
      return *this;
    };
    complex operator++(int){
      complex temp = *this;
      ++(*this).imag;
      return temp;
    };
    void getData(){
      cout<<"enter the real and imag part of a complex number"<<endl;
      cin>>real>>imag;
    };
    void showData(){
      cout<<real<<" + "<<imag<<"i"<<endl;
    };
    complex(float r=0,float i=0){
      real = r;
      imag = i;
    };
    complex(const complex &c1){
      this->real = c1.real;
      this->imag = c1.imag;
    };
};

int main(){
  complex c1,c2;
  c1.getData();
  c1.showData();
  c2 = c1++;
  c2.showData();
  c1.showData();
  return 0;
};
