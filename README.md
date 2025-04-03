# Atividade da Unidade II - Materia Pensamento Computacional
Integrantes do projeto
- **Suelen Marinho:** RGM: 31923160
- **Lelton Borges:** RGM: 27933091
- **Eduardo:** RGM:
- **Raquel:** RGM:
# Implementar e analisar o impacto da evolução computacional em soluções práticas
# Objetivo
Integrar a teoria da evolução das máquinas computacionais com a prática de implementação de soluções, promovendo uma análise crítica do impacto dessas tecnologias. 
Nosso projeto tem implementação em um gerador de senhas seguras.
# Paramêntros de uma senha segura
- **Ter no minimo 8 caracteres**

- **Ter uma letra maiuscula**

- **Ter uma letra minuscula**

- **Ter um caracteres especial**
# Tecnologias Utilizadas
**Dev C++**: é uma ferramenta de código aberto que facilita o desenvolvimento de programas, oferecendo recursos como edição de código, compilação e depuração.
Ela simplifica o processo de escrever, testar e corrigir erros em programas, tornando a programação mais eficiente e acessível. 
# Por que é importante ter uma senha segura?
Ter uma senha segura é fundamental para proteger informações pessoais e evitar acessos não autorizados a contas e sistemas. Senhas fracas podem ser facilmente descobertas
por hackers por meio de ataques como força bruta e phishing. Usar senhas longas, complexas e únicas reduz significativamente o risco de invasões e aumenta a segurança digital.
Com todo avanço tecnológico, a segurança digital é um ponto crucial para proteger informações pessoais como, contas bancárias e até mesmo sistemas corporativos. A importância 
em ter uma senha forte e fundamental na defesa contra ataques cibernéticos. Atualmente, muitas informações sensíveis estão sendo armazenadas online, sem uma proteção adequada,
essas informações podem ser roubadas e utilizadas em fraudes. Hackers usam diversas técnicas para comprometer um sistema, são elas: 
- **Tentam várias combinações até encontrar a certa**
- **Senhas curtas ou simples podem ser quebradas facilmentes**
- **Listas de senhas comuns, exemplo: 123456, algo123, admin.**
- **Enganar usuários para fornecer senhas**

Empresas de serviços onlines são alvos frequentes de ataques e vazamentos de senhas, dentre eles temos esses acontecimentos:

- **RockYou:** O acontecimento foi em 2009, um dos primeiros grandes vazamentos, a empresa RockYou desenvolve aplicativos para redes sociais e sofre um ataque cibernético, Hackers
encontraram uma vulnerabilidades e acessaram o bancos de dados com senhas armazenadas, porém sem criptografia, que no caso texto puro. No arquivo divulgado haviam 82 bilhões
de senhas, mas na verdade eram 8,4 bilhões de senha, de acordo com Altieres Rohr do G1. O caso serviu para chamar atenção para a importância de senhas criptografadas.

- **Linkedin:** O caso ocorreu em 2012, o Linkedin sofreu um ataque cibernético e foi vazado credenciais profissionais, acreditavam que teria sido vazado cerca de 6,5 milhões de
credenciais de acessos, porém em 2016 foi descoberto que 167 milhões de contas foram afetadas.
# Mecanismos de Autenticação
A autenticação é o processo de verificar a autenticidade de uma entidade em relação a um sistema ou algoritmo. Esse mecanismo comprova que as informações fornecidas estão verdadeiramente associadas à entidade em questão e que são verídicas. A autenticação pode ser aplicada em diferentes contextos, como:
- Identificação de um usuário.
- Troca de informações entre máquinas.
- Validação da origem dos dados em uma página web.
## Evolução da Autenticação
Inicialmente, a autenticação visava apenas identificar usuários, garantindo que somente aqueles registrados tivessem acesso ao sistema. Com o tempo, tornou-se necessário também identificar o sistema para o usuário, especialmente em casos de acesso por rede. Exemplos:
- **Acesso a serviços bancários**: O usuário precisa ter certeza de que o sistema acessado é realmente o do banco desejado.
- **Instalação de componentes de software**: O sistema operacional deve garantir que o software instalado provenha de uma fonte confiável.
## Controle de Acesso e Auditoria
Para implementar técnicas de controle de acesso e auditorias, cada processo deve ser associado a seu respectivo usuário através de um **identificador de usuário (UID)**. Características:
- Geralmente um número inteiro usado como chave em uma tabela de usuários cadastrados (ex: `/etc/passwd` em sistemas UNIX).
- Recursos podem estar disponíveis abertamente (ex: pastas públicas ou páginas web públicas).
## Estratégias de Autenticação
As técnicas de autenticação podem ser classificadas em três grupos:
### 1. SYK – *Something You Know* ("algo que você sabe")
- Baseadas em informações conhecidas pelo usuário (ex: login e senha).
- **Vantagem**: Simples de implementar.
- **Desvantagem**: Fraca, pois a informação pode ser facilmente compartilhada ou roubada.
### 2. SYH – *Something You Have* ("algo que você tem")
- Baseadas na posse de algo físico ou digital (ex: certificado digital, smartcard, cartão magnético).
- **Vantagem**: Mais robusta que SYK.
- **Desvantagem**: Dispositivos podem ser roubados ou copiados.
### 3. SYA – *Something You Are* ("algo que você é")
- Baseadas em características biométricas (ex: impressão digital, íris, voz).
- **Vantagem**: Potencialmente mais robusta.
- **Desvantagem**: Complexa de implementar.

## Infraestruturas de Autenticação

Para centralizar e padronizar os métodos de autenticação, surgiram as **infraestruturas de autenticação**, que oferecem:

- Interface de programação unificada para todos os serviços.
- Uso consistente das mesmas credenciais.
- Compatibilidade automática com novas técnicas de autenticação.

### Principais Infraestruturas

| Nome         | Descrição                                                                                | Sistemas/SO Associados         |
| ------------ | ---------------------------------------------------------------------------------------- | ------------------------------ |
| **PAM**      | Módulos de autenticação plugáveis.                                                       | Solaris, Linux, FreeBSD, macOS |
| **XSSO**     | Extensão do PAM para padronização (*Single Sign-On*).                                    | Pouco utilizada.               |
| **BSD Auth** | Autenticação por processos separados (princípio do privilégio mínimo).                   | OpenBSD                        |
| **NSS**      | Define bases de dados para serviços do sistema (incluindo autenticação).                 | Sistemas UNIX                  |
| **GSSAPI**   | Padrão de API para serviços de segurança (autenticação, confidencialidade, integridade). | Multiplataforma                |
| **SSPI**     | Variante proprietária da GSSAPI para Windows.                                            | Windows                        |

## Referências 

- **Wikipedia**. RockYou. Disponível em: [https://en.wikipedia.org/wiki/RockYou](https://en.wikipedia.org/wiki/RockYou). Acesso em: 1 abr. 2025.  
- **G1**. Blog de Tecnologia - G1. Disponível em: [https://g1.globo.com/economia/tecnologia/blog](https://g1.globo.com/economia/tecnologia/blog). Acesso em: 1 abr. 2025.  
- **Keeper Security**. Keeper Security Blog. Disponível em: [https://www.keepersecurity.com/blog](https://www.keepersecurity.com/blog). Acesso em: 1 abr. 2025.  
- **G1**. Vazamento do LinkedIn ressurge com 167 milhões de senhas. Segurança Digital, 18 maio 2016. Disponível em: [https://g1.globo.com/tecnologia/blog/seguranca-digital/post/vazamento-do-linkedin-ressurge-com-167-milhoes-de-senhas.html](https://g1.globo.com/tecnologia/blog/seguranca-digital/post/vazamento-do-linkedin-ressurge-com-167-milhoes-de-senhas.html). Acesso em: 2 abr. 2025.  
- **BORGES, Leonardo Felipe Pellegatti**. Autenticação Multifator e sua Aplicação na Computação em Nuvem. 2023. Disponível em: [https://ric.cps.sp.gov.br/bitstream/123456789/15524/1/20232S_Leonardo%20Felipe%20Pellegatti%20Borges_OD1881.pdf](https://ric.cps.sp.gov.br/bitstream/123456789/15524/1/20232S_Leonardo%20Felipe%20Pellegatti%20Borges_OD1881.pdf). Acesso em: 31 mar. 2025.  
- **MAZIERO, Carlos**. Segurança de Sistemas: Texto 05. Disponível em: [https://wiki.inf.ufpr.br/maziero/lib/exe/fetch.php?media=sc:seg-texto-05.pdf](https://wiki.inf.ufpr.br/maziero/lib/exe/fetch.php?media=sc:seg-texto-05.pdf). Acesso em: 31 mar. 2025.  
- **BORGES, Leonardo Felipe Pellegatti.** _AUTENTICAÇÃO MULTIFATOR E SUA APLICAÇÃO NA COMPUTAÇÃO EM NUVEM_. 2023. Disponível em: [https://ric.cps.sp.gov.br/bitstream/123456789/15524/1/20232S_Leonardo%20Felipe%20Pellegatti%20Borges_OD1881.pdf](https://ric.cps.sp.gov.br/bitstream/123456789/15524/1/20232S_Leonardo%2520Felipe%2520Pellegatti%2520Borges_OD1881.pdf). Acesso em: 31 de Mar 2025
- **MAZIERO, Carlos.** _Segurança de sistemas: texto 05_. Disponível em: [https://wiki.inf.ufpr.br/maziero/lib/exe/fetch.php?media=sc:seg-texto-05.pdf](https://wiki.inf.ufpr.br/maziero/lib/exe/fetch.php?media=sc:seg-texto-05.pdf). Acesso em: 31 de Mar 2025

### Documentação C++
- [Documentação oficial do C++](https://cplusplus.com/)  
- [Site oficial do ISO C++](https://isocpp.org/)
### IDE para C++  
- [Dev-C++ (Bloodshed) – Versão Clássica](https://www.bloodshed.net/devcpp.html) 

