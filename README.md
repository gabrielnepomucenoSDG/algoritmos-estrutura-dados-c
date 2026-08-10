# Algoritmos e Estrutura de Dados em C

Exercícios e implementações desenvolvidos durante a disciplina de Estrutura de Dados / LPE (Lógica de Programação e Estrutura), cobrindo desde fundamentos de C até estruturas de dados clássicas.

## Conteúdo

### `estrutura-de-dados/`
- **`ordenacao/`** — algoritmos de ordenação (Bucket Sort, Merge Sort) em Python.
- **`pilha/`** — implementação de pilha (stack) em C.
- **`ponteiros-brinks/`** — exercícios de ponteiros: alocação dinâmica, referência, struct via ponteiro.
- **`revisao-estrutura/`** — revisão de alocação dinâmica, modularização e ponteiros.
- **`revisao-c/`** — exercícios gerais de revisão de C.

### `fundamentos-c-lpe/`
Exercícios organizados por aula, cobrindo a progressão da disciplina:

| Aula | Tópico |
|---|---|
| 2 | Entrada/saída e tipos de variável |
| 3 | Operadores |
| 4 | Condicionais (if/else) |
| 5 | Condicionais (operador ternário e switch/case) |
| 6 | Laço `while` |
| 7 | Laço `for` |
| 8 | Laço `do-while` |
| 9 | Arrays |
| 10 | Structs |
| 11 | Modularização |

- **`provas-e-revisoes/`** — questões discursivas de prova e simulados.

## Compilando

Os arquivos `.c` são independentes entre si. Para compilar qualquer um:

```bash
gcc caminho/para/arquivo.c -o programa
./programa
```

Os scripts de ordenação em Python rodam diretamente:

```bash
python estrutura-de-dados/ordenacao/merge_sort.py
```

## Contexto

Repositório organizado a partir de material de estudo acumulado ao longo da disciplina — inclui exercícios de aula, desafios e revisões para prova. Binários gerados na compilação (`.exe`, `output/`) não são versionados (ver `.gitignore`).
