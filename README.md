# Super Trunfo em C: Cidades

Um programa em linguagem C que implementa o sistema de cadastro e comparação de cartas para o jogo Super Trunfo com tema "Cidades", desenvolvido como projeto educacional para aprendizado de programação estruturada.

## 📋 Descrição do Projeto

Este projeto implementa progressivamente um sistema de gerenciamento de cartas do jogo Super Trunfo, passando por três níveis de complexidade:

- **Nível Novato**: Cadastro básico de cartas
- **Nível Aventureiro**: Cálculos de densidade populacional e PIB per capita
- **Nível Mestre**: Sistema de comparação e "Super Poder"

## 🎯 Funcionalidades

### Cadastro de Cartas
- Estado (A-H)
- Código da carta (ex: A01, B03)
- Nome da cidade
- População (unsigned long int)
- Área em km² (float)
- PIB em bilhões (float)
- Número de pontos turísticos (int)

### Cálculos Automáticos
- **Densidade Populacional**: População ÷ Área
- **PIB per Capita**: PIB ÷ População
- **Super Poder**: Soma de todos os atributos numéricos + inverso da densidade populacional

### Sistema de Comparação
- Comparação atributo por atributo entre duas cartas
- Regra especial: para densidade populacional, menor valor vence
- Exibição dos resultados das batalhas

## 🛠️ Tecnologias Utilizadas

- **Linguagem**: C (padrão C99)
- **Compilador**: GCC (recomendado)
- **Ambiente**: Compatível com Windows, Linux e macOS

## 📁 Estrutura do Projeto

```
super-trunfo-c/
│
├── super_trunfo.c          # Código fonte principal
├── README.md               # Este arquivo
└── docs/                   # Documentação adicional (opcional)
```

## 🚀 Como Compilar e Executar

### Pré-requisitos
- Compilador C (GCC, MinGW, Visual Studio, etc.)
- Terminal/Prompt de comando

### Compilação
```bash
# Linux/macOS
gcc super-trunfo.c -o super-trunfo

# Windows (MinGW)
gcc super-trunfo.c -o super-trunfo.exe

```

### Execução
```bash
# Linux/macOS
./super-trunfo

# Windows
super-trunfo.exe
```

## 📖 Como Usar

1. **Execute o programa**
2. **Digite os dados da primeira carta** quando solicitado:
   - Estado (uma letra de A a H)
   - Código (estado + número, ex: A01)
   - Nome da cidade
   - População
   - Área em km²
   - PIB em bilhões
   - Número de pontos turísticos

3. **Repita o processo para a segunda carta**

4. **Visualize os resultados**:
   - Dados das cartas cadastradas
   - Cálculos automáticos (densidade populacional, PIB per capita)
   - Resultados das comparações entre as cartas

## 💡 Exemplo de Uso

```
=== CADASTRO DE CARTAS - SUPER TRUNFO ===

--- CARTA 1 ---
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

--- CARTA 2 ---
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30

=== RESULTADOS DAS COMPARAÇÕES ===
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)
```

## 🔧 Conceitos de Programação Aplicados

- **Variáveis e Tipos de Dados**: int, float, char, unsigned long int
- **Operadores Aritméticos**: +, -, *, /
- **Operadores de Atribuição**: =, +=, -=, *=, /=
- **Operadores Relacionais**: >, <, >=, <=, ==, !=
- **Modificadores de Tipo**: unsigned, long
- **Funções de E/S**: printf(), scanf()
- **Conversão de Tipos**: casting implícito e explícito

## 📚 Estrutura do Código

O programa está organizado seguindo princípios de programação estruturada:

1. **Inclusão de bibliotecas**
2. **Declaração de variáveis**
3. **Entrada de dados** (duas cartas)
4. **Processamento** (cálculos)
5. **Saída de dados** (exibição e comparações)

## 🎓 Objetivos Educacionais

Este projeto foi desenvolvido para demonstrar:

- Manipulação de variáveis e tipos de dados em C
- Uso de operadores matemáticos e relacionais
- Implementação de entrada e saída de dados
- Boas práticas de programação (comentários, indentação, nomes significativos)
- Conversão entre tipos de dados
- Uso de modificadores de tipo para grandes números

## 🔍 Observações Técnicas

- A população é armazenada como `unsigned long int` para suportar números grandes
- Cálculos de ponto flutuante são formatados com duas casas decimais
- O "Super Poder" considera o inverso da densidade populacional (menor densidade = mais poder)
- Todas as comparações retornam valores booleanos (1 = verdadeiro, 0 = falso)

## 👨‍💻 Autor

Desenvolvido por **Abrahão Braga** como projeto educacional para aprendizado da linguagem C e fundamentos de programação estruturada.

**Repositório**: [https://github.com/abrahaobraga10/Super-Trunfo](https://github.com/abrahaobraga10/Super-Trunfo)

## 📝 Licença

Este projeto é de uso educacional e está disponível sob os termos definidos pela instituição de ensino.

---

**Nota**: Este é um projeto educacional focado no aprendizado de programação em C. O código prioriza clareza e demonstração de conceitos sobre otimização avançada.