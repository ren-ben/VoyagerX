#include <kipr/wombat.h>


int main()
{
    // initialize motors
    

    // variables to store sensor data
    int leftSensor, middleSensor, rightSensor;

    while(1) {
        // read sensor data
        leftSensor = analog(4);
        middleSensor = analog(5);
        rightSensor = analog(3);
        // check if the middle sensor is on the black line
		printf("leftSensor %d\n",leftSensor);
        printf("middleSensor %d\n",middleSensor);
        printf("rightSensor %d\n",rightSensor);
        msleep(1);
    }
    return 1;
}
