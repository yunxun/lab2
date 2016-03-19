#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>

using namespace std;

class BMI{
	public:


		BMI();
		BMI(double , double);	
		double getBMI();
		void setWeight(double weight);
		double getWeight();
		void setHeight(double height);
		double getHeight();
		string getCategory(double);	
	private:
		
		double _weight;
		double _height;

};
