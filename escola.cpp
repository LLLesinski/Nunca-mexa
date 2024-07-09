#include <iostream>
#include <string>

using namespace std;

class pessoa {
private:
  string nome;
  string genero;
  int idade;

public:
  void setNome(string nome) {
    this->nome = nome;
  }

  void setGenero(string genero) {
    this->genero = genero;
  }

  void setIdade(int idade) {
    this->idade = idade;
  }

  string getNome() const {
    return nome;
  }

  string getGenero() const {
    return genero;
  }

  int getIdade() const {
    return idade;
  }
};

class estudante : public pessoa {
private:
  long int registro;
  string classe;
  string serie;

public:
  void setRegistro(long int registro) {
    this->registro = registro;
  }

  void setClasse(string classe) {
    this->classe = classe;
  }

  void setSerie(string serie) {
    this->serie = serie;
  }

  long int getRegistro() const {
    return registro;
  }

  string getClasse() const {
    return classe;
  }

  string getSerie() const {
    return serie;
  }
};

class professor : public pessoa {
private:
  string materia;
  int experiencia;

public:
  void setMateria(string materia) {
    this->materia = materia;
  }

  void setExperiencia(int experiencia) {
    this->experiencia = experiencia;
  }

  string getMateria() const {
    return materia;
  }

  int getExperiencia() const {
    return experiencia;
  }
};

int main() {
  estudante aluno1;
  aluno1.setNome("João do pão");
  aluno1.setGenero("Masculino");
  aluno1.setIdade(17);
  aluno1.setRegistro(20230101);
  aluno1.setClasse("A");
  aluno1.setSerie("3º Ano");

  cout << "Nome do aluno: " << aluno1.getNome() << endl;
  cout << "Registro do aluno: " << aluno1.getRegistro() << endl;

  professor prof1;
  prof1.setNome("Julia");
  prof1.setGenero("Feminino");
  prof1.setIdade(18);
  prof1.setMateria("Matemerics");
  prof1.setExperiencia(10);

  cout << "\nNome do professor: " << prof1.getNome() << endl;
  cout << "Materia que leciona: " << prof1.getMateria() << endl;

  return 0;
}