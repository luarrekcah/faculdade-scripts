# Semáforo Inteligente

**Aluno:** Raul Rodrigues de Moraes  
**Matrícula:** 137902  
**Disciplina:** Sistemas Embarcados - Engenharia de Software  
**Professor:** Sr. Rold Jr.

---

## Objetivo

O objetivo deste projeto é implementar a lógica de um semáforo inteligente. A rotina deve garantir que o semáforo permaneça em seu estado de alerta (**vermelho**) por padrão. A transição para o estado livre (**verde**) deve ocorrer apenas quando um objeto for detectado pelo sensor continuamente por pelo menos **4 segundos**. Após a abertura, o semáforo permanece verde por **3 segundos** antes de retornar automaticamente ao estado original.

## Notas de Entrega

*   Todos os arquivos solicitados para a atividade foram incluídos na raiz do projeto.
*   A implementação garante que o ciclo se inicie com o LED vermelho ativo.

---

O semáforo já deve começar sua lógica com o led vermelho aceso. Logo foi adicionado ao projeto o seguinte:

```cpp
void setup() {
    // garante que ao iniciar, o semáforo esteja com o led vermelho aceso e o restante apagado.
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
}
```

Para o loop (execução constante) decidi começar com um if para verificar se o sensor detectou algo.

```cpp
void loop() {
  if (digitalRead(3) == HIGH) {
   
  }
}
```

Se durante o loop o sensor estiver com alta voltagem (HIGH), significa que um objeto foi
detectado. Logo, devemos verificar se a permanência é de 4s. Para isso, criei uma variável
`objetoPermanece` que será incrementada a cada 100ms. Se o objeto permanecer por 4s, a variável
será incrementada 40 vezes. Se o objeto não permanecer por 4s, a variável será decrementada
e o semáforo voltará ao seu estado original.

```cpp
    objetoPermanece = 1;
    for (counter = 0; counter < 40; ++counter) {
      delay(100); // Wait for 100 millisecond(s)
      if (digitalRead(3) == LOW) {
        objetoPermanece = 0;
      }
    }
```

Se o objeto permaneceu por 4s, o semáforo ficará verde por 3s e voltará ao seu estado original.

```cpp
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
```

O código completo pode ser localizado no arquivo `index.c++`.
Obrigado!