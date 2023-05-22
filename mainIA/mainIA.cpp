#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
	ibu* varIbu = new ibu("Linda");
	ibu* varIbu2 = new ibu("Novi");
	anak* varAnak1 = new anak("Naufal");
	anak* varAnak2 = new anak("Adit");
	anak* varAnak3 = new anak("Toni");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

	varIbu->cetakAnak();
	varIbu2->cetakAnak();
	
	delete varIbu;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0;
}

