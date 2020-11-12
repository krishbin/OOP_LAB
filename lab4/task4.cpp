#include <cmath>
#include <iostream>
#include <math.h>

class cartesian{
	private:
		float x,y;
	public:
		cartesian(){
			x=0;
			y=0;
		};

		cartesian(float x,float y){
			this->x = x;
			this->y = y;
		};

		cartesian(cartesian& c1){
			this->x = c1.x;
			this->y = c1.y;
		};

		float getx(){
			return x;
		};

		float gety(){
			return y;
		};

		void getData(){
			std::cout<<"enter coordinate is cartesian system"<<std::endl;
			std::cin>>x>>y;
		};
		void showData(){
			std::cout<<"x: "<<x<<"\ty: "<<y<<std::endl;
		};
};

class polar{
	private:
		float r,thita;
	public:
		polar(){
			r=0;
			thita=0;
		};

		polar(float r,float thita){
			this->r = r;
			this->thita = thita;
		};

		polar(const polar& p1){
			r = p1.r;
			thita = p1.thita;
		};

		polar(cartesian& c1){
			r = sqrt(pow(c1.getx(),2) + pow(c1.gety(),2));
			thita = atanf(c1.gety() / c1.getx());
		};

		void getData(){
			std::cout<<"enter coordinate is polar system"<<std::endl;
			std::cin>>r>>thita;
		};
		void showData(){
			std::cout<<"r: "<<r<<"\tthita: "<<thita<<std::endl;
		};
};

int main(){
	polar p1;
	cartesian c1;
	c1.getData();
	p1 = c1;
	c1.showData();
	p1.showData();
	return 0;
};

