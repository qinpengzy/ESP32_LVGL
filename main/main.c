#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "freertos/queue.h"

#include "lvglui_ili9341.h"
#include "WifiHandler.h"


void app_main(void)
{

    xTaskCreatePinnedToCore(gui_task, "gui task", 1024 * 4, NULL, 1, NULL, 0);
    mqtt_start();

    while(1){
        vTaskDelay(100);
    }
}