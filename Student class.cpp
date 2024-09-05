#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		char name[30];
	public:
		void put_data(){
			cout<<"Enter your name and roll#:"<<endl;
			cin>>name>>roll;
		}
		void get_data(){
			cout<<name<<" "<<roll;
		}
};

int main(){
	student s1,s2,s3;
	s1.put_data();
	s2.put_data();
	s3.put_data();
	s1.get_data();
	s2.get_data();
	s3.get_data();
	return 0;
	
}
