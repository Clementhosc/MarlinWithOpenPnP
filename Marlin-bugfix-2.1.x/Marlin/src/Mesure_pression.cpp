// #include <Arduino.h>
// #include "src/pins/stm32f4/pins_MARLIN_WITH_OPENPNP.h"

// -------------------------------
// Mesurer la pression du tank
// -------------------------------
// void mesurerPressionTank() {
//     int valeurADC = analogRead(PS_TANK);
//     Serial.print("Pression Tank (ADC) : ");
//     Serial.println(valeurADC);
// }

// -------------------------------
// Détecter la présence d’une pièce (digital)
// -------------------------------
// void detecterPiece(int pinVacuum) {
//     int etat = digitalRead(pinVacuum);

//     Serial.print("Vacuum pin ");
//     Serial.print(pinVacuum);
//     Serial.print(" = ");
//     Serial.println(etat);

//     if (etat == HIGH) {
//         Serial.println("Pièce présente");
//     } else {
//         Serial.println("Aucune pièce détectée");
//     }
// }

// void setup() {
//     Serial.begin(115200);

//     // PA0 : entrée analogique
//     pinMode(PS_TANK, INPUT);

//     // PA1 & PA2 : entrées digitales
//     pinMode(PS_VACUUM_1, INPUT);
//     pinMode(PS_VACUUM_2, INPUT);
// }

// void loop() {
//     mesurerPressionTank();

    
//     detecterPiece(PS_VACUUM_2);

//     delay(500);
// }