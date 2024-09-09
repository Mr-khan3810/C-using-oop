#include<iostream>
using namespace std;
class user{
	private:
		static int count;
	public:
		static void get_count(){
			count++;
		}
		static void t_users(){
			cout<<"The total no. of users "<<count;
		}
		
};
int main(){
	user u1,u2,u3,u4;
	u1.get_count();
	u2.get_count();
	u3.get_count();
	u4.t_users();
	return 0;
}
