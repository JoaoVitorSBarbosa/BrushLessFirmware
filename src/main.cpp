#include <Arduino.h>

#include "../lib/defines.h"

double tempo = 0;

uint16 getTensao(uint8 pin) {
    uint16 tensao = 0;
    tensao = (analogRead(pin) * 0.00080567) / 0.1;
    return tensao;   
}
void etapa1() {
    Serial.println("---------------------------------");
    Serial.println("Passo 1");
    digitalWrite(FRIN1, HIGH);
    digitalWrite(FRIN2, LOW);

    digitalWrite(FSIN1, LOW);
    digitalWrite(FSIN2, HIGH);

    digitalWrite(FTIN1, HIGH);
    digitalWrite(FTIN2, LOW);
    while (millis() - tempo < 10);
    
    
}

void etapa2() {
    Serial.println("---------------------------------");
    Serial.println("Passo 2");
    digitalWrite(FRIN1, HIGH);
    digitalWrite(FRIN2, LOW);

    digitalWrite(FSIN1, LOW);
    digitalWrite(FSIN2, HIGH);

    digitalWrite(FTIN1, LOW);
    digitalWrite(FTIN2, HIGH);
    while (millis() - tempo < 10);
}

void etapa3() {
    Serial.println("---------------------------------");
    Serial.println("Passo 3");
    digitalWrite(FRIN1, HIGH);
    digitalWrite(FRIN2, LOW);

    digitalWrite(FSIN1, HIGH);
    digitalWrite(FSIN2, LOW);

    digitalWrite(FTIN1, LOW);
    digitalWrite(FTIN2, HIGH);
    while (millis() - tempo < 10);
}

void etapa4() {
    Serial.println("---------------------------------");
    Serial.println("Passo 4");
    digitalWrite(FRIN1, LOW);
    digitalWrite(FRIN2, HIGH);

    digitalWrite(FSIN1, HIGH);
    digitalWrite(FSIN2, LOW);

    digitalWrite(FTIN1, HIGH);
    digitalWrite(FTIN2, LOW);
    while (millis() - tempo < 10);
}

void etapa5() {
    Serial.println("---------------------------------");
    Serial.println("Passo 5");
    digitalWrite(FRIN1, LOW);
    digitalWrite(FRIN2, HIGH);

    digitalWrite(FSIN1, HIGH);
    digitalWrite(FSIN2, LOW);

    digitalWrite(FTIN1, HIGH);
    digitalWrite(FTIN2, LOW);
    while (millis() - tempo < 10);
}

void etapa6() {
    Serial.println("---------------------------------");
    Serial.println("Passo 6");
    digitalWrite(FRIN1, LOW);
    digitalWrite(FRIN2, HIGH);

    digitalWrite(FSIN1, LOW);
    digitalWrite(FSIN2, HIGH);

    digitalWrite(FTIN1, HIGH);
    digitalWrite(FTIN2, LOW);
    while (millis() - tempo < 10);
}

void setup() {
    pinMode(FRIN1, PWM);
    pinMode(FRIN2, OUTPUT);
    pinMode(FRCRR, INPUT);

    pinMode(FSIN1, PWM);
    pinMode(FSIN2, OUTPUT);
    pinMode(FSCRR, INPUT);

    pinMode(FTIN1, PWM);
    pinMode(FTIN2, OUTPUT);
    pinMode(FTCRR, INPUT);
    Serial.begin(9600);
}

void loop() {

    etapa1();
    etapa2();
    etapa3();
    etapa4();
    etapa5();
    etapa6();

}

