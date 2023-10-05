# Checkpoint 4 - Vinheria Agnello

Este é um projeto de sistema de monitoramento para a Vinheria Agnello que utiliza sensores de luminosidade, umidade e temperatura. Os dados coletados pelos sensores são enviados para a plataforma Tago.io, onde você pode acompanhar e analisar as informações em tempo real e criar gráficos de histórico.

## Pré-requisitos

Antes de começar, certifique-se de ter os seguintes componentes e recursos disponíveis:

- Placa ESP32
- Sensores DHT11 para temperatura e umidade
- Sensor de luminosidade (LDR)
- Acesso à internet
- Conta no Tago.io
- Conexão Wi-Fi

## Configuração do Hardware

Conecte os sensores DHT11 e o sensor de luminosidade à placa Arduino conforme o esquema elétrico fornecido. Certifique-se de alimentar a placa Arduino e fornecer uma conexão Wi-Fi válida para sua rede.

## Configuração do Software

Antes de carregar o código no Arduino, é necessário configurar algumas informações importantes no código:

- `nomeWifi`: Insira o nome da sua rede Wi-Fi.
- `senhaWifi`: Insira a senha da sua rede Wi-Fi.
- `tokenHeader`: Substitua pelo seu token de dispositivo Tago.io.
- `serverAddress`: URL da API Tago.io para envio de dados.

## Carregando o Código no Arduino

Utilize a IDE do Arduino para carregar o código no seu dispositivo Arduino após a configuração adequada. Certifique-se de que a placa e a porta estejam configuradas corretamente na IDE.

## Uso

Após o carregamento do código, o sistema começará a coletar dados de temperatura, umidade e luminosidade a cada 5 segundos. Os dados são enviados automaticamente para o Tago.io para monitoramento em tempo real.

## Acessando os Dados

Acesse a plataforma Tago.io para visualizar e analisar os dados coletados. Você pode criar gráficos de linha com o histórico de temperatura, umidade e luminosidade para tomar decisões informadas relacionadas à sua vinícola.

## Créditos

Este projeto foi desenvolvido com base no Arduino e na plataforma Tago.io.

## Licença

Este projeto está licenciado sob a Licença MIT - consulte o arquivo [LICENSE](LICENSE) para obter detalhes.

---

Sinta-se à vontade para personalizar o README.md de acordo com as necessidades do seu projeto e adicionar informações adicionais, como a descrição do circuito elétrico e instruções detalhadas de configuração da plataforma Tago.io.
