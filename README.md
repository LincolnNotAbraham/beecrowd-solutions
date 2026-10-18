# 🧮 Beecrowd Solutions

[![Beecrowd](https://img.shields.io/badge/Beecrowd-URI%20Online%20Judge-16a34a.svg)](https://judge.beecrowd.com/)
[![C++17](https://img.shields.io/badge/C%2B%2B-17-00599C.svg)](https://isocpp.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

Coleção de soluções em **C++** para problemas do [Beecrowd](https://judge.beecrowd.com/) (antigo URI Online Judge), com foco em algoritmos, estruturas de dados e programação competitiva.

Cada arquivo é uma solução completa e autocontida, nomeada com o número do problema, pronta para compilar e submeter ao juiz.

## 📋 Problemas resolvidos

| # | Problema | Técnica principal |
| --- | --- | --- |
| [1021](https://judge.beecrowd.com/pt/problems/view/1021) | Notas e Moedas | Divisão gulosa com conversão para centavos |
| [1310](https://judge.beecrowd.com/pt/problems/view/1310) | Lucro | Algoritmo de Kadane (soma máxima de subarray) |
| [1487](https://judge.beecrowd.com/pt/problems/view/1487) | Six Flags | Mochila ilimitada (programação dinâmica) |
| [1524](https://judge.beecrowd.com/pt/problems/view/1524) | Cafeteria | Ordenação de intervalos + estratégia gulosa |

## 🗂️ Estrutura do projeto

```
beecrowd-solutions/
├── 1021.cpp   # Notas e Moedas
├── 1310.cpp   # Lucro
├── 1487.cpp   # Six Flags
├── 1524.cpp   # Cafeteria
├── LICENSE
└── README.md
```

## ⚙️ Requisitos

- Compilador C++ com suporte a C++17 (ex.: `g++` 9+ ou `clang++`)
- Terminal com suporte a redirecionamento de entrada

As soluções usam `#include <bits/stdc++.h>`, então recomenda-se compilar com **GCC/G++**.

## 🚀 Instalação e compilação

Clone o repositório:

```bash
git clone https://github.com/LincolnNotAbraham/beecrowd-solutions.git
cd beecrowd-solutions
```

Compile o problema desejado (exemplo com o 1021):

```bash
g++ -std=c++17 -O2 -Wall -o 1021 1021.cpp
```

## 💻 Uso

Execute o binário e forneça a entrada pela linha de comando ou redirecione um arquivo:

```bash
./1021 < entrada.txt
```

Exemplo de execução (problema 1021, entrada `576.73`):

```
$ echo "576.73" | ./1021
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
```

## 🤝 Contributing

Contribuições são bem-vindas! Para colaborar:

1. Faça um fork do projeto
2. Crie uma branch para a sua solução: `git checkout -b solucao/1234`
3. Adicione o arquivo no formato `NUMERO.cpp` (ex.: `1234.cpp`)
4. Garanta que a solução compila sem avisos e passa no juiz
5. Abra um Pull Request descrevendo o problema e a abordagem utilizada

## 📄 Licença

Distribuído sob a licença MIT. Consulte o arquivo [LICENSE](LICENSE) para mais detalhes.
