#include<iostream>
#include<fstream>>
#include<string>
using namespace std;


int main(){
	int k = 0,m=0,b=0,z=0;
	string buf, bufs;

	ifstream in("list1.txt");
	ofstream out;
	out.open("list1.txt");
	struct moshakhasat{
		int shenase = 0;
		string nam = "";
		int gheymat = 0;
		int meghdar = 0;

	}*mive;



	cout << "1-namayesh 2-ezafe kardan 3-edite 4-delet 5-search";
	cin >> m;

	if (m == 2)
	{
		cout << "chand ta mekhahy ezafe kony";
		cin >> z;
		cout << "verad kon be in shekl kode,nam,gheymat,meghdar";
		cin >> bufs;
		out << bufs;
		out.close();
	}

	
		z += 3;
	mive=new moshakhasat[z];
	
	
		



	

	
	if (m == 1)
	{
		

	

		while (getline(in, buf))
		{

			string x[4];
			int j = 0;
			for (int i = 0; i <= buf.size(); i++)
			{




				if (buf[i] != ','&&i < buf.length())
					x[j] += buf[i];

				else
				{

					switch (j)
					{

					case 0:
						mive[k].shenase = stoi(x[j]);
						break;
					case 1:
						mive[k].nam = x[j];
						break;

					case 2:
						mive[k].gheymat = stoi(x[j]);
						break;

					case 3:
						mive[k].meghdar = stoi(x[j]);
						break;

					}

					j++;

				}



			}

			k++;
		}


		for (int n = 0; n < 3; n++)
		{

			cout << mive[n].shenase << endl << mive[n].nam << endl << mive[n].gheymat << endl << mive[n].meghdar << endl;

		}

	}
	
	





	system("pause");
	return 0;

}

