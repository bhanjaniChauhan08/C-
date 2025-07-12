#include<iostream>
#include<string>

struct Person {
	std::string name;
	int age;
	float height;
 };

int main() {
 	Person bhanji = {"bhanji", 30, 5.9f};
 	std::cout <<"Name: "<< bhanji.name <<"\nAge: "<<bhanji.age<<"\nHeight: "<<bhanji.height<< std::endl;
 	return 0;
}
