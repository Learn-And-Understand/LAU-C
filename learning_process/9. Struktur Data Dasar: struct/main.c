#include <stdio.h>

struct Mahasiswa {
    char nama[20];
    int umur;
    float tinggi;
    char kelas[5];
};

void inputMhs(struct Mahasiswa* mhs) {
    if(mhs == NULL) return;
    printf("Masukkan nama: ");
    scanf("%s", mhs->nama);
    printf("Masukkan umur: ");
    scanf("%d", &mhs->umur);
    printf("Masukkan tinggi: ");
    scanf("%f", &mhs->tinggi);
    printf("Masukkan kelas: ");
    scanf("%s", mhs->kelas);
}

void printMhs(struct Mahasiswa* mhs) {
    if(mhs == NULL) return;
    printf("Nama: %s\n", mhs->nama);
    printf("Umur: %d tahun\n", mhs->umur);
    printf("Tinggi: %.1f cm\n", mhs->tinggi);
    printf("Kelas: %s\n", mhs->kelas);
}

int main() {
    struct Mahasiswa mhs1;
    struct Mahasiswa mhs2 = {"Justin", 19, 160.0, "PPLG"};

    inputMhs(&mhs1);

    printMhs(&mhs1);
    printMhs(&mhs2);

    // Modifikasi data
    mhs1.umur = 21;
    printf("\nSetelah ulang tahun:\n");
    printf("Umur baru: %d tahun\n", mhs1.umur);

    return 0;
}