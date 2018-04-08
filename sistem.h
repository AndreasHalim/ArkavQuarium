//uang, telur, kondisi menangkalah, informasi permainan

#ifndef SISTEM_H
#define SISTEM_H

class SISTEM {
private :
    int uang;
    int sumTelur;
    bool winCondition;
    int sumIkan; //Buat cek jumlah ikan yang dipunya, biar g usah cek Akuarium, tapi kalau mau cek aja gpp jg
    //tombol-tombol permainan
public :
    SISTEM(int money);

    void addMoney(int value);
    void spendMoney(int value);
    void buyEgg(int eggPrice);
    bool checkWinLose();
};

#endif
