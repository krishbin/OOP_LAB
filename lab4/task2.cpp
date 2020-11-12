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

	operator float(){
		float meter;
		meter = (feet + (inch / 12))/3.28084;
		return meter;
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
	d1.getData();
	float a = d1;
	std::cout<<"meter: "<<a;
	return 0;
};
