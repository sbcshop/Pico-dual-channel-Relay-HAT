
/**
 * Project   :- PICO TWO CHANNEL RELAY HAT
 * Developed :- SB_COMPONENTS
 * Date      :- 21/06/2021
 * Firmware  :- Demo code for PICO Relay HAT
 */
#include <stdio.h>
#include "pico/stdlib.h"
const uint relay_PIN1 = 6;
const uint relay_PIN2 = 7;

int main()
{
    gpio_init(relay_PIN1);
    gpio_init(relay_PIN2);
    gpio_set_dir(relay_PIN1, GPIO_OUT);
    gpio_set_dir(relay_PIN2, GPIO_OUT);
    stdio_init_all();
    while(1)
    {
        gpio_put(relay_PIN1, 1);
        gpio_put(relay_PIN2, 1);
        puts("Relay On\n");
        sleep_ms(1000);
        gpio_put(relay_PIN1, 0);
        gpio_put(relay_PIN2, 0);
        puts("Relay Off\n");
        sleep_ms(1000);
    }
    return 0;
}
