from machine import Pin
import utime

relay1 = Pin(6, Pin.OUT)  #set pin GP6 as output
relay2 = Pin(7, Pin.OUT)  #set pin GP7 as output


while True:
    relay1(1)  # Turn on Relay1
    relay2(1)  # Turn on Relay2
    utime.sleep(0.5)
    relay1(0)  # Turn off Relay1
    relay2(0)  # Turn off Relay2
    utime.sleep(0.5)
