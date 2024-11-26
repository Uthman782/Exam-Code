#include<iostream>
using namespace std;

class A{
	public:
		A(int a):x(a){}
		void show(){
			cout<<"x="<<x<<endl;
		}
	private:
		int x;
};
void g(A z){
	z.show();
}
int main(){
	A b(10);
	g(b);
	g(20);
	return 0;
}