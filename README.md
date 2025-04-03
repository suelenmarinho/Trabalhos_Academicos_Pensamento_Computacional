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

A autenticação é o processo de verificar a autenticidade de uma entidade em relação a um sistema ou algoritmo. Esse mecanismo comprova que as informações fornecidas estão verdadeiramente associadas à entidade em questão e que são verídicas. A autenticação pode ser aplicada em diferentes contextos, como a identificação de um usuário, a troca de informações entre máquinas ou a validação da origem dos dados em uma página web, entre outros exemplos.

No início, a autenticação visava apenas identificar usuários, garantindo que somente aqueles registrados tivessem acesso ao sistema. Com o passar do tempo, tornou-se necessário também identificar o sistema para o usuário, especialmente em casos de acesso por rede. Quando um usuário acessa um serviço bancário via internet, ele precisa ter certeza de que o sistema acessado é realmente o do banco desejado, e não uma página falsa criada para roubar dados bancários. Outro exemplo ocorre durante a instalação de componentes de software, como drivers, que podem acessar camadas mais sensíveis do sistema. Nesse caso, o sistema operacional deve garantir que o software instalado provenha de uma fonte confiável.

Com a evolução da tecnologia, diversos mecanismos de segurança foram implementados para garantir a confidencialidade e integridade dos dados. Dessa forma, as informações são mantidas em sigilo, protegidas contra acessos não autorizados, e disponíveis apenas às partes devidamente autorizadas.

Para permitir a implementação das técnicas de controle de acesso e auditorias, cada processo deve ser associado a seu respectivo usuário através de um identificador de usuário (UID – User Identifier), geralmente um número inteiro usado como chave em uma tabela de usuários cadastrados (como o arquivo /etc/passwd dos sistemas UNIX). Normalmente, somente usuários devidamente autenticados podem ter acesso aos recursos de um sistema. Todavia, alguns recursos podem estar disponíveis abertamente, como é o caso de pastas de arquivos públicas em rede e páginas em um servidor Web público.

## Estratégias de autenticação

As técnicas usadas para a autenticação de um usuário podem ser classificadas em três grandes grupos:

### SYK – Something You Know ("algo que você sabe")
Estas técnicas de autenticação são baseadas em informações conhecidas pelo usuário, como seu nome de login e sua senha. São consideradas técnicas de autenticação fracas, pois a informação necessária para a autenticação pode ser facilmente comunicada a outras pessoas, ou mesmo roubada.

### SYH – Something You Have ("algo que você tem")
São técnicas que se baseiam na posse de alguma informação mais complexa, como um certificado digital ou uma chave criptográfica, ou algum dispositivo material, como um smartcard, um cartão magnético, um código de barras, etc. Embora sejam mais robustas que as técnicas SYK, estas técnicas também têm seus pontos fracos, pois dispositivos materiais, como cartões, também podem ser roubados ou copiados.

### SYA – Something You Are ("algo que você é")
Se baseiam em características intrinsecamente associadas ao usuário, como seus dados biométricos: impressão digital, padrão da íris, timbre de voz, etc. São técnicas mais complexas de implementar, mas são potencialmente mais robustas que as anteriores.

## Infraestruturas de autenticação

Como a autenticação é necessária em diversos serviços de um sistema, desde sessões de terminal até serviços de rede, como e-mail, bancos de dados e terminais gráficos remotos. Historicamente, cada método de acesso possuía seu próprio mecanismo de autenticação, com regras e estruturas de dados específicas. Essa fragmentação dificultava a criação de novos serviços, já que cada um precisava implementar seu próprio sistema de autenticação do zero.

Para solucionar esse problema, surgiram as infraestruturas de autenticação (authentication frameworks), que centralizam e padronizam os métodos de autenticação. Esses sistemas oferecem:

- Uma interface de programação unificada para todos os serviços;
- O uso consistente das mesmas credenciais (como pares login/senha, dados biométricos ou certificados digitais);
- Compatibilidade automática com novas técnicas de autenticação, sem necessidade de adaptação individual em cada serviço.

As principais infraestruturas de autenticação em uso nos sistemas operacionais atuais são:

- **PAM (Pluggable Authentication Modules)**: proposto inicialmente para o sistema Solaris, foi depois adotado em vários outros sistemas UNIX, como FreeBSD, NetBSD, MacOS X e Linux;
- **XSSO (X/Open Single Sign-On)**: é uma tentativa de extensão e padronização do sistema PAM, ainda pouco utilizada;
- **BSD Auth**: usada no sistema operacional OpenBSD; cada método de autenticação é implementado como um processo separado, respeitando o princípio do privilégio mínimo;
- **NSS (Name Services Switch)**: infraestrutura usada em sistemas UNIX para definir as bases de dados a usar para vários serviços do sistema operacional, inclusive a autenticação;
- **GSSAPI (Generic Security Services API)**: padrão de API para acesso a serviços de segurança, como autenticação, confidencialidade e integridade de dados;
- **SSPI (Security Support Provider Interface)**: variante proprietária da GSSAPI, específica para plataformas Windows.

## Referências 

- **Wikipedia**. RockYou. Disponível em: [https://en.wikipedia.org/wiki/RockYou](https://en.wikipedia.org/wiki/RockYou). Acesso em: 1 abr. 2025.  
- **G1**. Blog de Tecnologia - G1. Disponível em: [https://g1.globo.com/economia/tecnologia/blog](https://g1.globo.com/economia/tecnologia/blog). Acesso em: 1 abr. 2025.  
- **Keeper Security**. Keeper Security Blog. Disponível em: [https://www.keepersecurity.com/blog](https://www.keepersecurity.com/blog). Acesso em: 1 abr. 2025.  
- **G1**. Vazamento do LinkedIn ressurge com 167 milhões de senhas. Segurança Digital, 18 maio 2016. Disponível em: [https://g1.globo.com/tecnologia/blog/seguranca-digital/post/vazamento-do-linkedin-ressurge-com-167-milhoes-de-senhas.html](https://g1.globo.com/tecnologia/blog/seguranca-digital/post/vazamento-do-linkedin-ressurge-com-167-milhoes-de-senhas.html). Acesso em: 2 abr. 2025.  
- **BORGES, Leonardo Felipe Pellegatti**. Autenticação Multifator e sua Aplicação na Computação em Nuvem. 2023. Disponível em: [https://ric.cps.sp.gov.br/bitstream/123456789/15524/1/20232S_Leonardo%20Felipe%20Pellegatti%20Borges_OD1881.pdf](https://ric.cps.sp.gov.br/bitstream/123456789/15524/1/20232S_Leonardo%20Felipe%20Pellegatti%20Borges_OD1881.pdf). Acesso em: 31 mar. 2025.  
- **MAZIERO, Carlos**. Segurança de Sistemas: Texto 05. Disponível em: [https://wiki.inf.ufpr.br/maziero/lib/exe/fetch.php?media=sc:seg-texto-05.pdf](https://wiki.inf.ufpr.br/maziero/lib/exe/fetch.php?media=sc:seg-texto-05.pdf). Acesso em: 31 mar. 2025.  
- **BORGES, Leonardo Felipe Pellegatti.** _AUTENTICAÇÃO MULTIFATOR E SUA APLICAÇÃO NA COMPUTAÇÃO EM NUVEM_. 2023. Disponível em: [https://ric.cps.sp.gov.br/bitstream/123456789/15524/1/20232S_Leonardo%20Felipe%20Pellegatti%20Borges_OD1881.pdf](https://ric.cps.sp.gov.br/bitstream/123456789/15524/1/20232S_Leonardo%2520Felipe%2520Pellegatti%2520Borges_OD1881.pdf). Acesso em: 31 de Mar 2025.
- **MAZIERO, Carlos.** _Segurança de sistemas: texto 05_. Disponível em: [https://wiki.inf.ufpr.br/maziero/lib/exe/fetch.php?media=sc:seg-texto-05.pdf](https://wiki.inf.ufpr.br/maziero/lib/exe/fetch.php?media=sc:seg-texto-05.pdf). Acesso em: 31 de Mar 2025
- ATISTA, Rafaela Romaniuc. Análise de redes sociais como ferramenta para estudos métricos da informação no contexto da ciência aberta. 2020. Tese (Doutorado em Ciência da Informação) – Universidade Federal da Paraíba, João Pessoa, 2020. Disponível em: https://repositorio.ufpb.br/jspui/bitstream/123456789/26291/1/RafaelaRomaniucBatista_Tese.pdf. Acesso em:  31 de Mar 2025.
- SANTOS, Raimundo Nonato Macedo dos; BAPTISTA, Sofia Galvão. Ciência aberta na perspectiva da análise de redes sociais: um estudo exploratório. Ciência da Informação, Brasília, v. 49, n. 1, p. 1-20, 2020. Disponível em: https://revista.ibict.br/ciinf/article/view/5558/5800. Acesso em:  31 de Mar 2025.

### Documentação C++
- [Documentação oficial do C++](https://cplusplus.com/)  
- [Site oficial do ISO C++](https://isocpp.org/)
### IDE para C++  
- [Dev-C++ (Bloodshed) – Versão Clássica](https://www.bloodshed.net/devcpp.html) 

