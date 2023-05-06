#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to store information about a book Estructura para almacenar la info de los libros
struct Libro {
    string titulo;
    string autor;
    string ISBN;
    int precio;
    int cantidad;
    int abastecer;
    int vender;
};

// Función para agregar un libro al catalogo
void agregarLibro(vector<Libro>& catalogo) {
    Libro nuevoLibro;
    cout << "Ingrese el titulo del libro: ";
    getline(cin, nuevoLibro.titulo);
    cout << "Ingrese el autor del libro: ";
    getline(cin, nuevoLibro.autor);
    cout << "Ingrese el código ISBN del libro: ";
    getline(cin, nuevoLibro.ISBN);
    cout << "Ingrese el precio del libro: ";
    cin >> nuevoLibro.precio;
    nuevoLibro.cantidad = 0;
    nuevoLibro.abastecer = 0;
    nuevoLibro.vender = 0;
    catalogo.push_back(nuevoLibro);
    cout << "El libro se agregó correctamente.\n";
    cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
  //  cin.ignore(); // ignore the newline character left in the input stream
}

// función para retirar un libro del catalogo
void retirarLibro(vector<Libro>& catalogo) {
    string ISBN;
    cout << "Ingrese el código ISBN del libro que desea retirar: ";
    getline(cin, ISBN);
    auto it = find_if(catalogo.begin(), catalogo.end(), [&ISBN](const Libro& Libro) { return Libro.ISBN == ISBN; });
    if (it != catalogo.end()) {
        catalogo.erase(it);
        cout << "El libro se retiró del catálogo.\n";
        cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
    } else {
        cout << "No se encontró un libro con ese ISBN.\n";
        cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
    }
}

// Función para buscar un libro por título
void buscarPorTitulo(const vector<Libro>& catalogo) {
    string titulo;
    cout << "Ingrese el título del libro que quiere buscar: ";
    getline(cin, titulo);
    bool found = false;
    for (const auto& libro : catalogo) {
        if (libro.titulo == titulo) {
            cout << "Titulo: " << libro.titulo << "\n";
            cout << "Autor: " << libro.autor << "\n";
            cout << "ISBN: " << libro.ISBN << "\n";
            cout << "Price: $" << libro.precio << "\n";
            cout << "Cantidad en el inventario: " << libro.cantidad << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No se encontró ningún libro con ese título.\n";
        cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
    }
}

// Función para buscar un libro por ISBN
void buscarPorISBN(const vector<Libro>& catalogo) {
    string ISBN;
    cout << "Ingrese el código ISBN del libro que desea buscar: ";
    getline(cin, ISBN);
    bool found = false;
    for (const auto& libro : catalogo) {
        if (libro.ISBN == ISBN) {
            cout << "Título: " << libro.titulo << "\n";
            cout << "Autor: " << libro.autor << "\n";
            cout << "ISBN: " << libro.ISBN << "\n";
            cout << "Precio: $" << libro.precio << "\n";
            cout << "Cantidad en el inventario: " << libro.cantidad << "\n";
            found = true;
            cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
        }
    }
    if (!found) {
        cout << "No se encontró ningún libro con ese ISBN.\n";
        cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
    }
}

// Función para agregar ejemplares de un libro
void agregarLibro (vector<Libro>& catalogo, int& efectivo) {
    string ISBN;
    int cantidad;
    cout << "Ingrese el código del libro del cual desea agregar ejemplares"<<endl;
    getline(cin, ISBN);
    auto it = find_if(catalogo.begin(), catalogo.end(), [&ISBN](const Libro& Libro) { return Libro.ISBN == ISBN; });
    cout << "¿Cuántas copias del libro desea agregar?"<<endl;
    cin>>cantidad;
   if (it != catalogo.end()) {
if (it->cantidad <= cantidad) {
it->cantidad += cantidad;
it->abastecer+=cantidad;
efectivo += cantidad * it->precio;
cout << "Actualmente existen " << cantidad << " ejemplares del libro " << it->titulo << ".\n";
} else {
cout << "No hay suficientes ejemplares en inventario para realizar la venta.\n";
}
} else {
cout << "No se encontró ningún libro con ese ISBN.\n";
cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
}
}
   
// Función para vender ejemplares de un libro
void venderLibro(vector<Libro>& catalogo, int& efectivo) {
string ISBN;
int cantidad;
cout << "Ingrese el ISBN del libro que desea vender: ";
getline(cin, ISBN);
auto it = find_if(catalogo.begin(), catalogo.end(), [&ISBN](const Libro& Libro) { return Libro.ISBN == ISBN; });
if (it != catalogo.end()) {
cout << "Ingrese la cantidad de ejemplares que desea vender: ";
cin >> cantidad;
if (it->cantidad >= cantidad) {
it->cantidad -= cantidad;
it->vender++;
efectivo += cantidad * it->precio;
cout << "Se han vendido " << cantidad << " ejemplares del libro "" << it->titulo << "".\n";
} else {
cout << "No hay suficientes ejemplares en inventario para realizar la venta.\n";
}
} else {
cout << "No se encontró ningún libro con ese ISBN.\n";
cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
}
}
// Función para buscar el libro más costoso
void buscarMasCaro(const vector<Libro>& catalogo) {
auto it = max_element(catalogo.begin(), catalogo.end(), [](const Libro& a, const Libro& b) { return a.precio < b.precio; });
if (it != catalogo.end()) {
cout << "El libro más costoso es "" << it->titulo << "" con un precio de $" << it->precio << ".\n";
} else {
cout << "No se encontró ningún libro en el catálogo.\n";
}
}
// Función para buscar el libro menos costoso
void buscarMenosCostoso(const vector<Libro>& catalogo) {
auto it = min_element(catalogo.begin(), catalogo.end(), [](const Libro& a, const Libro& b) { return a.precio < b.precio; });
if (it != catalogo.end()) {
cout << "El libro menos costoso es " << it->titulo << " con un precio de $" << it->precio << ".\n";
} else {
cout << "No se encontró ningún libro en el catálogo.\n";
cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
}
}

// Función para buscar el libro más vendido
void buscarMasVendido(const vector<Libro>& catalogo) {
auto it = max_element(catalogo.begin(), catalogo.end(), [](const Libro& a, const Libro& b) { return a.vender < b.vender; });
if (it != catalogo.end()) {
cout << "El libro más vendido es "" << it->titulo << "" con " << it->vender << " transacciones de venta.\n";
} else {
cout << "No se encontró ningún libro en el catálogo.\n";
}
}

int main() {
vector<Libro> catalogo;
int efectivo = 1000000;
bool running = true;
while (running) {
cout << "\n ¿Qué acción desea realizar?\n";
cout<<"=//==//==//==//==//==//==//==//==//==//==//==//=";
cout << "1. Registrar un libro en el catálogo.\n";
cout << "2. Eliminar un libro del catálogo.\n";
cout << "3. Buscar un libro por título.\n";
cout << "4. Buscar un libro por ISBN.\n";
cout << "5. Abastecer ejemplares de un libro.\n";
cout << "6. Vender ejemplares de un libro.\n";
cout << "7. Buscar el libro más costoso.\n";
cout << "8. Salir del programa.\n";
int opcion;
cin >> opcion;
cin.ignore();
switch (opcion) {
case 1:
agregarLibro(catalogo);
break;
case 2:
retirarLibro(catalogo);
break;
case 3:
buscarPorTitulo(catalogo);
break;
case 4:
buscarPorISBN(catalogo);
break;
case 5:
agregarLibro(catalogo,efectivo);
break;
case 6:
venderLibro(catalogo, efectivo);
break;
case 7:
buscarMasCaro(catalogo);
break;
case 8:
running = false;
break;
default:
cout << "La opción ingresada no es válida. Intente de nuevo.\n";
break;
}
}
cout << "El programa ha finalizado. Se han vendido $" << efectivo << " en total.\n";
return 0;
}
