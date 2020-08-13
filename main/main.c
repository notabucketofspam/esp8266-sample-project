#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "simple_sample.h"

void app_main(void)
{
    printf_sample();
    while (1) {
        vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}
