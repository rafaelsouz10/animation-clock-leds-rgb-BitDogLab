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