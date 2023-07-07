#include <Arduino.h>
#include <math.h>

#define FRIN1 PB13
#define FRIN2 PB12
#define FRPWM PB1

#define FSIN1 PB15
#define FSIN2 PB14
#define FSPWM PB0

#define FTIN1 PA9
#define FTIN2 PA8
#define FTPWM PA7

void teste() {
    while (true) {
        digitalWrite(FRIN1, HIGH);
        digitalWrite(FRIN2, LOW);
        digitalWrite(FRPWM, HIGH);

        digitalWrite(FSIN1, HIGH);
        digitalWrite(FSIN2, LOW);
        digitalWrite(FSPWM, HIGH);

        digitalWrite(FTIN1, HIGH);
        digitalWrite(FTIN2, LOW);
        digitalWrite(FTPWM, HIGH);
    }
}
void etapa1() {
    Serial.println("Passo 1");
    digitalWrite(FRIN1, HIGH);
    digitalWrite(FRIN2, LOW);
    digitalWrite(FRPWM, HIGH);

    digitalWrite(FSIN1, LOW);
    digitalWrite(FSIN2, HIGH);
    digitalWrite(FSPWM, HIGH);

    digitalWrite(FTIN1, HIGH);
    digitalWrite(FTIN2, LOW);
    digitalWrite(FTPWM, HIGH);
}

void etapa2() {
    Serial.println("Passo 2");
    digitalWrite(FRIN1, HIGH);
    digitalWrite(FRIN2, LOW);
    digitalWrite(FRPWM, HIGH);

    digitalWrite(FSIN1, LOW);
    digitalWrite(FSIN2, HIGH);
    digitalWrite(FSPWM, HIGH);

    digitalWrite(FTIN1, LOW);
    digitalWrite(FTIN2, HIGH);
    digitalWrite(FTPWM, HIGH);
}

void etapa3() {
    Serial.println("Passo 3");
    digitalWrite(FRIN1, HIGH);
    digitalWrite(FRIN2, LOW);
    digitalWrite(FRPWM, HIGH);

    digitalWrite(FSIN1, HIGH);
    digitalWrite(FSIN2, LOW);
    digitalWrite(FSPWM, HIGH);

    digitalWrite(FTIN1, LOW);
    digitalWrite(FTIN2, HIGH);
    digitalWrite(FTPWM, HIGH);
}

void etapa4() {
    Serial.println("Passo 4");
    digitalWrite(FRIN1, LOW);
    digitalWrite(FRIN2, HIGH);
    digitalWrite(FRPWM, HIGH);

    digitalWrite(FSIN1, LOW);
    digitalWrite(FSIN2, HIGH);
    digitalWrite(FSPWM, HIGH);

    digitalWrite(FTIN1, LOW);
    digitalWrite(FTIN2, HIGH);
    digitalWrite(FTPWM, HIGH);
}

void etapa5() {
    Serial.println("Passo 5");
    digitalWrite(FRIN1, LOW);
    digitalWrite(FRIN2, HIGH);
    digitalWrite(FRPWM, HIGH);

    digitalWrite(FSIN1, HIGH);
    digitalWrite(FSIN2, LOW);
    digitalWrite(FSPWM, HIGH);

    digitalWrite(FTIN1, HIGH);
    digitalWrite(FTIN2, LOW);
    digitalWrite(FTPWM, HIGH);
}

void etapa6() {
    Serial.println("Passo 6");
    digitalWrite(FRIN1, LOW);
    digitalWrite(FRIN2, HIGH);
    digitalWrite(FRPWM, HIGH);

    digitalWrite(FSIN1, LOW);
    digitalWrite(FSIN2, HIGH);
    digitalWrite(FSPWM, HIGH);

    digitalWrite(FTIN1, HIGH);
    digitalWrite(FTIN2, LOW);
    digitalWrite(FTPWM, HIGH);
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
    //teste();
    etapa1();
    delayMicroseconds(10000);
    etapa2();
    delayMicroseconds(10000);
    etapa3();
    delayMicroseconds(10000);
    etapa4();
    delayMicroseconds(10000);
    etapa5();
    delayMicroseconds(10000);
    etapa6();
    delayMicroseconds(9000);
}