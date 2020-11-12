#include <iostream>

class Distance{
	private:
	int feet;
	float inch;
	public:
	Distance(){
		feet = 0;
		inch = 0;
	};
	Distance(int f, float i){
		feet = f;
		inch = i;
	};
	Distance(Distance &d1){
		feet = d1.feet;
		inch = d1.inch;
	};
	Distance(float m){
		feet = int(3.28084 * m);
		inch = (m*3.28084 - feet) * 12;
	};
	void getData(){
		std::cout<<"enter data in feet and inch"<<std::endl;
		std::cin>>feet>>inch;
	};
	void showData(){
		std::cout<<"feet: "<<feet<<"\t"<<"inch: "<<inch<<std::endl;
	};
};
int  main(){
	Distance d1;
	std::cout<<"enter distance in meter"<<std::endl;
	float a;
	std::cin>>a;
	d1 = a;
	d1.showData();
	return 0;
};
