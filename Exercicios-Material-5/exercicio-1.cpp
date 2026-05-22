#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pilha;
    int opcao, valor;

    do {
        cout << "\n=== MENU ===\n"
             << "1. Inserir (push)\n"
             << "2. Remover (pop)\n"
             << "3. Ver topo (top)\n"
             << "4. Verificar se vazia\n"
             << "5. Tamanho\n"
             << "0. Sair\n"
             << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Valor: "; cin >> valor;
                pilha.push(valor);
                cout << "Inserido: " << valor << "\n";
                break;
            case 2:
                if (pilha.empty()) cout << "Pilha vazia!\n";
                else { cout << "Removido: " << pilha.top() << "\n"; pilha.pop(); }
                break;
            case 3:
                if (pilha.empty()) cout << "Pilha vazia!\n";
                else cout << "Topo: " << pilha.top() << "\n";
                break;
            case 4:
                cout << (pilha.empty() ? "Vazia: sim" : "Vazia: nao") << "\n";
                break;
            case 5:
                cout << "Tamanho: " << pilha.size() << "\n";
                break;
        }
    } while (opcao != 0);
}
