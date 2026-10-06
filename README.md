# ESP32 A4988 Stepper Motor Library

Biblioteca simples para controle de motores de passo utilizando o driver A4988 e o framework **ESP-IDF**.

A biblioteca permite:

- Inicializar os pinos de controle (`STEP`, `DIR`, `ENABLE`)
- Habilitar e desabilitar a alimentação do motor para economizar energia e reduzir aquecimento
- Controlar o sentido de rotação e quantidade de passos
- Ajustar a velocidade de rotação dinamicamente através do delay em microssegundos

Compatível com ESP32 utilizando ESP-IDF.

**Desenvolvido por:** Davy Guilherme