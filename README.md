# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio de Xadrez - MateCheck

Bem-vindo ao desafio de Xadrez da MateCheck! Este projeto tem como objetivo testar e determinar os limites de utilização do código dentro do jogo utilizando estruturas de repetição e funções avançadas.

---

## 🔧 Configuração do Ambiente de Desenvolvimento

### Pré-requisitos
Para compilar e executar este projeto, você precisa ter o **GCC (GNU Compiler Collection)** instalado no Windows.

### 📦 Instalação do GCC via MSYS2

#### **Passo 1: Baixar e Instalar o MSYS2**
1. Acesse: https://www.msys2.org/
2. Baixe o instalador
3. Execute e instale no caminho padrão: `C:\msys64`
4. Marque a opção "Run MSYS2 now" ao final da instalação

#### **Passo 2: Atualizar o MSYS2**
No terminal MSYS2 UCRT64 que abrir, execute:
```bash
pacman -Syu
```
- Digite `Y` quando solicitado
- Se pedir para fechar o terminal, feche e abra novamente o **MSYS2 UCRT64**

#### **Passo 3: Instalar o GCC**
No terminal MSYS2 UCRT64, execute:
```bash
pacman -S mingw-w64-ucrt-x86_64-gcc
```
- Digite `Y` quando solicitado
- Aguarde a instalação completar

#### **Passo 4: Adicionar ao PATH do Windows**
Abra o **PowerShell como Administrador** e execute o comando a seguir para adicionar a variável de ambiente:
```powershell
[Environment]::SetEnvironmentVariable("Path", $env:Path + ";C:\msys64\ucrt64\bin", [EnvironmentVariableTarget]::Machine)
```

#### **Passo 5: Verificar a Instalação**
Feche e abra novamente o PowerShell ou Terminal, então execute:
```bash
gcc --version
```
Se aparecer a versão do GCC, está tudo pronto! ✅

> **Nota:** Caso o comando não funcione imediatamente, pode ser necessário reiniciar o computador para que o Windows reconheça as novas variáveis de ambiente.

---

## 🚀 Como Compilar e Executar

### Compilar o projeto:
```bash
gcc xadrez.c -o xadrez.exe
```

### Compilar com avisos:
```bash
gcc -Wall -Wextra xadrez.c -o xadrez.exe
```

### Executar o programa:
```bash
.\xadrez.exe
```

---

## Níveis do Desafio

### 🏅 Nível Novato

A equipe de testes da MateCheck recebeu uma solicitação para determinar os limites de utilização do código dentro do jogo. Para isso, a equipe de programação solicitou o envio de blocos de código contendo loops (estruturas de repetição) para avaliação de desempenho e possibilidades de aplicação.

**Movimentação das Peças:**
- Bispo: 5 casas na diagonal superior direita
- Torre: 5 casas para a direita
- Rainha: 8 casas para a esquerda

No jogo, apenas possuímos movimentação para quatro direções, mas o Bispo se mexe na diagonal. Com isso, foi adicionada uma condição para movimentação dessa peça, em que, para movê-lo, utilizamos o comando `printf` e, em seu valor, colocamos a direção usando a combinação de direções básicas. 

**Requisitos Funcionais:**
1. **Entrada de Dados:**
   - Os valores necessários devem ser inseridos manualmente a partir de variáveis dentro do código.
   - Será permitido o uso de constantes para facilitar a escrita do código e evitar repetição de valores.
2. **Estruturas de Repetição:**
   - Os códigos precisam ser desenvolvidos utilizando estruturas de repetição.
3. **Saída de Dados:**
   - O sistema deve exibir os resultados de cada procedimento de forma clara e legível.

**Requisitos Não Funcionais:**
1. **Performance:**
   - O sistema deve executar os cálculos e apresentar os resultados sem atrasos perceptíveis.
2. **Documentação:**
   - O código deve ser bem documentado, incluindo comentários detalhados sobre a função de cada parte do código.
3. **Manutenibilidade:**
   - O código deve ser escrito de forma clara, empregando nomes de variáveis que permitam o fácil entendimento.

**Instruções Detalhadas:**
1. **Entrada de Dados:**
   - Inclua a biblioteca padrão de entrada e saída no início do seu programa.
   - Declare variáveis constantes para definir os valores a serem comparados dentro das estruturas condicionais.
2. **Estruturas de Repetição:**
   - Utilize cada uma das diferentes estruturas de repetição apresentadas.
3. **Saída:**
   - As saídas deverão ser mostradas de forma clara e organizada, com a direção da peça.

**Nomenclatura:**

printf("Cima\n");
printf("Baixo\n");
printf("Esquerda\n");
printf("Direita\n");

### 🏅 Nível Aventureiro
Agora que já conseguimos mover as peças mais simples usando loops, os desenvolvedores pediram para elaborar os loops de outra forma. Para o desafio, moveremos o cavalo, que possui sua movimentação em L. O cavalo deve se movimentar para baixo e para a esquerda, usando pelo menos duas estruturas de repetição: uma deve ser for e a outra pode ser while ou do-while.

**Movimentação do Cavalo:**

Mover o cavalo em L utilizando loops aninhados.
Obs: É obrigatório o uso de loops aninhados.

### 🥇 Nível Mestre
Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por **funções recursivas**, e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.

**Movimentação das Peças:**

**Bispo**: 5 casas na diagonal direita para cima
**Torre**: 5 casas para a direita
**Rainha**: 8 casas para a esquerda
**Cavalo**: 1 vez em L para cima à direita
Obs: É obrigatório o uso de loops aninhados na movimentação do bispo e funções recursivas.

Ao concluir este desafio, você terá um conhecimento mais profundo de estruturas complexas e elaboradas, amplamente utilizadas no mercado de trabalho. Boa sorte e boa programação!

Equipe de Ensino - MateCheck
