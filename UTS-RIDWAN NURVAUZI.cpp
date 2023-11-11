#include <stdio.h>

// Fungsi untuk menghitung nilai tengah dari ketebalan pengelasan
int hitungNilaiTengah(int ketebalan) {
    return ketebalan / 2;
}

// Fungsi untuk simulasi pengelasan
void prosesPengelasan(int ketebalan, int waktu) {
    printf("Melakukan pengelasan untuk ketebalan %d mm selama %d detik.\n", ketebalan, waktu);
}

int main() {
    int ketebalanPengelasan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49, 50};
    int jumlahKetebalan = sizeof(ketebalanPengelasan) / sizeof(ketebalanPengelasan[0]);

    printf("Tombol Start ditekan. Motor listrik utama berputar 180 derajat.\n");

    for (int i = 0; i < jumlahKetebalan; i++) {
        int nilaiTengah = hitungNilaiTengah(ketebalanPengelasan[i]);

        printf("Motor listrik utama berputar menuju nilai tengah %d.\n", nilaiTengah);

        // Simulasi motor lengan tungkai berputar 45 derajat
        printf("Motor listrik lengan tungkai berputar 45 derajat.\n");

        // Simulasi motor jari robot mendekati objek
        printf("Motor listrik jari robot mendekati objek.\n");

        // Proses pengelasan
        prosesPengelasan(ketebalanPengelasan[i], i + 2);

        // Secara otomatis kembali ke langkah 3 untuk ketebalan berikutnya
    }

    return 0;
}
