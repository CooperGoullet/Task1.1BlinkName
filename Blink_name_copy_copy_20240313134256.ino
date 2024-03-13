/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void dash() 
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW); //dash
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100); //dot
  digitalWrite(LED_BUILTIN, LOW); 
}

void delay_between_character()
{
  delay(300);
}

void delay_between_dash_dot()
{
  delay(100);
}

//all letters
void a(){
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void b(){
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void c(){
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void d(){
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void e()
{
  dot();
  delay_between_character();
}

void f(){
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void g(){
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void h(){
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void i(){
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void j(){
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void k(){
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void l(){
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void m(){
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void n(){
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void o()
{
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void p()
{
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void q(){
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void r()
{
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void s(){
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void t(){
  dash();
  delay_between_character();
}

void u(){
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void v(){
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void w(){
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void x(){
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void y(){
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_character();
}

void z(){
  dash();
  delay_between_dash_dot();
  dash();
  delay_between_dash_dot();
  dot();
  delay_between_dash_dot();
  dot();
  delay_between_character();
}

void convertToMorse(char letter) {
  switch (letter) {
    case 'A': a(); break;
    case 'B': b(); break;
    case 'C': c(); break;
    case 'D': d(); break;
    case 'E': e(); break;
    case 'F': f(); break;
    case 'G': g(); break;
    case 'H': h(); break;
    case 'I': i(); break;
    case 'J': j(); break;
    case 'K': k(); break;
    case 'L': l(); break;
    case 'M': m(); break;
    case 'N': n(); break;
    case 'O': o(); break;
    case 'P': p(); break;
    case 'Q': q(); break;
    case 'R': r(); break;
    case 'S': s(); break;
    case 'T': t(); break;
    case 'U': u(); break;
    case 'V': v(); break;
    case 'W': w(); break;
    case 'X': x(); break;
    case 'Y': y(); break;
    case 'Z': z(); break;
    default: break; 
  }
}


void loop() {
  
  // c();
  // o();
  // o();
  // p();
  // e();
  // r();
    String name = Serial.readString(); 
    name.toUpperCase();
    // Iterate through each character of the input string
    for (int i = 0; i < name.length(); i++) {
      char letter = name.charAt(i);
      convertToMorse(letter);
      }
    delay(700);
  }
