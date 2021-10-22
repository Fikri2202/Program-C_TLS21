#include <iostream>

using namespace std;

int main()
{
    int pil1,hari,lapar,makanan,nasi,minuman,harga,harga1,harga2,n;
    int minuman1,n1,hargatotal,berat,waktu,kecepatan;
    float pound,ec,met;
        cout << "Heloo lagi ngapain? \n";
        cout << "===================\n";
        cout << "Ini ada pilihan angka\n";
        cout << "1. Lagi nggak ada kerjaan ni\n";
        cout << "2. Lagi lapar\n";
        cout << "3. Lagi mau jogging ni, cuacanya lagi cerah\n\n";
        cout << "Ketik pilihan jawaban\n";
        cin >> pil1;

        if ( pil1 == 1) {
            cout << "\nMumpung lagi g ada kerjaan, boleh tuh belajar dan ngerjain tugas\n\n";
            cout << "Hari ini hari apa?\n";
            cout << "Ketik hari dengan urutan senin= 1 hingga minggu= 7\n\n";
            cout << "Hari= ";
            cin >> hari;
            cout << "\n======================================\n";
            cout << "\tRekomendasi kegiatan\n";
            cout << "======================================\n";
            cout << "1. Cek semua deadline tugas dan kegiatan organisasi\n";
                if (hari == 1){
                    cout << "2. Mengecek dan mengerjakan tugas fisika\n";
                    cout << "3. Mengecek dan mengerjakan tugas b indo\n";
                    cout << "4. Tugas TLS udah atau belum? boleh tuh dikerjain\n";
                    cout << "Kalau udah siap semua boleh santai dikit sambil dengarin lagu\n";
                    cout << "Selamat hari senin dan smangat brader\n";

                }else if (hari == 2){
                    cout << "Cie libur, tapi jgn lupa untuk cek deadline tugas dan kegiatan organisasi ya\n";
                    cout << "2. Nah karena besok rabu, boleh tuh belajar kalkulus sama fisika, siapa tau ada kuis\n";
                    cout << "Selamat hari selasa dan smangat brader\n";
                }
                else if (hari == 3){
                    cout << "2. Mengecek dan mengerjakan tugas fisika\n";
                    cout << "3. Mengecek dan mengerjakan tugas kalkulus\n";
                    cout << "Ya itu aja si, sisanya boleh dimanfaatin dengan ngecek info organisasi dan tugas lainnya\n";
                    cout << "Semangat hari rabu brader\n";
                }
                else if (hari == 4){
                    cout << "2. Mengecek dan mengerjakan tugas kalkulus\n";
                    cout << "3. Mengecek dan mengerjakan tugas tvm\n";
                    cout << "Hari ini hari kamis lo jgn lupa baca al-kahfi ntar malem\n";
                    cout << "Jangan lupa juga belajar progdas, soalnya progdas uuuu mengerikan\n";
                }
                else if (hari == 5){
                    cout << "2. Hari ini enak soalnya besok libur\n";
                    cout << "3. Manfaatin hari jum'at buat ngabisin tugas-tugas yang ada\n";
                    cout << "Kalau udah siap semua boleh istirahat dulu biar g penat\n";
                    cout << "Selamat hari jum'at gassss\n";
                }
                else if (hari == 6){
                    cout << "Hari paling enak tapi jangan sampai keenakan\n";
                    cout << "2. Cek jadwal tugas dan habisin klo bisa\n";
                    cout << "Sabtu juga bisa dijadiin obat stress setelah belajar seminggu, boleh santai-santai dikit\n";
                    cout << "Selamat hari sabtu hari paling enak\n";
                }
                else if (hari == 7){
                    cout << "WARNING, BESOK SENIN AAAAAAAAAAAAAAAAA\n";
                    cout << "Ayo periksa semua tugas dan jangan lupa belajar buat besok\n";
                    cout << "Tapi jangan terlalu panik dan jangan lupa jaga kesehatan hehe\n";
                }
                else {
                    cout << "Coba ulang lagi masukkan harinya, keknya salah angka tu";
                }
        }
        else if (pil1 == 2){
            cout << "\nWah lagi lapar ya, ga mau coba pesan makanan?\n";
            cout << "1. ga dulu deh, mau makan dirumah aja\n";
            cout << "2. boleh tuh\n\n";
            cout << "Pilihan= ";
            cin >> lapar;
            if (lapar == 1){
                cout << "Oh gitu, yauda selamat makan\n";
            }
            else if (lapar == 2){
                cout << "\n=======================\n";
                cout << "Program Memesan Makanan\n";
                cout << "=======================\n\n";
                cout << "Pilihan Menu\n\n";
                cout << "Makanan\n";
                cout << "1. Ayam Geprek         => Rp10.000\n";
                cout << "2. Ayam Geprek Mie     => Rp17.0000\n";
                cout << "3. Ayam Penyet         => Rp10.000\n";
                cout << "4. Mie Nasi Goreng     => Rp13.000\n";
                cout << "5. Mie Goreng          => Rp10.000\n";
                cout << "6. Nasi putih          => Rp4.000\n\n";
                cout << "Minuman\n";
                cout << "1. Es Jeruk            => Rp7.000\n";
                cout << "2. Es Mangga           => Rp8.000\n";
                cout << "3. Susu Dingin         => Rp10.000\n";
                cout << "4. Teh es              => Rp5.000\n\n";
                cout << "Silahkan pilih makanan= ";
                cin >> makanan;
                cout << "Masukkan jumlah pesanan= ";
                cin >> n;
                switch (makanan){
                    case 1:
                        harga1 = n*10000;
                        break;
                    case 2:
                        harga1 = n*17000;
                        break;
                    case 3:
                        harga1 = n*10000;
                        break;
                    case 4:
                        harga1 = n*13000;
                        break;
                    case 5:
                        harga1 = n*10000;
                        break;
                }
                cout << "\nApakah ingin menambah nasi? ";
                cout << "Ketik 1 jika iya= ";
                cin >> nasi;

                if (nasi==1){
                    harga = 4000+ harga1;
                }
                else {
                    harga = harga1;
                }

                cout << "\nIngin memesan minuman?\n";
                cout << "Ketik 1 jika iya= ";
                cin >> minuman;
                if (minuman = 1){
                    cout << "\nSilahkan pilih minuman= ";
                    cin >> minuman1;
                    cout << "Masukkan Jumlah Pesanan = ";
                    cin >> n1;
                    switch (minuman1){
                        case 1:
                            harga2 = n1*7000;
                            break;
                        case 2:
                            harga2 = n1*8000;
                            break;
                        case 3:
                            harga2 = n1*10000;
                            break;
                        case 4:
                            harga2 = n1*5000;
                            break;
                    }
                }else {
                            harga2 = 0;
                }
                hargatotal = harga + harga2;
               cout << "\n===================================\n";
               cout << "Pesanan makanan Anda adalah no"<<"\t= " << makanan << "\n";
               cout << "Dengan jumlah pesanan" << "\t\t= " << n;
               cout << "\nNasi \t\t\t\t= " << nasi << "\n";
               cout << "\nHarga" << "\t\t\t\t=> Rp" <<harga;
               cout << "\n===================================\n";
               cout << "\\n\nPesanan minuman Anda adalah no"<<"\t= " << minuman1 << "\n";
               cout << "Dengan jumlah pesanan" << "\t\t= " << n1;
               cout << "\n\nHarga" << "\t\t\t\t=> Rp" <<harga2;
               cout << "\n===================================\n";
               cout << "\nHarga total adalah " << "\t\t=> Rp" <<hargatotal;
            }
        }
        else if (pil1 == 3){
            cout << "\nSemangattt berolahraga!!";
            cout << "\nSetelah berolahraga Anda bisa mengukur kalori yang terbakar";
            cout << "\n=====================================\n";
            cout << "Program mengukur kalori yang terbakar";
            cout << "\n=====================================\n\n";
            cout << "Berat badan Anda (kg)\t\t= ";
            cin >> berat;
            cout << "Waktu berolahraga (menit)\t= ";
            cin >> waktu;
            cout << "\nPilih kecepatan berlari\n";
            cout << "1. 5 mph\n";
            cout << "2. 6 mph\n";
            cout << "3. 7 mph\n";
            cout << "4. 10 mph\n";
            cout << "Kecepatan= ";
            cin >> kecepatan;

            pound = berat*2.2;

            switch (kecepatan){
                    case 1:
                        met = 1.66;
                        break;
                    case 2:
                        met = 2.08;
                        break;
                    case 3:
                        met = 2.6;
                        break;
                    case 4:
                        met = 3.43;
                        break;
            }
            ec = met*7.7*pound*waktu/200;
            cout << "\n=====================================\n\n";
            cout << "Kalori yang terbakar adalah " << ec << " kalori";
            cout << "\n\nKeren dan tetap semangat!!\n\n";

        }

    return 0;
}
