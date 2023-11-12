//
// Created by robbe on 12/11/2023.
//

#include "Servo.h"

int main() {
    Servo servo;
    uint SERVO_1_PIN = 0;

    servo.attach(SERVO_1_PIN, 1000, 2000);

    uint pos = 0;
    uint direction = 1;
    while (true) {
        servo.write(pos);
        pos = pos + (1 * direction);
        if (pos == 180) {
            direction = -1;
        } else if (pos == 0) {
            direction = 1;
        }
        sleep_ms(15);

    return 0;
}