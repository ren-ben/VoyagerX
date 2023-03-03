#include <kipr/wombat.h>

int main() {
    folgen(); 
    return 0;
    
}

int folgen(){
	while(1){
    	int leftSensor = analog(4); 
        int middleSensor = analog(0); 
       	int rightSensor = analog(3); 
       
       	if(leftSensor > 1300 && middleSensor > 1500 && rightSensor > 1300){
           	motor(0, 50); 
            motor(1, 50); 
        }else if(leftSensor < 1100 && middleSensor > 1500 && rightSensor < 1100){
            motor(0, 50);
            motor(1, 50);
        }else if(leftSensor < 1300 && middleSensor < 1300){
           	motor(1, 50); 
            motor(0, 30); 
        }else if(rightSensor < 1300 && middleSensor <1300){
          	motor(1, 30); 
            motor(0, 50); 
        }else if(leftSensor < 1300 && middleSensor > 1500){
           	motor(1, 50); 
            motor(0, 40);
        }else if(leftSensor < 1300 && middleSensor > 1500){
           	motor(0, 50); 
            motor(1, 40);
        }else {
            motor(0, 0); 
            motor(1, 0); 
        	break; 
        }
    }
}
