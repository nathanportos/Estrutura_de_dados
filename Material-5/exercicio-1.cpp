#include <iostream>
#include <queue>
#include <string>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    queue<string> fila;
    int opcao;
    string nome;

    cout << "Bem-vindo ao sistema de atendimento da loja!\n";

    do {
        cout << "\nOpções disponíveis:\n";
        cout << "1. Inserir cliente na fila\n";
        cout << "2. Atender próximo cliente\n";
        cout << "3. Exibir fila de espera\n";
        cout << "4. Encerrar o programa\n";

        cout << "\nDigite a opção desejada: ";
        cin >> opcao;

        cin.ignore();

        switch(opcao) {

            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, nome);

                fila.push(nome);

                cout << "Cliente " << nome
                     << " foi adicionado à fila de espera.\n";
                break;

            case 2:
                if(!fila.empty()) {
                    cout << "Atendendo cliente: "
                         << fila.front() << endl;

                    fila.pop();
                } else {
                    cout << "A fila está vazia!\n";
                }
                break;

            case 3:
                if(!fila.empty()) {

                    queue<string> filaTemp = fila;

                    cout << "Fila de espera:\n";

                    while(!filaTemp.empty()) {
                        cout << "- " << filaTemp.front() << endl;
                        filaTemp.pop();
                    }

                } else {
                    cout << "A fila está vazia!\n";
                }
                break;

            case 4:
                cout << "Encerrando o programa...\n";
                break;

            default:
                cout << "Opção inválida!\n";
        }

    } while(opcao != 4);

    return 0;
}