#include <iostream>
#include <string>
using namespace std;
int main()
{
	int age;
	string Name,sex;
	float BMI,H,W;
	cout <<"Enter Name : ";
	cin >> Name;
	cout <<"Enter Age : ";
	cin >> age;
	cout <<"Enter Gender : ";
	cin >> sex;
	cout <<"Enter Height : ";
	cin >> H;
	cout <<"Enter Weight : ";
	cin >> W;
	BMI = W / (H/100*H/100) ;
	
	if (BMI <=18.1)cout<<"BMI = "<<BMI<<" kg/m2"<<" Underweight\n";
	else if ((BMI >=18.1)&&(BMI <=25))cout<<"BMI = " << BMI <<" kg/m2"<<" Normal\n";
	else if ((BMI >=25)&&(BMI <=30))cout<<"BMI = " <<BMI <<" kg/m2"<<" Overweight\n";
	else if ((BMI >=30)&&(BMI <=3.5))cout<<"BMI = " <<BMI <<" kg/m2"<<" Obseity\n";

	system("pause");
	return (0);
}