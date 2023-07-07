#include <Arduino.h>

#define FRIN1 PB13
#define FRIN2 PB12
#define FRPWM PB1

#define FSIN1 PB15
#define FSIN2 PB14
#define FSPWM PB0

#define FTIN1 PA9
#define FTIN2 PA8
#define FTPWM PA7

double formaTriangular(int angulo) {
    double valor = 0;
    
    return valor;
}

void setup() {
    pinMode(FRIN1, OUTPUT);
    pinMode(FRIN2, OUTPUT);
    pinMode(FRPWM, OUTPUT);

    pinMode(FSIN1, OUTPUT);
    pinMode(FSIN2, OUTPUT);
    pinMode(FSPWM, OUTPUT);

    pinMode(FTIN1, OUTPUT);
    pinMode(FTIN2, OUTPUT);
    pinMode(FTPWM, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    for(int i = 0; i< 360; i++) {
        if(sin(i) < formaTriangular(i)) {
            digitalWrite(FRIN1, HIGH);
            digitalWrite(FRIN2, LOW);
        } else {
            digitalWrite(FRIN1, LOW);
            digitalWrite(FRIN2, HIGH);
        }
        if(sin(i+120) < formaTriangular(i+120)) {
            digitalWrite(FSIN1, HIGH);
            digitalWrite(FSIN2, LOW);
        } else {
            digitalWrite(FSIN1, LOW);
            digitalWrite(FSIN2, HIGH);
        }
        if(sin(i-120) < formaTriangular(i-120)) {
            digitalWrite(FTIN1, HIGH);
            digitalWrite(FTIN2, LOW);
        } else {
            digitalWrite(FTIN1, LOW);
            digitalWrite(FTIN2, HIGH);
        }
    }
}