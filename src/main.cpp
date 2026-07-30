#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(3000); // Attesa per dare tempo alla porta USB di inizializzarsi

  Serial.println("\n--- Test Memoria ESP32-S3 ---");
  
  // Ottiene la dimensione della PSRAM in byte
  uint32_t psram_size = ESP.getPsramSize();
  
  if (psram_size > 0) {
    Serial.printf("PSRAM Trovata: %d bytes (circa %d MB)\n", psram_size, psram_size / (1024 * 1024));
    Serial.printf("PSRAM Libera: %d bytes\n", ESP.getFreePsram());
  } else {
    Serial.println("Nessuna PSRAM rilevata su questa scheda.");
  }
}

void loop() {
  Serial.println("Esecuzione del loop principale...");
  delay(1000);
}