#include"lab2.h"
int main(){
	
	double h,w,bmi;
	ifstream inFile("file.in",ios::in);	
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);	
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
    	cerr<<"Failed opening"<<endl;
        exit(1);
    }

	while(inFile>>h>>w){
	//cout<<h<<"\t"<<w<<endl;
		if(h ==0&& w ==0)
			break;
		
			
		BMI obj(h,w);
		outFile<<obj.getBMI()<< "\t";
		outFile<<obj.getCategory(obj.getBMI())<<endl;
		
	}
	return 0;
}
