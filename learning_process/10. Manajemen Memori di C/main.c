#include <stdio.h>
#include <stdlib.h>

struct Mahasiswa {
    char nama[20];
};

int main() {
    int n;
    int* array;
    struct Mahasiswa* mhs = (struct Mahasiswa*)malloc(sizeof(struct Mahasiswa));

    if(mhs != NULL) {
        printf("Masukkan nama: ");
        scanf("%s", mhs->nama);

        printf("Halo %s!\n", mhs->nama);
    }

    // Minta jumlah elemen
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    // Alokasi memori dinamis
    array = (int*)calloc(n, sizeof(int));
    if(array == NULL) {
        printf("Alokasi memori gagal!\n");
        return 1;
    }

    // Isi array
    for(int i = 0; i < n; i++) {
        printf("Masukkan elemen ke-%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Cetak array
    for(int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Jumlah total dari elemen array
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += array[i];
    }
    printf("Jumlah total dari elemen array: %d\n", total);

    // Bebaskan memori
    free(mhs);
    free(array);

    return 0;
}