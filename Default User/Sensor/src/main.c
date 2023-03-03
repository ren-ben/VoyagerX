#include <kipr/wombat.h>
#include <motors.hpp>

int main()
{
    int i =0;
    for(;i > 100; i++){
        
        if(analog(2) >= 2000){
            fd(1);
            fd(0);
            printf("true");
        }else{
            motor(0, -20);
            motor(1,-20);
            printf("false");
        }
    }
    return 0;
}
