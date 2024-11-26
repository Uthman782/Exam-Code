#include<iostream>
using namespace std;

class A{
	private:
		int marks;
			A(){
				marks=100;
			}
	public:
			void show(){
				cout<<marks;
			}
};
class B: public A{
};
int main(){
	B b;
	b.show();
}