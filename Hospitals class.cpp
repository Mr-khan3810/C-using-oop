#include<iostream>
using namespace std;
class hospital{
	
	private:
		string name;
		string address;
		int age;
		char doa[30];
	public:
		void put_data(){
			cout<<"Enter the name of patient:"<<endl;
			cin>>name;
			cout<<"Enter the age of patient:"<<endl;
			cin>>age;
			cout<<"Enter the date of admission of patient:"<<endl;
			cin>>doa;
			cout<<"Enter the address of patient:"<<endl;
			cin>>address;
		}
		void get_data(){
			cout<<"The name of patient is "<<name<<" and his age is " <<age<<" and his address is "<<address<<" date of admission is "<<doa<<endl;
		}
};
int main(){
	hospital h1,h2,h3;
	h1.put_data();
	h2.put_data();
	h3.put_data();
	h1.get_data();
	h2.get_data();
	h3.get_data();
	return 0;
}
