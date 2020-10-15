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
    void getData(){
      cout<<"enter the real and imag part of a complex number"<<endl;
      cin>>real>>imag;
    };
    void showData(){
      cout<<real<<" + "<<imag<<"i"<<endl;
    };
    friend void operator++(complex &c1);
    friend void operator++(complex &c1,int);
};

void operator++(complex &c1){
  c1.real += 1;
};
void operator++(complex &c1,int){
  c1.imag += 1;
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

