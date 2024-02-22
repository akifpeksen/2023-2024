const int ledPin1 = 2;  // Pin declarations and conter variable that counts points
const int ledPin2 = 3;
const int ledPin3 = 4;
const int ledPin4 = 5;
int counter = 0;

const int trigPin1 = 6;  // Ultrasonic Sensor trigger and echo pin declarations
const int echoPin1 = 7; 

const int trigPin2 = 8;  
const int echoPin2 = 9;

const int trigPin3 = 10;  
const int echoPin3 = 11;

const int trigPin4 = 12;
const int echoPin4 = 13;

void setup() {
  pinMode(ledPin1, OUTPUT); // Led pins set to output mode
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  
  pinMode(trigPin1, OUTPUT);  // Setting the trig and echo pins of the Ultrasonic Sensors for output and input mode
  pinMode(echoPin1, INPUT);

  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);

  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);

  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);

  randomSeed(analogRead(0));  // Function to create a random number

  Serial.begin(9600); // Serial Communication starts
}

float measureDistance(int trigPin, int echoPin) { // Function to measure distance using Ultrasonic Sensors
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  float duration = pulseIn(echoPin, HIGH); // Measuring the duration of the signal from the echo pin
  float distance = (duration * 0.0343) / 2; //Measuring the distance (speed of the sound wave=0.343 m/s)

  return distance;
}

void led1() {                     
  digitalWrite(ledPin1, HIGH);
  delay(600);
  digitalWrite(ledPin1, LOW);
  float distance = measureDistance(trigPin1, echoPin1);
  Serial.print("1 nolu LED yandı, Mesafe: ");
  Serial.print(distance);
  if (distance < 17) {
    Serial.println(" cm - Başarılı");
    counter++;
  } else {
    Serial.println(" cm");
  }
}

void led2() {
  digitalWrite(ledPin2, HIGH);
  delay(600);
  digitalWrite(ledPin2, LOW);
  float distance = measureDistance(trigPin2, echoPin2);
  Serial.print("2 nolu LED yandı, Mesafe: ");
  Serial.print(distance);
  if (distance < 17) {
    Serial.println(" cm - Başarılı");
    counter++;
  } else {
    Serial.println(" cm");
  }
}

void led3() {
  digitalWrite(ledPin3, HIGH);
  delay(600);
  digitalWrite(ledPin3, LOW);
  float distance = measureDistance(trigPin3, echoPin3);
  Serial.print("3 nolu LED yandı, Mesafe: ");
  Serial.print(distance);
  if (distance < 17) {
    Serial.println(" cm - Başarılı");
    counter++;
  } else {
    Serial.println(" cm");
  }
}

void led4() {
  digitalWrite(ledPin4, HIGH);
  delay(600);
  digitalWrite(ledPin4, LOW);
  float distance = measureDistance(trigPin4, echoPin4);
  Serial.print("4 nolu LED yandı, Mesafe: ");
  Serial.print(distance);
  if (distance < 17) {
    Serial.println(" cm - Başarılı");
    counter++;
  } else {
    Serial.println(" cm");
  }
}

void game(){      // Function that runs the game

 for(int i = 1; i < 21; i++){
    int randomLED = random(1, 5);
   switch (randomLED) {
    case 1:
      led1();
      break;
    case 2:
      led2();
      break;
    case 3:
      led3();
      break;
    case 4:
      led4();
      break;
  }

  int led_time = random(20,50); // Setting random delay times between 0.4 - 2.5 seconds 
  delay((led_time)*(led_time));
  } 
}

void loop() {
  digitalWrite(A2,HIGH);  // Turning individual leds on to notify the player
  delay(1000);
  digitalWrite(A3,HIGH);  
  delay(1000);
  digitalWrite(A1,HIGH);  
  delay(1000);
  digitalWrite(A0,HIGH);  
  delay(2000);
  digitalWrite(A3,LOW);
  digitalWrite(A2,LOW);
  digitalWrite(A1,LOW);
  digitalWrite(A0,LOW);

  game(); // Run the game
  Serial.print(counter); // Show the result/score of the player
  Serial.println("/20"); 

  if(counter <= 10){    // Turn on the related central led (Non-mole led) based on the player's score              
  delay(2000);
  digitalWrite(A2,HIGH);  // 0-10 Red , 11-15 Yellow , 16-19 Green , 20 White
  }
  else if(counter <= 15){
  delay(2000);
  digitalWrite(A3,HIGH); 
  }
  else if(counter < 20){
  delay(2000);
  digitalWrite(A1,HIGH); 
  }
  else if(counter == 20){
  delay(2000);
  digitalWrite(A0,HIGH); 
  }
  
  while(1)  // Infinite loop to wait for user action (unplugging or reset button)
  {}
}
