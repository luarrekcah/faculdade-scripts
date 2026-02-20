#include "arduino_mock.h"
// C++ code

/*
SEMÁFORO INTELIGENTE
Aluno: Raul Rodrigues de Moraes
Matrícula: 137902
Matéria: SISTEMAS EMBARCADOS - ENGENHARIA DE SOFTWARE
Professor: Sr. Rold Jr.

== OBJETIVO ==
A rotina deve ser tal que o semáforo permaneça vermelho
até que algum objeto se aproxime do sensor por 4s. Se isto
acontecer o semáforo fica verde por 3s e volta ao seu estado
original (vermelho).

== NOTAS ==
Todos os arquivos solicitados pelo envio da atividade foram adicionados a raiz do projeto.
*/

int objetoPermanece = 0; // também poderia ter adotado uma abordagem com variáveis booleanas.

int counter;

void setup() {
// apesar do uso do pino com o led amarelo não foi um requisito do objetivo e não foi utilizado.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);

  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
}

void loop() {
  if (digitalRead(3) == HIGH) {
    objetoPermanece = 1;
    for (counter = 0; counter < 40; ++counter) {
      delay(100); // Wait for 100 millisecond(s)
      if (digitalRead(3) == LOW) {
        objetoPermanece = 0;
      }
    }
    if (objetoPermanece == 1) {
      digitalWrite(0, LOW);
      digitalWrite(1, LOW);
      digitalWrite(2, HIGH);
      delay(3000); // Wait for 3000 millisecond(s)
      digitalWrite(0, HIGH);
      digitalWrite(1, LOW);
      digitalWrite(2, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
    }
  }
}