# Aula 3

```
    #include <stdio.h>
    int main() {
        FILE *entrada; // cria um ponteiro para um arquivo
        unsigned char buffer[128];

        entrada = fopen("meuArquivo.dad", "rb");
        fread(buffer, 1, 128, entrada); Lê o arquivo e armazena no buffer 
    }
```

## Sistema de arquivos
- O sistema operacional é o intermediario entre o hardware e o software.
- Armazena onde fica salva cada informação no disco, ocorre uma syscall que procura o arquivo especifico.
- O computador é projetado como um sistema de camadas.
   
## Classificações
- **Máquina estendida** (Windows, Ubuntu, Mac) 
  - Esconde do usuário os detalhes do hardware.
  - Provê ao usuário uma forma fácil de acesso.
  - O usuário não sabe a velocidade da CPU, gravação do HD, posição das cabeças do HD. O SO tem como responsabilidade realizar isso sozinho.
- **Gerente de recursos**
  - O SO gerencia os recursos do hardware. Se houver um n⁰ x de usuários para realizar uma tarefa o SO se encarregará de criar uma fila para executar o comando de todos.
- **Projeto**
  - Como o SO está organizado internamente as chamadas de sistema (syscall), formatos de arquivos (FAT, FAT32, NTFS, ext3, etc), gerenciamento de memória e etc.

## Tipo de computadores
- Mainframe
- Computadores pessoais
- Sistemas Embarcados

## Tipos de SO
- **SO de tempo real:** 
  - Sonda Curiosity em marte. Tem sempre a garantia que irá exeecutar as tarefas no mesmo tempo.
- **SO distribuidos:**
  - Maquina central que processa tudo, como a Netflix
## SO Tarefas
- **Monotarefas:**
  - Nitendo Wii: Toda vez que um jogo é iniciado todo o processamento do sistema é utilizado para uma única tarefa.
  - O sistema não pode executar mais de uma tarefa por vez.
- **Multitarefas:**
  - Podem realizar diversas tarefas de uma vez só.
  - O sistema pode executar tarefas como um Pipeline
  ## Usuários
  - **Monousuários:**
    - Um usuário por vez, popular entre microcomputadores.Geralmente não existe log-in ou log-out.
  - **Multiusuários:**
    - Diversos usuários podem logar no computador ao mesmo tempo. Pode considerar diversas permições especificas (Root e User).

## Distribuições
- **Comerciais:** 
  - Precisam ser adquiridos em uma loja. Geralmente o usuário conta com assistência tecnica (Windows, MacOs e etc).
- **Grátis:**
  - O usuário pode obter o sistema gratuitamente na internet. (Ubuntu).
  - **Software Livre:**
    - É gratuito e pode ser modificado. (GNU-Linux).
  - **Educativos:**
    - Escritos para estudantes. Para ensinar conceitos de SO. (Minix).