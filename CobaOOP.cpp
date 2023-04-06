#include <iostream>
#include <string.h>
#include <string>

using namespace std;

/*class AccessModifier{
	public:		Dapat dipakai dari luar kelas ini		
	private:	Hanya dapat dipakai di kelas ini
	protected:	Hanya dapat dipakai di kelas ini dan class turunan
}; */

class Data_Diri {
	public:
		string Nama;	//Henry Carnegie
		int Nim;		//121140054
		string Status; //mahasiswa
	
}; 

class Mahasiswa {
	public: 
		string Nama, Nim, Jurusan;  //untuk tipe data pada Mahasiswa::,,,
		
		Mahasiswa(string inputNama, string inputNim, string inputJurusan){
			//namespace Mahasiswa untuk mengambil variabel Nama di kelas Mahasiswa 
			Mahasiswa::Nama = inputNama;
			Mahasiswa::Nim = inputNim;
			Mahasiswa::Jurusan = inputJurusan;		
			
			//Cara kedua untuk menampilkan data
			/*cout << Mahasiswa::Nama << endl;
			cout << Mahasiswa::Nim << endl;
			cout << Mahasiswa::Jurusan << endl; */
	}	  
};
 
int main() {
	
	Mahasiswa mahasiswa = Mahasiswa("Henry", "121140054", "Teknik Informatika");
	cout << mahasiswa.Nama << endl;
	cout << mahasiswa.Nim << endl;
	cout << mahasiswa.Jurusan << endl; 
	
	
	
	/*Data_Diri Saya;
	string mahasiswa;

		Saya.Nama = "Henry Carnegie";
		Saya.Nim = 121140054;
		Saya.Status = "Mahasiswa";
	
			cout << Saya.Nama << endl;
				cout << Saya.Nim << endl;
					cout << Saya.Status << endl;*/
	
}




	
