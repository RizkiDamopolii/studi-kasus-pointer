#include <iostream>
using namespace std;

class Pointer{
	public:
	int Z [20];
  	string K [50];
  	int *nim=Z;
  	string *nama=K;
    int jmhs;
    
    void input(){
    	//memasukan jumlah data mahasiswa
  		cout<<"Masukan jumlah mahasiswa : ";
    	cin>>jmhs;
    }
    void proses(){
      //input nim dan nama mahasiswa
      for (int i=0; i<jmhs; i++)
    	{
    	    cout<<"Masukkan NIM "<<i+1<<" : ";
    	    cin>>Z[i];
    	    cin.ignore();
    	    cout<<"Masukkan NAMA "<<i+1<<" : ";
    	    getline(cin,K[i]);
    	    cout<<endl;
    	}
    }	
	
	void output(){
		//output nim dan nama mahasiswa
    	cout<<"Daftar Mahasiswa : "<<endl;
      cout<<"|No | NIM      |             Nama             "<<endl;
    	for (int n=1; n<=jmhs; n++)
    	{
    	    cout<<"|"<<n<<". |"<<*(nim)<<"| ";
          nim++;
          cout<<*(nama)<<"        "<<endl;
          nama++;
    	}
	}
};

int main(){
	Pointer obj;
	obj.input();
  obj.proses();
	obj.output();
	return 0;
}