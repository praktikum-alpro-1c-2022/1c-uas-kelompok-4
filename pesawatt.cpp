#include <iostream>
#include <iomanip>

using namespace std;

string kota_asal, kota_tujuan, n_maskapai, waktu, kode, durasi;

double uang, harga_awal, diskon, harga, total;

int j,cari, pil_kota_asal, pil_kota_tujuan, maskapai, p_maskapai,menu,menu_utama,jml_penumpang, ketemu;
string kota[3] = {"Jakarta", "Bandung", "Yogyakarta"};


int kembalian(int uang, double total){
    int result;
    result = uang-total;
    return result;
}

//function garis
void garis(){
    cout <<" ============================================================================== ";
    cout <<endl;
}

//function header
void header(){
    garis();
    cout << " \t\t\t Program Pemesanan Tiket Pesawat " <<endl;
    cout<<endl;
    cout << " \t Nama : Emil Maulana \t Fitria Noviyanti T \t Rafi Hermansyah " <<endl;
    garis();
}


//percabangan, perulangan, operator, fungsi, array, pointer, struct

struct Penumpang{
    string nama;
    int pasport;
};

//function maskapai
void pilihan_maskapai(){

    menu_utama :
        header();
        cout<<endl;
        garis();
        cout<<" \t\t\t\t Menu Utama"<<endl;
        garis();
        cout<<" =\t 1. Pesan Tiket "<<endl;
        cout<<" =\t 2. Lihat Daftar Penumpang "<<endl;
        cout<<" =\t 3. Cek Pemesanan "<<endl;
        cout<<" =\t 4. Pembayaran "<<endl;
        cout<<endl;
        cout<<" Silahkan Input Pilihan : ";
        cin>>menu_utama;
        garis();

        if(menu_utama == 1){
            system("cls");
            goto pesan_tiket;
        }else if(menu_utama == 2){
            system("cls");
            goto daftar_penumpang;
        }else if(menu_utama == 3){
            system("cls");
            goto pesanan_saya;
        }else if(menu_utama == 4){
            system("cls");
            goto pembayaran;
        }else{
            system("cls");
            cout<<" Perintah tidak tersedia "<<endl;
            goto menu_utama;
        }


pesan_tiket :
    cout<<endl;
    garis();
    cout<<" Masukkan Jumlah Penumpang : ";
    cin>>jml_penumpang;

    Penumpang *p;
	p = new Penumpang[100];

    for(int i = 1; i <= jml_penumpang; i++){
        cout<<" Masukkan Nama Penumpang "<< i <<" : ";
        getline(cin,p[i].nama);
        getline(cin,p[i].nama);
        cout<<" Masukkan No. Pasport Penumpang "<< i <<" : ";
        cin>>p[i].pasport;
        garis();
    }





pilih_kota_asal :
        cout<<endl;
        garis();
        cout<<"\t\t\t\t Pilih Kota Asal "<<endl;
        garis();
        for(int i = 0; i <= 2; i++){
            cout<<"  ["<< i <<"] "<<kota[i]<<endl;
        }
        garis();
        cout<<" Silahkan Pilih Kota Asal [ 0,1,2 ]: ";
        cin>>pil_kota_asal;
        garis();


        switch(pil_kota_asal){
            case 0 :
                kota_asal = " Jakarta ";
            break;
            case 1 :
                kota_asal = " Bandung ";
            break;
            case 2 :
                kota_asal = " Yogyakarta ";
            break;
            default :
                system("cls");
                garis();
                cout<<" \t\tKota asal belum tersedia, Silahkan pilih ulang!"<<endl;
                goto pilih_kota_asal;
        }

pilih_kota_tujuan :
        cout<<endl;
        garis();
        cout<<"\t\t\t\t Pilih Kota Tujuan "<<endl;
        garis();
        for(int i = 0; i <= 2; i++){
            cout<<"  ["<< i <<"] "<<kota[i]<<endl;
        }
        garis();
        cout<<" Silahkan Pilih Kota Tujuan [ 0,1,2,3 ]: ";
        cin>>pil_kota_tujuan;
        garis();
        cout<<endl;


        switch(pil_kota_tujuan){
            case 0 :
                kota_tujuan = " Jakarta ";
            break;
            case 1 :
                kota_tujuan = " Bandung ";
            break;
            case 2 :
                kota_tujuan = " Yogyakarta ";
            break;
            default :
                system("cls");
                garis();
                cout<<"\t\tKota tujuan belum tersedia, , Silahkan pilih ulang! "<<endl;
                goto pilih_kota_tujuan;
        }


        system("cls");
        garis();
        cout<<"\t "<<kota_asal<<" --> "<<kota_tujuan;
        cout<<endl;

    pil_maskapai :
         if(kota_asal == " Jakarta "){
            if(kota_tujuan == " Bandung "){
                garis();
                cout<<"\t1 = Lion Air"<<endl;
                cout<<"\t  = 07.45 --> 10.00 "<<endl;
                cout<<"\t  = CGK   --> BDO "<<endl;
                cout<<"\t  = 2 jam 15 menit "<<endl;
                cout<<"\t  = Harga : 441.650 "<<endl;
                garis();
                cout<<"\t2 = Citilink "<<endl;
                cout<<"\t  = 11.00 --> 13.35 "<<endl;
                cout<<"\t  = CGK   --> BDO "<<endl;
                cout<<"\t  = 2 jam 35 menit "<<endl;
                cout<<"\t  = Harga : 457.704 "<<endl;
                garis();
                cout<<"\t3 = Batik Air "<<endl;
                cout<<"\t  = 15.00 --> 17.20 "<<endl;
                cout<<"\t  = CGK   --> BDO "<<endl;
                cout<<"\t  = 2 jam 20 menit "<<endl;
                cout<<"\t  = Harga : 413.700 "<<endl;
                garis();
                cout<<" Silahkan Pilih Maskapai [ 1,2,3 ] : ";
                cin>>p_maskapai;
                switch(p_maskapai){
                    case 1 :
                        n_maskapai = "\t = Lion Air ";
                        waktu = "\t = 07.45 --> 10.00 ";
                        kode = "\t = CGK   --> BDO ";
                        durasi = "\t = 2 jam 15 menit ";
                        harga = 441650;
                    break;
                    case 2 :
                        n_maskapai = "\t = Citilink ";
                        waktu = "\t = 11.00 --> 13.35 ";
                        kode = "\t = CGK   --> BDO ";
                        durasi = "\t = 2 jam 35 menit ";
                        harga = 457704 ;
                    break;
                    case 3 :
                        n_maskapai = "\t = Batik Air ";
                        waktu = "\t = 15.00 --> 17.20 ";
                        kode = "\t = CGK    --> BDO ";
                        durasi = "\t = 2 jam 20 menit ";
                        harga = 413700 ;
                    break;
                    default :
                        n_maskapai = "\t === ";
                        waktu = "\t === ";
                        kode = "\t === ";
                        durasi = "\t === ";
                        harga = 0;
                    break;

                }
            }else if(kota_tujuan == " Yogyakarta "){
                garis();
                cout<<"\t1 = Lion Air "<<endl;
                cout<<"\t  = 08.55 --> 10.10 "<<endl;
                cout<<"\t  = CGK   --> YIA "<<endl;
                cout<<"\t  = 1 jam 15 menit "<<endl;
                cout<<"\t  = Harga : 674.288 "<<endl;
                garis();
                cout<<"\t2 = Super Air Jet "<<endl;
                cout<<"\t  = 11.00 --> 12.15 "<<endl;
                cout<<"\t  = CGK   --> YIA "<<endl;
                cout<<"\t  = 1 jam 15 menit "<<endl;
                cout<<"\t  = Harga : 875.283 "<<endl;
                garis();
                cout<<"\t3 = Batik Air "<<endl;
                cout<<"\t  = 12.30 --> 13.45 "<<endl;
                cout<<"\t  = HLP   --> YIA "<<endl;
                cout<<"\t  = 1 jam 15 menit "<<endl;
                cout<<"\t  = Harga : 1.091.288 "<<endl;
                garis();
                cout<<" Silahkan Pilih Maskapai [ 1,2,3 ] : ";
                cin>>p_maskapai;
                switch(p_maskapai){
                    case 1 :
                        n_maskapai = "\t = Lion Air ";
                        waktu = "\t = 08.55 --> 10.10 ";
                        kode = "\t = CGK    --> YIA ";
                        durasi = "\t = 1 jam 15 menit ";
                        harga = 674288 ;
                    break;
                    case 2 :
                        n_maskapai = "\t = Super Air Jet ";
                        waktu = "\t = 11.00 --> 12.15 ";
                        kode = "\t = CGK    --> YIA ";
                        durasi = "\t = 1 jam 15 menit ";
                        harga = 875283;
                    break;
                    case 3 :
                        n_maskapai = "\t = Batik Air ";
                        waktu = "\t = 12.30 --> 13.45 ";
                        kode = "\t = HLP    --> YIA ";
                        durasi = "\t = 1 jam 15 menit ";
                        harga = 1091288 ;
                    break;
                    default :
                        n_maskapai = "\t === ";
                        waktu = "\t === ";
                        kode = "\t === ";
                        durasi = "\t === ";
                        harga = 0;
                    break;

                }
            }else{
                system("cls");
                garis();
                cout<<"\t\t Kota Asal dan Kota Tujuan Tidak Boleh Sama "<<endl;
                goto pilih_kota_asal;
            }


        }else if(kota_asal == " Bandung "){
            if(kota_tujuan == " Jakarta "){
                garis();
                cout<<"\t1 = Lion Air"<<endl;
                cout<<"\t  = 07.45 --> 10.00 "<<endl;
                cout<<"\t  = BDO   --> CGK "<<endl;
                cout<<"\t  = 2 jam 15 menit "<<endl;
                cout<<"\t  = Harga : 441.650 "<<endl;
                garis();
                cout<<"\t2 = Citilink "<<endl;
                cout<<"\t  = 11.00 --> 13.35 "<<endl;
                cout<<"\t  = BDO   --> HLP "<<endl;
                cout<<"\t  = 2 jam 35 menit "<<endl;
                cout<<"\t  = Harga : 457.704 "<<endl;
                garis();
                cout<<"\t3 = Batik Air "<<endl;
                cout<<"\t  = 15.00 --> 17.20 "<<endl;
                cout<<"\t  = BDO   --> CGK "<<endl;
                cout<<"\t  = 2 jam 20 menit "<<endl;
                cout<<"\t  = Harga : 413.700 "<<endl;
                garis();
                garis();
                cout<<" Silahkan Pilih Maskapai [ 1,2,3 ] : ";
                cin>>p_maskapai;
                switch(p_maskapai){
                    case 1 :
                        n_maskapai = "\t = Lion Air ";
                        waktu = "\t = 07.45 --> 10.00 ";
                        kode = "\t = BDO    --> CGK ";
                        durasi = "\t = 2 jam 15 menit ";
                        harga = 441650 ;
                    break;
                    case 2 :
                        n_maskapai = "\t = Citilink ";
                        waktu = "\t = 11.00 --> 13.35 ";
                        kode = "\t = BDO   --> HLP ";
                        durasi = "\t = 2 jam 35 menit ";
                        harga = 457704 ;
                    break;
                    case 3 :
                        n_maskapai = "\t = Batik Air ";
                        waktu = "\t = 15.00 --> 17.20 ";
                        kode = "\t = BDO    --> CGK ";
                        durasi = "\t = 2 jam 20 menit ";
                        harga = 413700 ;
                    break;
                    default :
                        n_maskapai = "\t === ";
                        waktu = "\t === ";
                        kode = "\t === ";
                        durasi = "\t === ";
                        harga = 0;
                    break;

                }
            }else if(kota_tujuan == " Yogyakarta "){
                garis();
                cout<<"\t1 = Wings Abadi Airlines "<<endl;
                cout<<"\t  = 07.00 --> 08.10 "<<endl;
                cout<<"\t  = BDO   --> JOG "<<endl;
                cout<<"\t  = 1 jam 10 menit "<<endl;
                cout<<"\t  = Harga : 1.534.900 "<<endl;
                garis();
                cout<<"\t2 = Lion JT "<<endl;
                cout<<"\t  = 09.10 --> 11.50 -- 12.50 --> 13.15 "<<endl;
                cout<<"\t  = BDO   -->  DPS  --> YIA "<<endl;
                cout<<"\t  = 4 jam 5 menit "<<endl;
                cout<<"\t  = Harga : 2.824.750 "<<endl;
                garis();
                cout<<" Silahkan Pilih Maskapai [ 1,2 ] : ";
                cin>>p_maskapai;
                switch(p_maskapai){
                    case 1 :
                        n_maskapai = "\t = Wings Abadi Airlines ";
                        waktu = "\t = 07.00 --> 08.10 ";
                        kode = "\t = BDO    --> JOG ";
                        durasi = "\t = 1 jam 10 menit ";
                        harga = 1534900 ;
                    break;
                    case 2 :
                        n_maskapai = "\t = Lion JT ";
                        waktu = "\t = 09.10 --> 11.50 -- 12.50 --> 13.15 ";
                        kode = "\t = BDO   -->  DPS  --> YIA ";
                        durasi = "\t = 4 jam 5 menit ";
                        harga = 2824750 ;
                    break;
                    default :
                        n_maskapai = "\t === ";
                        waktu = "\t === ";
                        kode = "\t === ";
                        durasi = "\t === ";
                        harga = 0;
                    break;

                }
            }else{
                system("cls");
                garis();
                cout<<"\t\t Kota Asal dan Kota Tujuan Tidak Boleh Sama "<<endl;
                goto pilih_kota_asal;
            }
        }else if(kota_asal == " Yogyakarta "){
            if(kota_tujuan == " Jakarta "){
                garis();
                cout<<"\t1 = Lion Air "<<endl;
                cout<<"\t  = 08.55 --> 10.10 "<<endl;
                cout<<"\t  = YIA   --> CGK "<<endl;
                cout<<"\t  = 1 jam 15 menit "<<endl;
                cout<<"\t  = Harga : 674.288 "<<endl;
                garis();
                cout<<"\t2 = Super Air Jet "<<endl;
                cout<<"\t  = 11.00 --> 12.15 "<<endl;
                cout<<"\t  = YIA   --> CGK "<<endl;
                cout<<"\t  = 1 jam 15 menit "<<endl;
                cout<<"\t  = Harga : 875.283 "<<endl;
                garis();
                cout<<"\t3 = Batik Air "<<endl;
                cout<<"\t  = 12.30 --> 13.45 "<<endl;
                cout<<"\t  = YIA   --> HLP "<<endl;
                cout<<"\t  = 1 jam 15 menit "<<endl;
                cout<<"\t  = Harga : 1.091.288 "<<endl;
                garis();
                cout<<" Silahkan Pilih Maskapai [ 1,2,3 ] : ";
                cin>>p_maskapai;
                switch(p_maskapai){
                    case 1 :
                        n_maskapai = "\t = Lion Air ";
                        waktu = "\t = 08.55 --> 10.10 ";
                        kode = "\t = YIA    --> CGK ";
                        durasi = "\t = 1 jam 10 menit ";
                        harga =  674288 ;
                    break;
                    case 2 :
                        n_maskapai = "\t = Super Air Jet ";
                        waktu = "\t = 11.00 --> 12.15 ";
                        kode = "\t = YIA   --> CGK ";
                        durasi = "\t = 1 jam 15 menit ";
                        harga = 875283 ;
                    break;
                    case 3 :
                        n_maskapai = "\t = Batik Air ";
                        waktu = "\t = 12.30 --> 13.455 ";
                        kode = "\t = YIA    --> HLP ";
                        durasi = "\t = 1 jam 15 menit ";
                        harga =  1091288 ;
                    break;
                    default :
                        n_maskapai = "\t === ";
                        waktu = "\t === ";
                        kode = "\t === ";
                        durasi = "\t === ";
                        harga = 0;
                    break;

                }
            }else if(kota_tujuan == " Bandung "){
                garis();
                cout<<"\t1 = Wings Abadi Airlines "<<endl;
                cout<<"\t  = 07.00 --> 08.10 "<<endl;
                cout<<"\t  = JOG   --> BDO "<<endl;
                cout<<"\t  = 1 jam 10 menit "<<endl;
                cout<<"\t  = Harga : 1.534.900 "<<endl;
                garis();
                cout<<"\t2 = Lion JT"<<endl;
                cout<<"\t  = 09.10 --> 11.50 -- 12.50 --> 13.15 "<<endl;
                cout<<"\t  = YIA   -->  DPS  --> BDO "<<endl;
                cout<<"\t  = 4 jam 5 menit "<<endl;
                cout<<"\t  = Harga : 2.824.750 "<<endl;
                garis();
                cout<<" Silahkan Pilih Maskapai [ 1,2 ] : ";
                cin>>p_maskapai;
                switch(p_maskapai){
                    case 1 :
                        n_maskapai = "\t = Wings Abadi Airlines ";
                        waktu = "\t = 07.00 --> 08.10 ";
                        kode = "\t = JOG    --> BDO ";
                        durasi = "\t = 1 jam 10 menit ";
                        harga = 1534900 ;
                    break;
                    case 2 :
                        n_maskapai = "\t = Lion JT ";
                        waktu = "\t = 09.10 --> 11.50 -- 12.50 --> 13.15 ";
                        kode = "\t = YIA    -->  DPS  --> BDO ";
                        durasi = "\t = 4 jam 5 menit ";
                        harga = 2824750 ;
                    break;
                    default :
                        n_maskapai = "\t === ";
                        waktu = "\t === ";
                        kode = "\t === ";
                        durasi = "\t === ";
                        harga = 0;
                    break;

                }
            }else{
                system("cls");
                garis();
                cout<<"\t\t Kota Asal dan Kota Tujuan Tidak Boleh Sama "<<endl;
                goto pilih_kota_asal;
            }
        }else{
            system("cls");
            garis();
            cout<<"\t\t Kota Asal dan Kota Tujuan Tidak Boleh Sama "<<endl;
            goto pilih_kota_asal;
        }

    system("cls");
    garis();
    cout<<"\t "<<kota_asal<<" --> "<<kota_tujuan;
    cout<<endl;
    garis();

pesanan_saya :
    cout<<endl;
    garis();
    if(jml_penumpang >= 1){
        for(int i = 1; i <= jml_penumpang; i++){
            cout<<" Nama Penumpang "<< i <<" : "<<p[i].nama<<endl;
            cout<<" Nomor Induk Kependudukan : "<<p[i].pasport<<endl;
            cout<<n_maskapai<<endl;
            cout<<waktu<<endl;
            cout<<kode<<endl;
            cout<<durasi<<endl;
            cout<<"\t = Harga : "<<harga<<endl;
            garis();
        }
    }else if(jml_penumpang == 0){
        system("cls");
        garis();
        cout<<"\t\t\t Data Pesanan Kosong "<<endl;
        cout<<"\t\t Silahkan Pesan Tiket Terlebih Dahulu "<<endl;
        garis();
        goto pesan_tiket;
    }else{
        cout<<" Perintah Tidak Tersedia "<<endl;
        goto menu_utama;
    }

    cout<<endl;
    cout<<" Menu : "<<endl;
    cout<<" 1. Kembali Ke Menu"<<endl;
    cout<<" 2. Keluar "<<endl;
    cout<<" Pilih Menu : ";
    cin>>menu;
    system("cls");
    if (menu == 1){
        goto menu_utama;
    }else if(menu == 2){
        exit(0);
    }else{
        cout<<" Perintah Tidak Tersedia "<<endl;
        goto menu_utama;
    }

daftar_penumpang :
    header();
    if(jml_penumpang > 0){
        for(int i = 1; i <= jml_penumpang; i++){
            cout<<" Data Penumpang Ke "<< i <<endl;
            cout<<" Nomor Pasport : "<<p[i].pasport<<endl;
        }
        garis();

    }else if(jml_penumpang == 0){
        system("cls");
        garis();
        cout<<"\t\t\t Data Penumpang Kosong "<<endl;
        cout<<"\t\t Silahkan Tambahkan Penumpang Terlebih Dahulu "<<endl;
        garis();
        goto pesan_tiket;
    }



    cout<<" Cari Penumpang Berdasarkan No. passport : ";
    cin>>cari;


    ketemu=0;
    for (int i = 1; i <= jml_penumpang; i++){
        if (p[i].pasport == cari){
            garis();
            ketemu = 1;
            cout<<" Berada di indeks ke " << i  << ".\n";
            cout<<" Nama Penumpang : "<< p[i].nama;
            cout<<endl;
            garis();
          break;
        }
    }
    if(ketemu == 0){
        cout<<" Data penumpang tidak ditemukan "<<endl;
    }

    cout<<endl;
    garis();
    cout<<" Menu : "<<endl;
    cout<<" 1. Kembali Ke Menu"<<endl;
    cout<<" 2. Keluar "<<endl;
    cout<<" Pilih Menu : ";
    cin>>menu;
    system("cls");
    if (menu == 1){
        goto menu_utama;
    }else if(menu == 2){
        exit(0);
    }else{
        cout<<" Perintah Tidak Tersedia "<<endl;
    }


pembayaran :

    system("cls");
    garis();
    if(jml_penumpang >= 1){
        for(int i = 1; i <= jml_penumpang; i++){
            cout<<" Nama Penumpang "<< i <<" : "<<p[i].nama<<endl;
            cout<<" Nomor Induk Kependudukan : "<<p[i].pasport<<endl;
            cout<<n_maskapai<<endl;
            cout<<waktu<<endl;
            cout<<kode<<endl;
            cout<<durasi<<endl;
            cout<<"\t = Harga : "<<harga<<endl;
            garis();
        }

        harga_awal = (harga * jml_penumpang);
        diskon = 0.9 * harga_awal;
        total = harga_awal - diskon;
        cout<<" Total Pembayaran : Rp. "<< harga_awal <<endl;
        cout<<" Diskon Akhir Tahun 90% : Rp. "<< diskon <<endl;
        cout<<" Total Pembayaran Setelah Diskon : Rp. "<< total <<endl;
        garis();
        //printf("Jumlah yang harus dibayarkan: Rp.%d\n", bayar);

        bayar_kembali:
        cout<<" Masukkan jumlah uang yang ingin dibayarkan :Rp. ";
        cin>>uang;

        if (uang >= total)
        {
            cout<<" Kembalian anda: Rp. "<< uang - total;

        }else{
            cout<<" Maaf uang anda kurang, silakan masukan uang anda kembali\n";
            goto bayar_kembali;
        }


    }else if(jml_penumpang == 0){
        system("cls");
        garis();
        cout<<"\t\t\t Data Pesanan Kosong "<<endl;
        cout<<"\t\t Silahkan Pesan Tiket Terlebih Dahulu "<<endl;
        garis();
        goto pesan_tiket;
    }else{
        cout<<" Perintah Tidak Tersedia "<<endl;
        goto menu_utama;
    }

    cout<<endl;
    garis();
    cout<<" Menu : "<<endl;
    cout<<" 1. Kembali Ke Menu"<<endl;
    cout<<" 2. Keluar "<<endl;
    cout<<" Pilih Menu : ";
    cin>>menu;
    system("cls");
    if (menu == 1){
        goto menu_utama;
    }else if(menu == 2){
        exit(0);
    }else{
        cout<<" Perintah Tidak Tersedia "<<endl;
        goto menu_utama;
    }


}



//void displayData(Penumpang);


int main(){
    pilihan_maskapai();

    return 0;
}
