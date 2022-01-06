#include<iostream>
#include<string>
using namespace std;

class kasr{
public:
	int makhraj = 0;
	int sorat = 0;

	kasr()
	{
		cout << "vared kon sorat";
		cin >> sorat;

		while (makhraj == 0)
		{
			cout << "vared kon makhraj";
			cin >> makhraj;
		}

	}
	void jam(kasr kasr2)
	{

		int s = sorat*kasr2.makhraj + makhraj * kasr2.sorat;
		int m = makhraj*kasr2.makhraj;
		cout << s << '/' << m;

	}

	void menha(kasr kasr2)
	{

		int s = sorat*kasr2.makhraj + makhraj - kasr2.sorat;
		int m = makhraj*kasr2.makhraj;
		cout << s << '/' << m;

	}

	
	void zarb(kasr kasr2)
	{

		int s = sorat* kasr2.sorat;
		int m = makhraj*kasr2.makhraj;
		cout << s << '/' << m;

	}



	void taghsim(kasr kasr2)
	{

		int s = sorat*kasr2.makhraj ;
		int m = makhraj*kasr2.sorat;
		cout << s << '/' << m;

	}



};



int main(){
	string c="";

	kasr kasr1;
	kasr kasr2;

	cout << "vared kon yeky az / ya * ya + ya -";
	cin >> c;

	if (c == "/"){kasr1.taghsim(kasr2);}
	if (c == "+"){ kasr1.jam(kasr2); }
	if (c == "*"){ kasr1.zarb(kasr2); }
	if (c == "-"){ kasr1.menha(kasr2); }





	system("pause");
	return 0;
}














