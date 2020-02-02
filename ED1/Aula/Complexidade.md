# Complexidade
- Como medir o desempenho de um programa?
  - Tempo
  - Memória
- Se quiser melhorar o tempo deve-se sacrificar a memória. Se quiser diminuir a memória deve-se sacrificar o tempo (Trade-off).
- Em geral, costuma-se medir o tempo. Todavia, o tempo em si não é uma medida consistente, porque é dependente da máquina.
___
## Medida padrão
- O interesse é analisar a quantidade de operações de algoritmos
- **Obs.:**
  - A quantidade de operações geralmente depende do temanho da entrada
  - Pode acontecer do algoritmo se comportar diferentemente para diferentes entradas
- Todo problema possui 3 casos:
  - Melhor caso
  - Pior caso
  - Caso médio
- No geral, estamos interessados **sempre** no pior caso.
- Muitas vezes, medir precisamente a quantidade de operações de um algoritmo não é fácil, pode nem estar bem definido.
___
## Big O
- A notação O mede o comportamento assintótico da função, portanto é adequado para valores de n muito grandes, mas nem sempre para valores relativamente pequenos
- **Ex.:** Têm-se 2 algoritmos um com complexidade O(n²) e o outro com O(n³). O primeiro consome 100n² e o segundo 5n³ qual deles é melhor?
  - Observa-se que:
   ```
       5n³ =< 100n²
       n³/n² =< 100/5
       n =< 20
   ```
  - O(n³) é melhor para valores de n =< 20.
### Classificações comuns
- **O(1):** Constante (O mais rápido possível)
- **O(log n):** Logarítmico, muito bom.
- **O(n):** Linear, bom.
- **O(n log n):** Quase linear, bom.
- **O(n²):** Quadrática, aceitável
- **O(n^k), k >=1**: Polinomial, pode ser ruim para n grande
- **O(k^n), O(n!), O(n³)**: Exponenciais, inaceitável

|**n**|O(n)|O(nLogn)|O(n²)|O(n³)|O(2^n)|
|:---:|:---:|:---:|:---:|:---:|:---:|
|**16**|0.016s|0.84s|0.256s|4s|1m1s|
|**32**|0.032s|0.16s|15s|33s|46dias|
|**512**|0.512s|9s|4m22s|1dia13h|10¹³⁷sec|
- **Regra prática:**
  - Contar quantas interações os laços o programa executa
  - K laços aninhados implicam em complexidade O(n²), apenas se o laço externo depender direta ou indiretamente do tamanho da entrada (A entrada é n).
- Laços não aninhados possuem complexidade da soma, mantém-se a complexidade do *maior grau.* 
___
