#include<iostream>
using namespace std;
class user{
	private:
		static int count;
	public:
		static void get_count(){
			count++;
			cout<<"Total users at time is "<<count;
		}
int user::count;		
};
int main(){
	user u1;
	user::get_count();
	user u2;
	user::get_count();
	user u3;
	user::get_count();
	return 0;
}
