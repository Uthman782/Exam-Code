#include<iostream>
using namespace std;

class A{
	protected:
		int marks;
		public:
			A(){
				marks=100;
			}
			void disp(){
				cout<<marks;
			}
};
class B: protected A{
};
int main(){
	B b;
	b.disp();
}