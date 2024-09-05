#include<iostream>
using namespace std;
class employee{
	private:
		int id;
		string name;
		string address;
	public:
		void data(){
			cout<<"Enter name,id and address:"<<endl;
			cin>>name>>id>>address;
		}
};
int main(){
	employee e1,e2,e3;
	e1.data();
	e2.data();
	e3.data();
	return 0;
}
