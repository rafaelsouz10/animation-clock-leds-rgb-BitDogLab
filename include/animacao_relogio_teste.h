#define BUZZER_PIN 21 // Pino GPIO conectado ao buzzer

// Inicializa o buzzer
void init_buzzer() {
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);
}

void buzzer_control(int BUZZER, int frequency, int duration_ms) {
    int period = 1000000 / frequency; // Período em microssegundos (1 milhão de microssegundos por segundo)
    int cycles = (duration_ms * 1000) / period; // Número de ciclos baseado na duração desejada

    for (int i = 0; i < cycles; i++) {
        gpio_put(BUZZER, 1); // Liga o buzzer (HIGH)
        sleep_us(period / 2); // Espera metade do período (meio ciclo)
        gpio_put(BUZZER, 0); // Desliga o buzzer (LOW)
        sleep_us(period / 2); // Espera a outra metade do período
        sleep_ms(5); // Adiciona um pequeno atraso de 5ms entre os ciclos
    }
}


// Reproduz o som "tic" ou "tac"
void play_tic_tac(bool is_tic, int sleep){
    sleep /= 2;
    if (is_tic) {
        // Toca o som do "tic"
        buzzer_control(BUZZER_PIN, 1000, sleep);  // Frequência 1000Hz por 200ms
    } else {
        // Toca o som do "tac"
        buzzer_control(BUZZER_PIN, 800, sleep);   // Frequência 800Hz por 200ms
    }
}


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