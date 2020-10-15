#include <iostream>

using namespace std;

class complex{
  private:
    float real;
    float imag;
  public:
    complex(float r=0,float i=0){
      real = r;
      imag = i;
    };
    complex(complex &c1){
      real = c1.real;
      imag = c1.imag;
    }
    void operator++(){
      real += 1;
    };
    void operator++(int){
      imag += 1;
    };
    void getData(){
      cout<<"enter the real and imag part of a complex number"<<endl;
      cin>>real>>imag;
    };
    void showData(){
      cout<<real<<" + "<<imag<<"i"<<endl;
    };
};

int main(){
  complex c1;
  c1.getData();
  ++c1;
  c1.showData();
  c1++;
  c1.showData();
  return 0;
};
