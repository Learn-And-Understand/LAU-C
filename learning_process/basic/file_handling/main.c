#include <stdio.h>

int main() {
    // Write file
    FILE* file = fopen("data.txt", "w");
    fprintf(file, "Hello, World!");
    fclose(file);

    // Read file
    char teks[100];
    FILE* file2 = fopen("data.txt", "r");
    if(file2) {
        fgets(teks, 100, file2);
        fclose(file2);
        printf("Content in data.txt: %s\n", teks);
    }else{
        printf("Failed to read file data.txt\n");
    }
    return 0;
}