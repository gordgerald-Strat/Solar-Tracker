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
  
  // Calculate raw tracking delta
  int trackingDelta = ptLeft - ptRight;
  int trackingAlpha = ptTop = ptBottem;
  
  // Print formatted output for easy reading or plotting
  Serial.print("Left:");
  Serial.print(ptLeft);
  Serial.print(" | Right:");
  Serial.print(ptRight);
  Serial.print(" | TrackingDelta:");
  Serial.print(trackingDelta);
  Serial.print("Top:");
  Serial.print(ptTop);
  Serial.print(" | Bottem:");
  Serial.print(ptBottem);
  Serial.print(" | TrackingAlpha:");
  Serial.println(trackingAlpha);
  
  
  delay(250); // Read 4 times per second
}
