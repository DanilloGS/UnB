# Aula4
## Processos 
- É basicamente um programa em execução, sendo constituido de instruções, dos seus dados, do estado da pilha, do estado dos registradores, dentre outros.
- Um sistema compartilhado os processos executam durante durante um clock e ficam suspensos em outro para executar um processo diferente, o Pipeline também pode ser utilizado como um bom exemplo.
### Tabela de processos
- O sitema mantem uma lista dos processos que estão no sistema.
### Arvore de processos
- Um processo pai cria um processo filho e então inicia-se a crição de uma árvore de processos que possui hierarquias.
- Toda vez que um processo cria o outro, o processo que foi criado é o processo filho.
- É esperado que um processo filho morra antes de um processo pai.
### Comunicação entre processos
- Um processo pode enviar informações de um outro processo  no sistema, tal como se é enviado mensagens através da rede. Um exemplo é o comando:
```
    kill() -> Comando para enviar instruções para o processo
```
## Arquivos
- O sistema de arquivos é a parte do sistema operacional mais conhecida pelo usuário. Os arquivos escondem do usuário as peculiaridades do acesso ao hardware e apresenta ao usuário um modeli abstrato como arquivos.
- As instruções que podem ser realizadas nos arquivos são o *CRUD*
### Diretorio
- Estrutura ficticia que permite o agrupamento de arquivos. Comumente chamado de pastas.
### Nome do caminho
- Assim como os processo podem ter filhos, os diretorios também podem (sub-diretorios), formando assim uma arvore de diretorios.
### Permissões
- Em um sistema *UNIX* os arquivos e diretórios possuem bits de permissões para identificar quem pode realizar operações sobre o arquivo/diretório. As permissões são denominadas **bits rwx**
- **r:** Ler
- **w:** Escrever
- **x:** Executar
- Bits
  - **d:** Diretorio
  - **-:** Arquivo
  - **c:** Char device
```
    rwx rwx rwx
     |   |   |--> Todos
     |   |--> Grupo
     |--> Dono
```
### Arquivos especiais
- Representam dispositivos como se fossem arquivos (Pendrive). Caso o arquivo os arquivos sejam abertos ou copiados as instruções serão enviadas para a porta serial onde o dispositivo está.
### 