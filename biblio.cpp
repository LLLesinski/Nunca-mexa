// #include <iostream>
// #include <string>

// using namespace std;

// class biblioteca{

// private:
//  int numLivro;
//  string genero;


// public:

// void setGenero(string genero){

//   this->genero = genero;
// }

// void setNumLivro(int numLivro){

//   this->numLivro = numLivro;
// }

// void printBiblio(){

//   cout << "Gênero: " <<  genero << endl;
//   cout << "Numero do livro: " << numLivro << endl;
  
// }
// };

// class livro : public biblioteca{

// private:

// string nome;
// string autor;
// string nacionalidade;
// int paginas;
// int ano;

// public:

// void setNome(string nome){

//   this->nome = nome;
// }

// void setAutor(string autor){

//   this->autor = autor;

// }

// void setNacionalidade(string nacionalidade){

//   this->nacionalidade = nacionalidade;
  
// }

// void setPaginas(int paginas){

//   this->paginas = paginas;
  
// }
// void setAno(int ano){

//   this->ano = ano;
// }
// void printLivro() const{

//   cout << "Nome: " << nome << endl;
//   cout << "Autor(a): " << autor << endl;
//   cout << "Ano: " << ano << endl;
//   cout << "Paginas: " << paginas << endl;
  
// };

// };

// int main(){

//   livro livro1, livro2;
//   int a;

//   livro1.setGenero("Terror");
//   livro1.setNome("Pelas Entranhas");
//   livro1.setNacionalidade("Brasileiro");
//   livro1.setAutor("Triz Parizotto");
//   livro1.setPaginas(240);
//   livro1.setNumLivro(9410);
//   livro1.setAno(2024);

  

//   livro2.setGenero("Romance");
//   livro2.setNome("Os Dois Morrem No Final");
//   livro2.setNacionalidade("Americano");
//   livro2.setAutor("Adam Silveira");
//   livro2.setPaginas(416);
//   livro2.setNumLivro(9813);
//   livro2.setAno(2021);



//   cout << ("Digite o código do livro desejado:\n\n--> ");
//   cin >> a;
  
//   switch(a){

//     case 9410:
      
//       livro1.printBiblio();
//       livro1.printLivro();
//       break;

//     case 9813:
      
//       livro2.printBiblio();
//       livro2.printLivro();
//       break;
    
//   }
  

//   return 0;
// }
