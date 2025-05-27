#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
    ibu* varIbu1 = new ibu("dini");
    ibu* varIbu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varAnak2 = new anak("yanto");
    anak* varAnak3 = new anak("jamal");

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