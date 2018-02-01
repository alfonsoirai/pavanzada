int n = valor int a[] = valor Para encontrar los índices que resultan el número del input:

Primero preguntarnos:

1. ¿Qué sucede si ninguno de los índices dan el valor necesario?
2. Verificar que el arreglo esté ordenado
    En caso de que no esté, hacerlo, ya que puede mermar el desempeño.
3. Será importante establecer que sólamente se admiten valores positivos.
4. El tamaño del arreglo debe ser n >= 2.
    - En el caso de que n = 2, se tienen respuestas triviales: existen los índices o no.
    - En caso de que sea 3 o más:
        Lo ideal sería que una vez que se tenga cuál es el target empecemos con el primer índice y le restemos ese valor al target en caso de que éste sea menor que el mismo target. Por ejemplo:
        A = [6,5,9,3,2,1]
        target = 8
        ¿A[0]<target?
        En caso de que sea cierto, le restamos ese valor al target, por lo que el resultado nos arroja 2, es decir, el número que buscamos es 2. Realizaremos el ciclo hasta encontrar ese dos.

Haciendo un análisis, llegamos a la conclusión de que la complejidad sería de mínimo O(n)
    - Recorrer la lista: O(n)
    - Búsqueda + ordenamiento: O(nlogn)
    
    Nos quedaría una complejidad de aprox. O(n^2)

Es probable que implementando una Hash Table tenfamos como caso promedio un O(n).