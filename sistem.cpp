#include "sistem.h"
#include <iostream>
//uang, telur, kondisi menangkalah, informasi permainan
    SISTEM::SISTEM(int money){
        uang = money;
        winCondition=false;
        sumTelur=0;
        sumIkan=0;
    }

    void SISTEM::addMoney(int value){
        uang += value;
    }
    void SISTEM::spendMoney(int value){
        if (value<=this->uang){
            uang -= value;
        }
        else{
            std::cout << "Uang tidak mencukupi" << std::endl;
        }
    }
    void SISTEM::buyEgg(int eggPrice){
        if (eggPrice<=this->uang){
            uang -= eggPrice;
            sumTelur += 1;
        }
    }

    //KALAU KELUARAN FALSE MAKA KALAH
    bool SISTEM::checkWinLose(){
        if(sumTelur>=3){
            winCondition=true;
            return true;
        }
        else{
            if(sumIkan==0 && uang < 500){
                //500 MISALKAN HARGA GUPPY
                return false;
            }
            else{
                return true;
            }
        }
    }
