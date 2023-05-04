void setup() {
  // put your setup code here, to run once:
const int peace = 3;
const int snakeOne = 5;
const int snakeTwo = 6;

pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);

digitalWrite(peace, HIGH);
delay(10000);
digitalWrite(peace,LOW);
delay(500);
digitalWrite(snakeOne,HIGH);
delay(5000);
digitalWrite(snakeOne,LOW);
delay(500);
digitalWrite(snakeTwo,HIGH);
delay(5000);
digitalWrite(snakeTwo,LOW);


}

void loop() {
  // put your main code here, to run repeatedly:

}
