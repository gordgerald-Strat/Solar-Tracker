// Pin configurations
const int ptLeftPin = A0;   // Left Phototransistor
const int ptRightPin = A1;  // Right Phototransistor
const int ptTopPin = A2;   // Top Phototransistor
const int ptBottomPin = A3;  // Bottem Phototransistor

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
}

void loop() {
  // Read raw light intensity values (0 to 1023)
  int ptLeft = analogRead(ptLeftPin);
  int ptRight = analogRead(ptRightPin);
  int ptTop = analogRead(ptTopPin);
  int ptBottem = analogRead(ptBottomPin);
 
 //N's repersent tuning, change them so when looking straight no waring appers
 //EXAMPE. Set the N's to 50 when using indoors for the brightest light source
 int n1 = 0;
 int n2 = 0;
  if (ptBottem >= (ptTop +n1)){
    Serial.println("down");
  } else if  (ptTop >= (ptBottem +n2)) {
    Serial.println("up");
  }
  
int n3 = 0;
int n4 = 0;
    if (ptRight >= (ptLeft +n3)){
    Serial.println("Right");
  } else if  (ptLeft >= (ptRight +n4)) {
    Serial.println("left");
  }
  
  
  delay(250); // Read 4 times per second
}
