#include <iostream>

using namespace std;

class Matrix{
  private:
    double mat[3][3];
  public:
    Matrix(){
      for(int row = 0; row<3;++row)
        for(int col =0;col<3;++col)
          mat[row][col]=0;
    };
    Matrix(Matrix &mA){
      for(int row = 0; row<3;++row)
        for(int col =0;col<3;++col)
          mat[row][col]=mA.mat[row][col];
    };
    void getData(){
      cout<<"Enter the values of 3*3 matrix"<<endl;
      for(int row = 0; row<3;++row)
        for(int col =0;col<3;++col)
          cin>>mat[row][col];
    };
    void showData(){
      for(int row = 0; row<3;++row){
        for(int col =0;col<3;++col)
          cout<<mat[row][col]<<"\t";
        cout<<endl;
      };
      cout<<endl;
    };
    Matrix operator*(Matrix &mA){
      Matrix temp;
      int sum;
      for ( int rowA = 0; rowA< 3;rowA++) {
        for ( int colB = 0; colB< 3;colB++) {
          sum = 0;
          for ( int rowB = 0; rowB < 3; rowB++) {
            sum += mat[rowA][rowB] * mA.mat[rowB][colB];
          }
          temp.mat[rowA][colB] = sum;
        }
      }
      return temp;
    };
};

int main(){
  Matrix mA,mB,mC;
  mA.getData();
  mB.getData();
  mC = mA * mB;
  cout<<endl;
  cout<<"The value of first matrix is:"<<endl;
  mA.showData();
  cout<<"The value of first matrix is:"<<endl;
  mB.showData();
  cout<<"The mutiplication of the two matrix is:"<<endl;
  mC.showData();
  return 0;
};
