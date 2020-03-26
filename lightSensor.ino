iint lightSensor = A1; //set analog pin 1 to the light sensor input

void setup() {
    
    pinMode(lightSensor, INPUT); //set the analog pin to input for sensing light from a analog light sensor
}

void loop() {
    
    String luxValue =  String(analogRead(lightSensor), DEC); // create a string from reading the light sensor, (converts a int to a sting with a base)
    
    Particle.publish("light", luxValue, PRIVATE); // push and publish the 
    
    delay(30000); // take a reading every 30 seconds
    
}