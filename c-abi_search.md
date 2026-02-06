# Pesquisa Acadêmica: C/ABI e Modelos de Memória

## 1. Introdução aos Modelos de Dados (Data Models)

Na linguagem C, o tamanho dos tipos básicos (int, long, pointer) não é fixo pelo padrão da linguagem, mas sim definido pela ABI (Application Binary Interface) do sistema operacional e da arquitetura. Desde 1990, com a transição de 32 para 64 bits, diferentes modelos foram adotados para equilibrar portabilidade e desempenho.o

## 2. Tabela Comparativa de Tipos (C/ABI)

Esta tabela resume como cada modelo distribui os bits entre os tipos fundamentais:

| Modelos de Dados | int | long | long long | pointer | Sistemas/Arquiteturas Comuns |
|------------------|-----|------|-----------|---------|------------------------------|
| LP32 | 16 | 32 | 64 | 32 | Sistemas legados (Win16) |
| ILP32 | 32 | 32 | 64 | 32 | Win32 API, Linux x86 (32-bit) |
| LP64 | 32 | 64 | 64 | 64 | Linux, mac0S, Solaris (64-bit) |
| LLP64 | 32 | 32 | 64 | 64 | Microsoft Windows (x64) |
| ILP64 | 64 | 64 | 64 | 64 | Unicos, Cray (High Performance Computing)

## 3. Referências Acadêmicas e Técnicas (Google Acadêmico)o

* 1. Memory Models for C/C++ Programmers
    * Resumo: Explora a interação entre a linguagem e o hardware, detalhando como a ABI impacta a consistência de memória.
* 2. Differentiated Access Memory Systems (Stanford)
    * Resumo: Aborda novos limites de endereçamento e a organização de memória em sistemas modernos.
* Programming Language Memory Models (MIT Reference)
    * Resumo: Guia sobre a convergência de modelos de memória e otimização de compiladores.
* 64-Bit Programming Models: Why LP64?
    * Resumo: Justificativa técnica para a adoção do LP64 em sistemas UNIX.
* The C11 Memory Model: Formalization (ACM)
    * Resumo: Formalização matemática do comportamento da memória no padrão C11.
* C ABI and Data Model Evolution
    * Resumo: Documentação técnica detalhando a especificação exata de cada modelo de bits.
* Repositório de Teses USP (Busca ABI)
    * Resumo: Pesquisas brasileiras sobre o impacto de arquiteturas de 64 bits em desempenho.
* History and Future of Effective C
    * Resumo: Evolução do C como interface direta com o hardware desde 1990.
* 9. [Abstract Machines and Memory Models (Cambridge/MIT)](https://www.cl.cam.ac.uk/~pes20/cerberus/)
    * Resumo: Investigação sobre a semântica real do C em comparação com a teoria das ABIs.
* 10. [Evolution of Memory Architecture (IEEE)](https://www.semanticscholar.org/paper/Evolution-of-Memory-Architecture-Nair/931760c25b22578bb0071117e231aaaf1d94d414)
    * Resumo: Panorama histórico das últimas décadas sobre arquitetura de memória.

## 4. Recurso Audiovisual Contextualizado

* [The Evolution of Memory Technologies](https://www.youtube.com/watch?v=mXHZAkkmBHw)
    * Contexto: Vídeo explicativo sobre a evolução física e lógica da memória, essencial para compreender a necessidade da diferenciação entre modelos como ILP32 e LP64.
