# PrimeSort

Esta tarefa é sobre usar *pipes* e *ferramentas do Linux*. Nela, você deverá escrever
um prorama que recebe como entrada uma sequência de números inteiros positivos,
separados por um caractere newline. A sequência é encerrada pelo número 0. O
programa deve escrever na tela todos os números não-primos dessa sequência,
ordenados do menor para o maior.

Dicas:
* Um número primo é aquele que tem exatamente dois divisores inteiros (ele mesmo
  e algum outro inteiro). O número 1 não é primo, pois tem apenas um divisor
  inteiro.
* Lembre-se da função `popen()` que vimos em sala, e das ferramentas POSIX que
  temos disponíveis (`grep`, `cat`, `echo`, `sort`, `sed`, `tr`, `top`, etc.).
  Embora seja tecnicamente possível implementar o algoritmo inteiro com força
  bruta, é uma ótima idéia usar as funcionalidades que já existem disponíveis.
* O programa deverá ser escrito em C (ou seja: não é permitido usar
  um shell script único)

## Exemplos

Entrada | Saida
------- | -----
`1\n2\n3\n0\n` | `1\n`
`10\n8\n4\n5\n3\n1\n0\n` | `10\n8\n4\n1\n`


## Instruções adicionais

1. Vá diretamente ao conjunto de testes para verificar como tratar casos
   limítrofes ou mal-definidos.
1. Lembre-se de seguir as [instruções de submissão](docs/instrucoes.md).
1. Se desejar, proponha novos casos de teste.
