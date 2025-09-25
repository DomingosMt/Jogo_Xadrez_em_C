# ♟️ Jogo de Xadrez em C  

Um projeto simples em **C** que simula os movimentos de peças do xadrez (Bispo, Torre, Rainha e Cavalo) utilizando diferentes estruturas de repetição (**while, for, do-while**) e **recursividade**.  

Este projeto foi desenvolvido com o objetivo de praticar lógica de programação e entender melhor a aplicação de loops e chamadas recursivas.  

---

## 📌 Funcionalidades

- **Bispo**  
  - Movimento na **diagonal superior direita** por 5 casas.  
  - Implementado tanto com `while` quanto com **função recursiva**.  

- **Torre**  
  - Movimento em linha reta para a **direita** por 5 casas.  
  - Implementado com `for` e também com **função recursiva**.  

- **Rainha**  
  - Movimento para a **esquerda** por 8 casas.  
  - Implementado com `do-while` e também com **função recursiva**.  

- **Cavalo** *(em desenvolvimento no nível aventureiro)*  
  - Estrutura planejada com **loops aninhados**.  

---

## 🖥️ Estrutura do Código

O programa está dividido em funções que representam os movimentos recursivos de cada peça:

```c
void movimentoTorre(int casa);
void movimentoBispo(int casa1, int casa2);
void movimentoRainha(int casa);
```

---

## 📊 Exemplo de Saída

*** JOGO DE XADREZ EM C ***

```
Peça: Bispo

Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita
Cima, Direita

Peça: Torre

Direita
Direita
Direita
Direita
Direita

Peça: Rainha

Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

```

---

## 🚀 Como Executar

- 1. Clone este repositório:
```
bash

git clone https://github.com/seu-usuario/jogo-xadrez-c.git
```
 
- 2. Acesse a pasta do projeto:
```
bash

cd jogo-xadrez-c
```    
- 3. Compile o programa:
```
bash

gcc main.c -o jogo
```
- 4. Execute:
```
bash

./jogo
```

---

## 🎯 Objetivos de Aprendizado

- Compreender o uso das estruturas de repetição em C (for, while, do-while).

- Aplicar conceitos de recursividade em problemas simples.

- Modelar movimentos de peças de xadrez de forma didática.

- Desenvolver lógica de programação de forma progressiva (nível novato ➝ aventureiro).

## 📌 Próximos Passos

- ✅ Implementar movimentos do Bispo, Torre e Rainha.

- ⏳ Finalizar a lógica do Cavalo com loops aninhados.

- ⏳ Adicionar movimentos do Rei e Peão.

- ⏳ Criar uma interface mais interativa para escolha de movimentos.

## 🧑‍💻 Autor

- Feito com dedicação por Domingos Muratori 🖤♟️
- Se gostou, deixe uma ⭐ no repositório!
