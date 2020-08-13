#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"

#include "simple_sample.h"

void app_main(void)
{
  ESP_LOGI("main", "This is app_main");
  printout_sample();
  while (1) {
    vTaskDelay(5000 / portTICK_PERIOD_MS);
  }
}
