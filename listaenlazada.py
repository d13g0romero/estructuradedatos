class Nodo:
    def __init__(self, dato):
        self.dato = dato
        self.next = None

class ListaEnlazada:
    def __init__(self):
        self.cabeza = None

    def insertar_al_principio(self, dato):
        nuevo_nodo = Nodo(dato)
        nuevo_nodo.next = self.cabeza
        self.cabeza = nuevo_nodo

    def insertar_al_final(self, dato):
        nuevo_nodo = Nodo(data)
        if not self.cabeza:
            self.head = nuevo_nodo
            return
        temporal = self.cabeza
        while temporal.next:
            temporal = temp.next
        temporal.next = nuevo_nodo

    def insertar_en_medio(self, dato, posicion):
        if posicion == 0:
            self.insertar_al_principio(dato)
            return
        nuevo_nodo = Nodo(dato)
        temporal = self.cabeza
        for _ in range(posicion - 1):
            if temporal is None:
                raise IndexError("Posición fuera de rango")
            temporal = temporal.next
        nuevo_nodo.next = temporal.next
        temporal.next = nuevo_nodo

    def retirar_al_principio(self):
        if not self.cabeza:
            raise Exception("La lista está vacía")
        dato_retirado = self.cabeza.data
        self.cabeza = self.cabeza.next
        return dato_retirado

    def retirar_al_final(self):
        if not self.cabeza:
            raise Exception("La lista está vacía")
        if not self.cabeza.next:
            dato_retirado = self.cabeza.dato
            self.cabeza = None
            return dato_retirado
        temporal = self.cabeza
        while temporal.next.next:
            temporal = temporal.next
        dato_retirado = temporal.next.data
        temporal.next = None
        return dato_retirado

    def esta_vacia(self):
        return self.cabeza is None
    
    def obtener_primero(self):
        if not self.cabeza:
            print("La lista está vacía")
            return None
        return self.cabeza.dato

    def obtener_ultimo(self):
        if not self.cabeza:
            print("La lista está vacía")
            return None
        temporal = self.cabeza
        while temporal.next:
            temporal = temporal.next
        return temporal.dato

    def __str__(self):
        temp = self.cabeza
        lista_str = ""
        while temporal:
            lista_str += str(temporal.data) + " -> "
            temporal = temporal.next
        lista_str += "None"
        return lista_str
    
    def mostrar_orden_datos(self):
        if not self.cabeza:
            print("La lista está vacía.")
            return

        temporal = self.cabeza
        datos = []
        while temporal:
            datos.append(temporal.dato)
            temporal = temporal.next

        print("Orden de los datos en la lista:", datos)
    
def mostrar_menu():
    print("1. Insertar dato al principio de la lista")
    print("2. Insertar dato al final de la lista")
    print("3. Obtener primer elemento de la lista")
    print("4. Obtener último elemento de la lista")
    print("5. Retirar primer elemento de la lista")
    print("6. Retirar último elemento de la lista")
    print("7. ¿La lista está vacía?")
    print("8. Salir")
    print("9.Mostrar lista")

# Ejemplo de uso
# Crear una lista enlazada
lista = ListaEnlazada()

while True:
    mostrar_menu()
    opcion = input("Ingrese el número de la opción deseada: ")

    if opcion == '1':
        dato = input("Ingrese el dato a insertar al principio de la lista: ")
        lista.insertar_al_principio(dato)
        print("Dato insertado correctamente.")

    elif opcion == '2':
        dato = input("Ingrese el dato a insertar al final de la lista: ")
        lista.insertar_al_final(dato)
        print("Dato insertado correctamente.")

    elif opcion == '3':
        primero = lista.obtener_primero()
        if primero is not None:
            print("El primer elemento de la lista es:", primero)

    elif opcion == '4':
        ultimo = lista.obtener_ultimo()
        if ultimo is not None:
            print("El último elemento de la lista es:", ultimo)

    elif opcion == '5':
        try:
            dato_retirado = lista.retirar_al_principio()
            print("Se retiró el elemento:", dato_retirado)
        except Exception as e:
            print(e)

    elif opcion == '6':
        try:
            dato_retirado = lista.retirar_al_final()
            print("Se retiró el elemento:", dato_retirado)
        except Exception as e:
            print(e)

    elif opcion == '7':
        if lista.esta_vacia():
            print("La lista está vacía.")
        else:
            print("La lista no está vacía.")

    elif opcion == '8':
        print("Saliendo del programa...")
        break
              
    elif opcion =='9':
        print("Mostrar la lista...")
        lista.mostrar_orden_datos()

    else:
        print("Opción no válida. Por favor, ingrese un número del 1 al 8.")
