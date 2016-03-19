#include"lab2.h"
BMI::BMI(){
	_height=0;
	_weight=0;
}
BMI::BMI(double height,double weight){
	_height = height;
	_weight = weight;
}

double BMI::getBMI(){
	double bmi = _weight/((_height/100)*(_height/100));
	return bmi;
}
void BMI::setWeight(double weight){
	_weight = weight;
}
double BMI::getWeight(){
	return _weight;
}
void BMI::setHeight(double height){
	_height = height;
}
double BMI::getHeight(){
	return _height;
}
string BMI::getCategory(double bmi){
	if (bmi < 15)
	{
	 	return"Very severely underweight";	
	}
	else if (bmi < 16)
	{
		return"Severely underweight";
	}
	else if (bmi < 18.5)
	{
		return"Underweight";
	}	
	else if (bmi < 25)
	{	
		return"Normal";
	}
	else if (bmi < 30)
	{
		return"Overweight";
	}
	else if (bmi < 35)
	{
		return"Obese Class I (Moderately obese)";
	}
	else if (bmi < 40)	
	{
   		return"Obese Class II (Severely obese)";			
	}
	else (bmi > 40);
	{
		return"Obese Class III (Very severely obese)";
	}

}
