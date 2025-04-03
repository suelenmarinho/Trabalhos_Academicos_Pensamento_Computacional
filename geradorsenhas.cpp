#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<set>
#include<string>

const char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#%&^&*()";
const int tamCaracteres = sizeof(caracteres) - 1;
std::set<std::string> sGeradas;
std::string gSenha(int tamanho) {
if (tamanho< 8) {
printf("O tamanho da senha deve ter pelo menos 8 carateres!\n");
return "";
}

std::string senha;
do{
senha.clear();
for (int i = 0; i<tamanho; i++){
senha += caracteres[rand() % tamCaracteres];
}
} while (sGeradas.find(senha) != sGeradas.end());
sGeradas.insert(senha);
return senha;
}

int main(){
srand(time(0));
int tamSenha;
printf("Digite o tamanaho da senha(minimo 8 caracteres): ");
scanf("%d", &tamSenha);

std::string senha = gSenha(tamSenha);
if (!senha.empty()){
printf("Senha gerada: %s\n", senha.c_str());
}
return 0;
}
