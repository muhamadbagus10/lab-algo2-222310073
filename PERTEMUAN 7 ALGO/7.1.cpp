#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
public:
virtual void Status(){
  cout << "..." << endl;
}
virtual void Nama(){
  cout << "..." << endl;
}
virtual void Umur(){
  cout << "..." << endl;
}
virtual void Jurusan(){
  cout << "..." << endl;
}
virtual void Fakultas(){
  cout << "..." << endl;
}
};

class Faqih : public Mahasiswa{
public:
void Status(){
  cout << "Mahasiswa aktif" << endl;
}
void Nama(){
  cout << "Faqih" << endl;
}
void Umur(){
  cout << "19" << endl;
}
void Jurusan(){
  cout << "Teknologi Informasi" << endl;
}
void Fakultas(){
  cout << "Informatika" << endl;
}
};

class Asep : public Mahasiswa{
public:
void Status(){
  cout << "Mahasiswa nonaktif" << endl;
}
void Nama(){
  cout << "Asep" << endl;
}
void Umur(){
  cout << "25" << endl;
}
void Jurusan(){
  cout << "Teknologi Informasi" << endl;
}void Fakultas(){
  cout << "Informatika" << endl;
}
};


int main(){
  Mahasiswa *h1 = new Faqih();
  Mahasiswa *h2 = new Asep();

  h1->Status();
  h1->Nama();
  h1->Umur();
  h1->Jurusan();
  h1->Fakultas();
  cout <<endl;
  cout << "-------------------------"<<endl ;
  cout <<endl;
  h2->Status();
  h2->Nama();
  h2->Umur();
  h2->Jurusan();
  h2->Fakultas();
  return 0;
}