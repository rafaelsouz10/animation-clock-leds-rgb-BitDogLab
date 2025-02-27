#include "include/buzzer_tic_tac.h"

int frame1[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {248, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},  
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
};

int frame2[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {248, 0, 0}, {248, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
};

int frame3[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {248, 0, 0}}
};

int frame4[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}}
};

int frame5[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{248, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
};

int frame6[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{248, 0, 0}, {248, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
};

int frame7[5][5][3] = {
    {{248, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
};

int frame8[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}
};

int frame9[5][5][3] = {
    {{248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}},
    {{0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}},
    {{248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}},
    {{0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}},
    {{248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}}
};

int frame10[5][5][3] = {
    {{0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}},
    {{248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}},
    {{0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}},
    {{248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}},
    {{0, 0, 0}, {248, 0, 0}, {0, 0, 0}, {248, 0, 0}, {0, 0, 0}}
};

void clock_animation(int sleep){
    bool is_tic = true; // Alterna entre "tic" e "tac"

    print_sprite(frame1); //Desenha o Sprite contido no frame
    npWrite();  // Escreve os dados nos LEDs.
    play_tic_tac(is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();

    print_sprite(frame2);
    npWrite();
    play_tic_tac(!is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();

    print_sprite(frame3);
    npWrite();
    play_tic_tac(is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();

    print_sprite(frame4);
    npWrite();
    play_tic_tac(!is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();
    
    print_sprite(frame5);
    npWrite();
    play_tic_tac(is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();

    print_sprite(frame6);
    npWrite();
    play_tic_tac(!is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();
    
    print_sprite(frame7);
    npWrite();
    play_tic_tac(is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();

    print_sprite(frame8);
    npWrite();
    play_tic_tac(!is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();

    print_sprite(frame9);
    npWrite();
    play_tic_tac(is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();

    print_sprite(frame10);
    npWrite();
    play_tic_tac(!is_tic, sleep);    // Reproduz o som "tic" ou "tac"
    sleep_ms(sleep);
    npClear();
}