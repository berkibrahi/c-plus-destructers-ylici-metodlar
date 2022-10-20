#include <iostream>

using namespace std;
class kisi{
	public:
		string ad;
		string soyad;
		int yas;
		kisi(){
			cout<<"yapici metod calisti"<<endl;
		}
		~kisi(){
				cout<<"yikici metod calisti"<<endl;
		}
};

int main(int argc, char** argv) {
	kisi *ptr=new kisi();
	
	delete ptr;
	

	
	return 0;
}
