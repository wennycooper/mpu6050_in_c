# mpu6050_in_C #
This is a demo to access mpu6050 in C  
  
    mpu6050_accl.c: collect accelerometer information  
    mpu6050_gyro.c: collect gyrometer information


## Requirements
1. Raspberry Pi  
2. MPU6050
3. wiringPi 


## Build Instructions
    $ gcc -o mpu6050_accl ./mpu6050_accl.c  -lwiringPi -lpthread -lm   
    $ gcc -o mpu6050_gyro ./mpu6050_gyro.c  -lwiringPi -lpthread -lm


## References
http://blog.bitify.co.uk/2013/11/reading-data-from-mpu-6050-on-raspberry.html


