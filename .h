#include<iostream>
#include<string>

using namespace std;

class Mahasiswa{
	public:
		string nama;
		string npm;
		string kelas;
		string jurusan;


Mahasiswa(string inputnama, string inputnpm, string inputkelas, string inputjurusan){
	Mahasiswa::nama = inputnama;
	Mahasiswa::npm = inputnpm;
	Mahasiswa::kelas = inputkelas;
	Mahasiswa::jurusan = inputjurusan;

	cout << Mahasiswa::nama << endl;
	cout << Mahasiswa::npm << endl;
	cout << Mahasiswa::kelas << endl;
	cout << Mahasiswa::jurusan << endl;
	}
};

int main(int argc, char const *argv[])
{
	Mahasiswa mahasiswa1 = Mahasiswa("Dedi Junadi", "11118711", "2KA30", "Sistem Informasi"); 
	cout <<"\n";
	Mahasiswa mahasiswa2 = Mahasiswa("Pandy Muhamad", "12528711", "2KA29", "Teknik Informatika");
	cout <<"\n";
	Mahasiswa mahasiswa3 = Mahasiswa("Thoriq Mahfud", "12522153", "2KA28", "Teknik Komputer"); 

return 0;
}
