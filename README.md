# 🧮 C Sorting Algorithms Collection

![Linguagem](https://img.shields.io/badge/language-C-blue)
![Licença](https://img.shields.io/badge/license-MIT-green)
![Status](https://img.shields.io/badge/status-Completed-success)

## 📖 Sobre o Projeto

Este repositório contém implementações clássicas de algoritmos de ordenação (Sorting Algorithms) desenvolvidas em **C**. O objetivo é servir como material de estudo sobre complexidade de algoritmos (Big O), manipulação de memória e estruturas de dados fundamentais.

### ✨ Destaques
- Código modular (separação entre interface `.h` e implementação `.c`).
- Implementações otimizadas cobrindo desde algoritmos quadráticos até lineares.
- Sem dependências externas.

---

## 📊 Tabela de Complexidade

Um guia rápido para entender a eficiência de cada algoritmo implementado neste projeto:

| Algoritmo | Melhor Caso | Caso Médio | Pior Caso | Quando Usar |
| :--- | :---: | :---: | :---: | :--- |
| **Selection Sort** | $O(n^2)$ | $O(n^2)$ | $O(n^2)$ | Arrays pequenos onde a escrita na memória é custosa. |
| **Insertion Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | Arrays pequenos ou **quase ordenados**. |
| **Bubble Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | Fins didáticos. |
| **Merge Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n \log n)$ | Grandes volumes de dados ou listas encadeadas. (Estável). |
| **Heap Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n \log n)$ | Sistemas com pouca memória (In-Place). |
| **Quick Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n^2)$ | O mais rápido na prática para propósito geral. |
| **Counting Sort** | $O(n+k)$ | $O(n+k)$ | $O(n+k)$ | Inteiros com intervalo (range) pequeno. |
| **Radix Sort** | $O(nk)$ | $O(nk)$ | $O(nk)$ | Ordenação de números grandes ou strings. |

> Legenda: $n$ = número de elementos, $k$ = range dos valores.

---

## 📂 Estrutura dos Arquivos

Para facilitar seus estudos, o código foi organizado da seguinte forma:

* **`sort.c`**: 🧠 **Onde a mágica acontece!** Este arquivo contém toda a lógica e implementação dos algoritmos de ordenação listados acima. Se você quer estudar o código, comece por aqui.
* **`sort.h`**: Arquivo de cabeçalho que define as assinaturas das funções.
* **`main.c`**: Interface de menu para executar e testar os algoritmos no terminal.

---

## 💻 Como Rodar

### Pré-requisitos
Necessário ter o compilador **GCC** instalado.

### Compilar e Executar

1. **Clone o repositório:**
   ```bash
   git clone https://github.com/MarcosViniciusBrandao/Algoritmos-de-Ordenacao.git
   cd Algoritmos-de-Ordenacao
   gcc main.c sort.c -o sortapp
   ./sortapp -> para Linux/Mac
   sortapp.exe -> para Windows