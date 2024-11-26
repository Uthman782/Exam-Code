#include<iostream>
using namespace std;
class base{
	int arr[10];
};
class b1:public base{ };
class b2:public base{ };
class dr:public b1, public b2{ };

int main(){
	cout<<sizeof(dr);
	return 0;
}