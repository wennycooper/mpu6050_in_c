# mpu6050_in_C #
This is a demo to access mpu6050 in C
with complimentary filter

## Requirements
1. wiringPi 


## Build Instruction:  ## 
gcc -o mpu6050 ./mpu6050.c ./motors.c  -lwiringPi -lpthread -lm


## Reference: ##
http://blog.bitify.co.uk/2013/11/reading-data-from-mpu-6050-on-raspberry.html


