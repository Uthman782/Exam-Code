#include<iostream>
using namespace std;
class P{
	public:
		void print(){
			cout<<"inside P"<<endl;
		}
};
class Q: public P{
	public:
		void print(){
			cout<<"inside Q"<<endl;
		}
};
class R: public Q{
};
int main(){
	R r;
	r.print();
	return 0;
}