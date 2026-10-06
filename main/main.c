#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "a4988.h"

a4988_t motor;

void app_main(void) {
    // Inicialização (STEP=26, DIR=25, ENABLE=27, Delay=2000 us)
    a4988_init(&motor, GPIO_NUM_26, GPIO_NUM_25, GPIO_NUM_27, 2000);

    while (1) {
        printf("Girando no sentido Horario (600 passos)...\n");
        a4988_step(&motor, 600, A4988_DIR_HOR);

        // Desabilita o motor enquanto espera para evitar aquecimento
        a4988_disable(&motor);
        vTaskDelay(pdMS_TO_TICKS(2000));

        printf("Girando no sentido Anti-Horario (300 passos)...\n");
        a4988_step(&motor, 300, A4988_DIR_ANT);

        a4988_disable(&motor);
        vTaskDelay(pdMS_TO_TICKS(2000));
    }
}