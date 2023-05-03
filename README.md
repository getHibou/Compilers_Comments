# Compilers

[PT/BR] - A tarefa consistia em implementar um AFD que aceite comentários em C, no padrão definido pelo AFD dado, utilizando a solução TIPO 2 (A mesma usada no compilador de TINY).

Especificações:
- O AFD deve aceitar ou rejeitar e ainda imprimir o lexema (quando for o caso).
- O AFD pode ser implementado para aceitar apenas a primeira cadeia de caracteres
que casar com o padrão.
- Caso nenhuma string case com o padrão, apenas informar que nenhum token foi
reconhecido.
- Exemplo: Se a entrada for: /*OI*/*oioi/*comment*/, deve aceitar e imprimir o token
/*OI*/. A substring /*comment*/ casa com o padrão, mas não é a primeira.

[ENG] - The task was to implement an AFD that accepts C comments, in the pattern defined by the given AFD, using the TYPE 2 solution (The same one used in the TINY compiler).

Specifications:
- The AFD must accept or reject and still print the lexeme (where applicable).
- The AFD can be implemented to accept only the first character string
that matches the pattern.
- If no string matches the pattern, just report that no token was
recognized.
- Example: If the input is: /*OI*/*oioi/*comment*/, it should accept and print the token
/*OI*/. The substring /*comment*/ matches the pattern, but is not the first.

### Imagem do AFD // DFA image
![Compiladores](https://user-images.githubusercontent.com/118192459/235937045-7396d9c9-2e96-4462-8359-4c4dfecbccce.png)
