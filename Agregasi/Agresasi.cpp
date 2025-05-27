#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
    Ibu* varIbu1 = new Ibu("Icha");
    Ibu* varIbu2 = new Ibu("Caca");
    anak* varAnak1 = new anak("Jamal");
    anak* varAnak2 = new anak("Sukujin");
    anak* varAnak3 = new anak("Agus");

    varIbu1->tambahAnak(varAnak1);
    varIbu1->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    varIbu2->tambahAnak(varAnak1);

    varIbu1->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu1;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;
}