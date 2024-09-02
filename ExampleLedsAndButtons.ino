// Definir pines de entrada (pulsadores)
#define BUTTON_1 2
#define BUTTON_2 3
#define BUTTON_3 4

// Definir pines de salida (LEDs)
#define LED_1 5
#define LED_2 6
#define LED_3 7

void setup() {
    // Configurar pines de entrada
    pinMode(BUTTON_1, INPUT_PULLUP);
    pinMode(BUTTON_2, INPUT_PULLUP);
    pinMode(BUTTON_3, INPUT_PULLUP);

    // Configurar pines de salida
    pinMode(LED_1, OUTPUT);
    pinMode(LED_2, OUTPUT);
    pinMode(LED_3, OUTPUT);
}

void loop() {
    // Leer el estado de cada botón
    int buttonState1 = digitalRead(BUTTON_1);
    int buttonState2 = digitalRead(BUTTON_2);
    int buttonState3 = digitalRead(BUTTON_3);

    // Controlar LEDs en función del botón presionado
    if (buttonState1 == LOW) {
        digitalWrite(LED_1, HIGH); // Encender LED 1
    } else {
        digitalWrite(LED_1, LOW); // Apagar LED 1
    }

    if (buttonState2 == LOW) {
        digitalWrite(LED_2, HIGH); // Encender LED 2
    } else {
        digitalWrite(LED_2, LOW); // Apagar LED 2
    }

    if (buttonState3 == LOW) {
        digitalWrite(LED_3, HIGH); // Encender LED 3
    } else {
        digitalWrite(LED_3, LOW); // Apagar LED 3
    }
}
