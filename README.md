# EcoGrid CEV
---

# Integrantes

| Nome                        | RM       |
| --------------------------- | -------- |
| Leonardo Gabriel Sá Duarte  | RM569029 |
| Enzo de Nadai               | RM569985 |
| João Pedro Conturbia Santos | RM569788 |
| Eduardo Oliveira da Silva   | RM570374 |
| Bruno Albuquerque Aguiar    | RM569035 |
| Timóteo De Andrade Romano   | RM569711 |

---
# Instruções de Funcionamento

1. Certifique-se de que o painel solar esteja conectado ao circuito e que a bateria auxiliar esteja instalada.

2. Ao iniciar a simulação, o sistema permanece em modo de espera até que o usuário selecione uma opção de carregamento.

3. O painel solar realiza a geração de energia renovável, que é armazenada na bateria auxiliar por meio do circuito controlado pelo Arduino.

4. Pressione o **Botão 1** para iniciar o processo de carregamento utilizando a fonte principal de alimentação.

5. Caso deseje utilizar a energia armazenada na bateria auxiliar para complementar o carregamento, pressione também o **Botão 2** para ativar o modo híbrido.

6. O Arduino monitora o estado dos botões e aciona os relés correspondentes para selecionar as fontes de energia adequadas.

7. Durante a operação, os instrumentos de medição exibem os valores de tensão e corrente do sistema em tempo real.

8. Para interromper o carregamento, desligue o **Botão 1**. O sistema retornará ao estado de espera.

---

# Cenários de Operação

**Cenário 1 – Sistema em espera**

* Botão 1: Desligado
* Botão 2: Desligado
* Carregamento inativo.

**Cenário 2 – Carregamento convencional**

* Botão 1: Ligado
* Botão 2: Desligado
* Utilização apenas da fonte principal.

**Cenário 3 – Carregamento híbrido**

* Botão 1: Ligado
* Botão 2: Ligado
* Utilização da fonte principal em conjunto com a bateria auxiliar carregada pelo painel solar.

  ---
