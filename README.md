# 🧮 Coleção completa de Algoritmos de Ordenação em C

![Language](https://img.shields.io/badge/language-C11-blue?style=for-the-badge&logo=c)
![License](https://img.shields.io/badge/license-MIT-green?style=for-the-badge)
![Contributions](https://img.shields.io/badge/contributions-welcome-orange?style=for-the-badge)

## 📖 Sobre o Projeto

Este repositório é uma coleção completa de implementações de **Algoritmos de Ordenação (Sorting Algorithms)** desenvolvidos em linguagem **C**. 

O objetivo principal é servir como material de estudo para estudantes de Ciência da Computação, focando em:
* Análise de complexidade (Notação Big O).
* Manipulação eficiente de memória e ponteiros.
* Comparação prática de desempenho entre algoritmos $O(n^2)$ e $O(n \log n)$.
* Entendimento de estabilidade nos algoritmos.

O código foi estruturado de forma modular, separando a interface (`.h`), a implementação (`.c`) e o programa de teste (`main.c`), seguindo as boas práticas de engenharia de software.

---

## ⚖️ O que é Estabilidade?

Um algoritmo de ordenação é considerado **estável** quando ele preserva a ordem relativa original de elementos que possuem chaves (valores) iguais.

**Exemplo:**
Imagine que você tem uma lista de alunos ordenada alfabeticamente e quer reordená-la por nota.
* **Estável:** Se dois alunos tiverem a mesma nota, o algoritmo manterá a ordem alfabética (ordem original) entre eles.
* **Instável:** A ordem entre os alunos com a mesma nota pode ser alterada aleatoriamente.

Isso é crucial quando aplicamos múltiplas ordenações sequenciais em um mesmo conjunto de dados.

---

## 📊 Comparativo de Complexidade e Estabilidade

Abaixo, uma tabela detalhada comparando o desempenho, custo de memória e propriedades de cada algoritmo.

| Algoritmo | Melhor Caso | Médio | Pior Caso | Memória | Estabilidade | Quando Utilizar? |
| :--- | :---: | :---: | :---: | :---: | :---: | :--- |
| **Selection Sort** | $O(n^2)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | ❌ Instável | Memória limitada e custo de *swap* alto. |
| **Insertion Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | ✅ Estável | Arrays pequenos ou **quase ordenados**. |
| **Bubble Sort** | $O(n)$ | $O(n^2)$ | $O(n^2)$ | $O(1)$ | ✅ Estável | Fins didáticos. |
| **Merge Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n \log n)$ | $O(n)$ | ✅ Estável | Grandes volumes e necessidade de estabilidade. |
| **Heap Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n \log n)$ | $O(1)$ | ❌ Instável | Performance $O(n \log n)$ com memória constante. |
| **Quick Sort** | $O(n \log n)$ | $O(n \log n)$ | $O(n^2)$ | $O(\log n)$ | ❌ Instável | Padrão da indústria. Rápido para dados aleatórios. |
| **Counting Sort** | $O(n+k)$ | $O(n+k)$ | $O(n+k)$ | $O(k)$ | ✅ Estável | Inteiros positivos com intervalo pequeno. |
| **Radix Sort** | $O(nk)$ | $O(nk)$ | $O(nk)$ | $O(n+k)$ | ✅ Estável | Inteiros grandes ou strings. |

> **Legenda:** $n$ = número de elementos, $k$ = range (intervalo) dos valores.

---

## 🚀 Algoritmos Implementados

### 1. Selection Sort (Instável)
Seleciona o menor elemento e o troca com a posição atual. Como faz trocas de longa distância, perde a estabilidade.

### 2. Insertion Sort (Estável)
Constrói a lista ordenada inserindo itens na posição correta. Mantém a ordem de elementos iguais, pois só troca se for estritamente menor.

### 3. Bubble Sort (Estável)
Troca apenas elementos adjacentes e somente se a ordem estiver errada, preservando a estabilidade de valores iguais.

### 4. Merge Sort (Estável)
Na etapa de *merge* (intercalação), se houver elementos iguais, o algoritmo prioriza o elemento que veio da sublista da esquerda (original), mantendo a estabilidade.

### 5. Heap Sort (Instável)
A estrutura de *Heap* (árvore) move elementos para posições distantes para satisfazer a propriedade da heap, destruindo a ordem relativa original.

### 6. Quick Sort (Instável)
O processo de particionamento envolve trocas complexas ao redor do pivô, o que geralmente altera a ordem relativa de elementos iguais.

### 7. Counting Sort (Estável)
Ao preencher o array final, percorremos o array original de trás para frente (ou usamos lógica de contagem acumulada), o que garante a estabilidade.

### 8. Radix Sort (Estável)
Funciona processando dígito a dígito (do menos para o mais significativo). Para funcionar corretamente, ele **exige** que o algoritmo usado internamente (neste caso, Counting Sort) seja estável.

---

## 📂 Estrutura do Projeto

* `sort.h`: Cabeçalho com as assinaturas das funções.
* `sort.c`: Implementação lógica de todos os algoritmos.
* `main.c`: Interface de menu interativo (CLI) para testar os algoritmos.
* `Ordenacao.dev`: Arquivo de projeto para IDE Dev-C++.

---

## 💻 Como Compilar e Rodar

### Pré-requisitos
Você precisará de um compilador C, como o **GCC** ou utlizar uma IDE.

### 🛠️ Opção 1: Utilizando IDEs

#### **Dev-C++** (Recomendado)
O projeto já inclui o arquivo de configuração `.dev`.
1.  Navegue até a pasta do projeto.
2.  Dê um duplo clique no arquivo **`Ordenacao.dev`**.
3.  Com o projeto aberto, pressione **F11** (ou vá no menu *Execute > Compile & Run*).

#### **VS Code**
Como o projeto possui múltiplos arquivos (`main.c` e `sort.c`), você precisa informar ao compilador para unir os dois.
1.  Abra a pasta do projeto no VS Code (`File > Open Folder`).
2.  Abra o terminal integrado (`Ctrl + '`).
3.  Digite o comando abaixo para compilar:
    ```bash
    gcc main.c sort.c -o sortapp
    ```
4.  Execute o programa gerado:
    ```bash
    ./sortapp   # Linux/Mac
    sortapp.exe # Windows
    ```

### ⌨️ Opção 2: Via Terminal (Manual)

Se você não utiliza IDE e prefere apenas a linha de comando com GCC:

1.  **Clone o repositório:**
    ```bash
    git clone https://github.com/MarcosViniciusBrandao/Algoritmos-de-Ordenacao.git
    cd Algoritmos-de-Ordenacao
    ```

2.  **Compile os arquivos:**
    ```bash
    gcc main.c sort.c -o sortapp
    ```

3.  **Execute o programa:**
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
  Feito com 💙 por <a href="https://marcosviniciusbrandao.com.br/">Marcos Vinicius</a>
</p>