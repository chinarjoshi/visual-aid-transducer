//by cjoshi
#include <Adafruit_MotorShield.h>
#include <Wire.h>
#include <stdio.h>

//testing
void Sense(int i);

typedef enum
{
  kTotalSensors = 6,
  kTotalShields = 3,
  kBufferSize = 50
}

// pin number on arduino must be predefined
int trigPin[kTotalSensors] = {1, 3, 5, 7, 9, 11};
int echoPin[kTotalSensors] = {0, 2, 4, 6, 8, 10};

void setup()
{
  // defines all trigpins as output and all echopins as input
    for (int j = 0; j < total; j++)
    {
        pinMode(trigPin[j], OUTPUT);
        pinMode(echoPin[j], INPUT);
    }
    Serial.begin(9600);
    // instantiates the motorshield objects and provides the address to the constructor
    Adafruit_MotorShield AFMSbot(0x60);
    Adafruit_MotorShield AFMS(0x61);
    Adafruit_MotorShield AFMStop(0x62);

    AFMS.begin();
    AFMStop.begin();
    AFMSbot.begin();

    char motor[kTotalMotors];
    for (int f = 0; f <= kTotalMotors; f++)
    {
      if (f < 4)
        {
          Adafruit_DCMotor *motor[f] = AFMSbot.getMotor(f);
        }
      else if (f < 8)
        {
          Adafruit_DCMotor *motor[f] = AFMS.getMotor(f);
        }
      else
        {
          Adafruit_DCMotor *motor[f] = AFMStop.getMotor(f);
        }
    }
}

void loop()
{
  char buffer[kBufferSize]; // holds the formatted string of distance values
  int duration[kTotalSensors]; // array of integers to hold duration values
  int distance[kTotalSensors]; // holds distance values

    for (int i = 0; i < total; i++)
    {
        Sense(i);

        sprintf(buffer," D%i: %i", i + 1, distance[i]);
        Serial.print(buffer);

        motor[i]->setSpeed(150 - (distance[i] / 2));
        motor[i]->run(FORWARD);
    }
    Serial.println();
}

void Sense(int i)
{
    digitalWrite(trigPin[i], LOW); delayMicroseconds(2);
    digitalWrite(trigPin[i], HIGH); delayMicroseconds(10);
    digitalWrite(trigPin[i], LOW);
}
