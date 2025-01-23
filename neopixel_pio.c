#include <stdio.h>
#include "pico/stdlib.h"
#include "include/matriz_led.h"
#include "include/animacao_relogio_teste.h"

int main() {

  // Inicializa entradas e saídas.
  stdio_init_all();

  // Inicializa matriz de LEDs NeoPixel.
  npInit(LED_PIN);

  while (true) {

    //animação
    clock_animation(400);
  }
}
