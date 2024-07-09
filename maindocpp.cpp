// #include <iostream>
// #include <string>

// using namespace std;

// class Pessoa {
// private:
//   string nome;
//   string profissao;
//   int titulos;
//   double valor;
//   int aparicoes;
//   int qi;

// public:
//   Pessoa() {
//     nome = "";
//     profissao = "";
//     titulos = 0;
//     valor = 0;
//     aparicoes = 0;
//     qi = 0;
//   }

 
//   Pessoa(string n, string p, int t, double v, int a, int q) {
//     nome = n;
//     profissao = p;
//     titulos = t;
//     valor = v;
//     aparicoes = a;
//     qi = q;
//   }


//   string getNome() const {
//     return nome;
//   }

//   void setNome(string n) {
//     nome = n;
//   }

//   string getProfissao() const {
//     return profissao;
//   }

//   void setProfissao(string p) {
//     profissao = p;
//   }

//   int getTitulos() const {
//     return titulos;
//   }

//   void setTitulos(int t) {
//     titulos = t;
//   }

//   double getValor() const {
//     return valor;
//   }

//   void setValor(double v) {
//     valor = v;
//   }

//   int getAparicoes() const {
//     return aparicoes;
//   }

//   void setAparicoes(int a) {
//     aparicoes = a;
//   }

//   int getQi() const {
//     return qi;
//   }

//   void setQi(int q) {
//     qi = q;
//   }


//   void imprimirInformacoes() const {
//     cout << "Nome: " << nome << endl;
//     cout << "Profissão: " << profissao << endl;
//     cout << "Títulos: " << titulos << endl;
//     cout << "Valor: " << valor << endl;
//     cout << "Aparições: " << aparicoes << endl;
//     cout << "QI: " << qi << endl;
//   }
// };

// int main() {
//   Pessoa pessoa1("Neymar", "Futebol", 29, 4000000000, 595, 9);
//   pessoa1.imprimirInformacoes();

//   cout << endl;

//   Pessoa pessoa2("Tony Stark", "Herói", 0, 67000000000, 10000, 186);
//   pessoa2.imprimirInformacoes();

//   cout << endl;
  
//   Pessoa pessoa3("Cebolácio Menezes da Silva Júnior ", "Tempero", 1, 900000000, 2100, 150);
//   pessoa3.imprimirInformacoes();
  
//   cout << endl;
  
//   Pessoa pessoa4("Ana Flávia Castela","Cantora", 0, 200000000, 10, 50);
//   pessoa4.imprimirInformacoes();

//   cout << endl;



//   return 0;
// }