# Checkpoint - Vinheria Agnello

Este é um projeto de um dispositivo de monitoramento para uma vinícola que visa garantir as condições ideais para o armazenamento de vinhos. O dispositivo monitora três principais parâmetros: luminosidade, temperatura e umidade, garantindo assim que os vinhos estejam sempre em condições ideais de conservação. Além disso, o dispositivo é integrado à plataforma Tago, permitindo o envio de dados para um servidor e a criação de um gráfico de linhas atualizado em tempo real com os valores dos sensores. O código fonte para este dispositivo está incluído neste repositório.

## Funcionalidades

### Luminosidade
O dispositivo mede a luminosidade do ambiente onde os vinhos estão armazenados. De acordo com as demandas da vinícola, os vinhos devem ser mantidos em locais com pouca luz para evitar a degradação dos compostos orgânicos. Se a luminosidade exceder os limites aceitáveis, o dispositivo aciona um alarme sonoro e exibe uma mensagem de alerta no display LCD.

### Temperatura
A temperatura é um fator crítico para a conservação de vinhos. O dispositivo monitora a temperatura ambiente e exibe-a no display LCD. Se a temperatura ultrapassar os limites ideais, o dispositivo aciona um alarme e exibe uma mensagem de alerta no display.

### Umidade
A umidade é outro fator importante para a conservação dos vinhos. O dispositivo mede a umidade do ambiente e a exibe no display LCD. Se a umidade estiver fora dos limites aceitáveis, o dispositivo aciona um alarme e exibe uma mensagem de alerta no display.

### Integração com Tago
O dispositivo está integrado à plataforma Tago, que permite o envio de dados dos sensores para um servidor remoto. Os dados são enviados periodicamente para a plataforma Tago, onde podem ser visualizados e analisados. Além disso, um gráfico de linhas é criado e atualizado em tempo real com os valores dos sensores, proporcionando uma visualização clara das condições de armazenamento dos vinhos.

## Configuração

O dispositivo é configurado da seguinte forma:

- O LCD é conectado aos pinos 7, 6, 5, 4, 3 e 2 do Arduino.
- Os LEDs vermelho, amarelo e verde são conectados aos pinos 11, 12 e 13, respectivamente.
- O buzzer é conectado ao pino 10.
- Os sensores de luminosidade (LDR) e temperatura (TMP) são conectados aos pinos A5 e A4, respectivamente.
- Um sensor de umidade é conectado ao pino A3.

## Integração com Tago

Para integrar o dispositivo com a plataforma Tago, siga os passos abaixo:

1. Crie uma conta na plataforma Tago em [https://tago.io](https://tago.io) se você ainda não tiver uma.

2. Crie um novo dispositivo na plataforma Tago e obtenha as credenciais de acesso, como o token de dispositivo.

3. No código do Arduino, configure as informações de autenticação, como o token do dispositivo Tago, o ID do dispositivo e o ID do bucket.

4. Utilize a biblioteca adequada para enviar os dados dos sensores para a plataforma Tago. Certifique-se de seguir as instruções da biblioteca para configurar a comunicação.

5. Configure um dashboard na plataforma Tago para visualizar os dados dos sensores e criar um gráfico de linhas atualizado em tempo real.

## Uso

O dispositivo é projetado para operar continuamente e monitorar as condições do ambiente de armazenamento dos vinhos. Os dados dos sensores são enviados para a plataforma Tago, onde podem ser visualizados e analisados em tempo real.

## Referências

As demandas do projeto foram baseadas nas necessidades específicas da Vinheria Agnello.

A integração com a plataforma Tago permite uma gestão eficaz do monitoramento das condições de armazenamento dos vinhos, proporcionando um controle preciso sobre os parâmetros de luminosidade, temperatura e umidade.
