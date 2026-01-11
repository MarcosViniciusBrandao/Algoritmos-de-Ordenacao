# 🧮 C Sorting Algorithms Collection

![Language](https://img.shields.io/badge/language-C11-blue?style=for-the-badge&logo=c)
![License](https://img.shields.io/badge/license-MIT-green?style=for-the-badge)
![Status](https://img.shields.io/badge/status-Completed-success?style=for-the-badge)
![Contributions](https://img.shields.io/badge/contributions-welcome-orange?style=for-the-badge)

## 📖 Sobre o Projeto

Este repositório é uma coleção completa de implementações de **Algoritmos de Ordenação (Sorting Algorithms)** desenvolvidos em linguagem **C**. 

O objetivo principal é servir como material de estudo para estudantes de Ciência da Computação, focando em:
* Análise de complexidade (Notação Big O).
* Manipulação eficiente de memória e ponteiros.
* Comparação prática de desempenho entre algoritmos $O(n^2)$ e $O(n \log n)$.

O código foi estruturado de forma modular, separando a interface (`.h`), a implementação (`.c`) e o programa de teste (`main.c`), seguindo as boas práticas de engenharia de software.

---

## 📊 Comparativo de Complexidade

Abaixo, uma tabela detalhada comparando o desempenho de tempo e o custo de memória de cada algoritmo implementado.

| Algoritmo | Melhor Caso (Time) | Médio (Time) | Pior Caso (Time) | Memória (Space) | Quando Utilizar? |
| :--- | :---: | :---: | :---: | :---: | :--- |
| **Selection Sort** | $O(n^2)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | Útil quando a memória auxiliar é muito limitada e o custo de *swap* é alto. |
| **Insertion Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | Excelente para arrays pequenos ou **quase ordenados**. |
| **Bubble Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | Apenas para fins didáticos (simples de implementar). |
| **Merge Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n \log n)$ | $O(n)$ | Grandes volumes de dados onde a estabilidade é necessária (mantém ordem de iguais). |
| **Heap Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n \log n)$ | $O(1)$ | Quando se deseja performance $O(n \log n)$ sem gastar memória extra (*In-Place*). |
| **Quick Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n^2)$ | $O(\log n)$ | Padrão da indústria. Geralmente o mais rápido na prática para dados aleatórios. |
| **Counting Sort** | $O(n+k)$ | $O(n+k)$ | $O(n+k)$ | $O(k)$ | Para inteiros positivos com um intervalo ($k$) pequeno e conhecido. |
| **Radix Sort** | $O(nk)$ | $O(nk)$ | $O(nk)$ | $O(n+k)$ | Ordenação de números inteiros grandes ou strings, processando dígito a dígito. |

> **Legenda:** $n$ = número de elementos, $k$ = range (intervalo) dos valores.

---

## 🚀 Algoritmos Implementados

### 1. Selection Sort
Seleciona repetidamente o menor elemento da parte não ordenada e o coloca no início. Simples, mas ineficiente para grandes listas.

### 2. Insertion Sort
Constrói a lista ordenada um item de cada vez. É adaptativo: muito rápido se a lista já estiver parcialmente ordenada.

### 3. Bubble Sort
Percorre a lista repetidamente, trocando elementos adjacentes se estiverem na ordem errada. Inclui otimização com flag para parar se a lista já estiver ordenada.

### 4. Merge Sort
Algoritmo "Dividir para Conquistar". Divide a lista recursivamente e depois mescla (merge) as sublistas de forma ordenada. É robusto e estável.

### 5. Heap Sort
Utiliza uma estrutura de dados **Binary Heap** (árvore binária) para criar uma fila de prioridade. Eficiente em memória pois ordena no próprio array.

### 6. Quick Sort
Também usa "Dividir para Conquistar". Escolhe um elemento "pivô" e particiona o array ao redor dele. Extremamente rápido no caso médio.

### 7. Counting Sort
Algoritmo não comparativo. Conta a frequência de cada elemento e usa essa informação para posicioná-los diretamente na ordem correta.

### 8. Radix Sort
Ordena inteiros processando dígitos individuais. As chaves são processadas por agrupamento de dígitos que compartilham a mesma posição significativa.

---

## 📂 Estrutura do Projeto

* `sort.h`: Cabeçalho com as assinaturas das funções.
* `sort.c`: Implementação lógica de todos os algoritmos.
* `main.c`: Interface de menu interativo (CLI) para testar os algoritmos.
* `Ordenacao.dev`: Arquivo de projeto para IDE Dev-C++.

---

## 💻 Como Compilar e Rodar

### Pré-requisitos
Você precisará de um compilador C, como o **GCC**. Eu uso e recomendo o Dev-C++.

### Compilando via Terminal

1.  Clone o repositório:
    ```bash
    git clone https://github.com/MarcosViniciusBrandao/Algoritmos-de-Ordenacao.git
    cd Algoritmos-de-Ordenacao
    ```

2.  Compile os arquivos:
    ```bash
    gcc main.c sort.c -o sortapp
    ```

3.  Execute o programa:
    * **Windows:**
        ```bash
        sortapp.exe
        ```
    * **Linux/Mac:**
        ```bash
        ./sortapp
        ```

---

## 🤝 Contribuição

Contribuições são bem-vindas! Se você tiver sugestões de otimização ou novos algoritmos (ex: Shell Sort, Cocktail Sort), sinta-se à vontade para abrir uma **Issue** ou enviar um **Pull Request**.

1.  Faça um Fork do projeto
2.  Crie uma Branch para sua Feature (`git checkout -b feature/NovoAlgoritmo`)
3.  Faça o Commit (`git commit -m 'Adicionado Shell Sort'`)
4.  Faça o Push (`git push origin feature/NovoAlgoritmo`)
5.  Abra um Pull Request

---

## 📝 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

---

<p align="center">
  Feito com 💙 por <a href="https://github.com/MarcosViniciusBrandao">Marcos Vinicius</a>
</p>