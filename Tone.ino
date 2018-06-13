//https://programmingelectronics.com/an-easy-way-to-make-noise-with-arduino-using-tone/
//A sketch to demonstrate the tone() function

//Specify digital pin on the Arduino that the positive lead of piezo buzzer is attached.
#define buzzer 9

void setup() {
   Serial.begin (9600);
pinMode(buzzer, OUTPUT);
}//close setup

void loop() {

  /*Tone needs 2 arguments, but can take three
    1) Pin#
    2) Frequency - this is in hertz (cycles per second) which determines the pitch of the noise made
    3) Duration - how long teh tone plays
  */
  tone(buzzer, 1000, 500);

  tone(buzzer, 3000, 500);

  tone(buzzer, 50000, 500);

  tone(buzzer, 65535, 500);

  tone(buzzer, 85000, 500);

  tone(buzzer, 95000, 500);


  delay(500);

}
