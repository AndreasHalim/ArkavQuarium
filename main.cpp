#include "oop.hpp"
#include <iostream>
#include <math.h>
#include <sstream>
#include <time.h>
#include <cstdlib>
#include <stdio.h>

const double speed = 50; // pixels per second

int main( int argc, char* args[] )
{
    init();
    srand (time(NULL));
    double vrandx = SCREEN_HEIGHT / 2;
    double vrandy = SCREEN_WIDTH / 2;
    bool random = false;

    // Menghitung FPS
    int frames_passed = 0;
    double fpc_start = time_since_start();
    std::string fps_text = "FPS: 0";

    // Posisi ikan
    double cy = SCREEN_HEIGHT / 2;
    double cx = SCREEN_WIDTH / 2;

    bool running = true;

    double prevtime = time_since_start();

    while (running) {
        double now = time_since_start();
        double sec_since_last = now - prevtime;
        prevtime = now;

        handle_input();
        if (quit_pressed()) {
            running = false;
        }


        if(random){
            vrandx = rand() % SCREEN_WIDTH;
            vrandy = rand() % SCREEN_HEIGHT;
        }

        if(random){
            random = false;
        }
        else{
            if(vrandx < cx+(speed * sec_since_last) && vrandx < cx-(speed * sec_since_last)){
                cx = cx - speed * sec_since_last;
                if(vrandy < cy+(speed * sec_since_last) && vrandy < cy-(speed * sec_since_last)){
                    cy = cy - speed * sec_since_last;
                }
                else if(vrandy > cy+(speed * sec_since_last) && vrandy > cy-(speed * sec_since_last)){
                    cy = cy + speed * sec_since_last;
                }
            }
            else if(vrandx > cx+(speed * sec_since_last) && vrandx > cx-(speed * sec_since_last)){
                cx = cx + speed * sec_since_last;
                if(vrandy < cy+(speed * sec_since_last) && vrandy < cy-(speed * sec_since_last)){
                    cy = cy - speed * sec_since_last;
                }
                else if(vrandy > cy+(speed * sec_since_last) && vrandy > cy-(speed * sec_since_last)){
                    cy = cy + speed * sec_since_last;
                }
            }
            else {
                    random = true;
                if(vrandy < cy+(speed * sec_since_last) && vrandy < cy-(speed * sec_since_last)){
                    cy = cy - speed * sec_since_last;
                }
                else if(vrandy > cy+(speed * sec_since_last) && vrandy > cy-(speed * sec_since_last)){
                    cy = cy + speed * sec_since_last;
                }
                else{
                    random = true;
                }
            }
        }

        // Gerakkan ikan selama tombol panah ditekan
        // Kecepatan dikalikan dengan perbedaan waktu supaya kecepatan ikan
        // konstan pada komputer yang berbeda.
        for (auto key : get_pressed_keys()) {
            switch (key) {
            case SDLK_UP:
                cy -= speed * sec_since_last;
                break;
            case SDLK_DOWN:
                cy += speed * sec_since_last;
                break;
            case SDLK_LEFT:
                cx -= speed * sec_since_last;
                break;
            case SDLK_RIGHT:
                cx += speed * sec_since_last;
                break;
            }
        }

        // Proses masukan yang bersifat "tombol"
        for (auto key : get_tapped_keys()) {
            switch (key) {
            // r untuk reset
            case SDLK_r:
                cy = SCREEN_HEIGHT / 2;
                cx = SCREEN_WIDTH / 2;
                break;
            // x untuk keluar
            case SDLK_x:
                running = false;
                break;
            case SDLK_g:
                break;
            }
        }

        // Update FPS setiap detik
        frames_passed++;
        if (now - fpc_start > 1) {
            std::ostringstream strs;
            strs << "FPS: " ;
            strs << frames_passed/(now - fpc_start);
            fps_text = strs.str();;
            fpc_start = now;
            frames_passed = 0;
        }

        // Gambar ikan di posisi yang tepat.
        clear_screen();
        draw_text("Panah untuk bergerak, r untuk reset, x untuk keluar", 18, 10, 10, 0, 0, 0);
        draw_text(fps_text, 18, 10, 30, 0, 0, 0);
        draw_image("ikan.png", cx, cy);
        update_screen();
    }

    close();

    return 0;
}

