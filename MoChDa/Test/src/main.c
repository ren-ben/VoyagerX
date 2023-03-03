#include <kipr/wombat.h>

int main() {
	enable_servo(0); 
    enable_servo(1); 
    
    set_servo_position(1, 1200); 
    set_servo_position(0, 1000); 
    msleep(1000); 
    
    int i;
    while(analog(1) < 3000){
        motor(0, 30); 
        motor(1, 30); 
    	if(analog(1) >= 1000){
    		set_servo_position(1, 2000); 
        	msleep(1000); 
            break; 
    	}
    }
    
    for(i = 0; i < 100; i++){
        motor(0, 0); 
        motor(1, 0); 
    	set_servo_position(0, 1000); 
        msleep(1000); 
        set_servo_position(0, 200); 
        msleep(1000); 
    }
    return 0;
}
