#ifndef ARDUINO_MOCK_H
#define ARDUINO_MOCK_H

#include <chrono>
#include <iostream>
#include <thread>

#define HIGH 0x1
#define LOW 0x0

#define INPUT 0x0
#define OUTPUT 0x1

void pinMode(int pin, int mode) {
  // std::cout << "pinMode: Pin " << pin << " set to " << (mode == OUTPUT ?
  // "OUTPUT" : "INPUT") << std::endl;
}

void digitalWrite(int pin, int val) {
  std::cout << "digitalWrite: Pin " << pin << " set to "
            << (val == HIGH ? "HIGH" : "LOW") << std::endl;
}

int digitalRead(int pin) {
  // For testing, simulate input if needed. Here we just return LOW.
  return LOW;
}

void delay(int ms) {
  std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

// Prototypes for functions defined in the user's .c++ file
void setup();
void loop();

int main() {
  setup();
  // Simulate a few loops
  for (int i = 0; i < 5; ++i) {
    loop();
  }
  std::cout << "Finished 5 loops of rotation." << std::endl;
  return 0;
}

#endif // ARDUINO_MOCK_H
