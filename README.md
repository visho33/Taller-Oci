# Taller de Programación Olimpiada Chilena de Informática
## 2020

# Introducción

En este taller aprenderás las técnicas y habilidades necesarias para resolver problemas algorítmicos de [programación competitiva](https://es.wikipedia.org/wiki/Usuario:Ltaravilse/Programaci%C3%B3n_competitiva) y poder participar en la [Olimpiada Chilena de Informatica](https://www.olimpiada-informatica.cl/) de este año.

Sin embargo, las habilidades que adquirirás en este taller van mucho más allá que simplemente participar en la OCI. Aquí aprenderás a programar en C++, lo que te puede ayudar en muchos aspectos de tu vida (podrás hacer que tu computador trabaje para ti). Además, ejercitarás tu pensamiento lógico y mejorarás tu creatividad para abordar diferentes tipos de problemas. Si deseas ingresar a una carrera científica, programar te proporciona notables ventajas durante tu desarrollo profesional (y de hecho las personas que han participado en la OCI se le ha hecho fácil su curso de programación universitaria). Pese a todas estas cosas positivas de la programación, muchas personas practicamos por pura diversión, siendo un excelente pasatiempo durante la pandemia. 

!Recuerda unirte a los canales de comunicación (Discord y Whatsapp) para poder obtener los links de las clases!

# Información Básica

Discord:

Whatsapp:

Clases: Por definir

# Temario tentativo del curso

* Semana 1: Entrada y Salida
* Semana 2: Operaciones basicas
* Semana 3: Bucles y Condicionales
* Semana 4: Arreglos y Vectores
* Semana 5: 
* Semana 6: 
* Semana 7: 
* Semana 8: 
* Semana 9: 
* Semana 10: 
* Semana 11: 

# Estoy pegad@, no sé resolver un problema, no se me ocurre, no sé implementarlo, ¿qué puedo hacer?
En programación competitiva es normal encontrarse con problemas fuera de nuestra zona de comfort, problemas que nos superan, que nos frustran y que inclusive llegan hasta deprimirnos. Problemas que nos hacen decir ["Oh, y ahora quién podrá .. ayudarme?"](https://www.youtube.com/watch?v=VQAonx_tUjM). Para esos programadores y programadoras desamparad@s hay buenas noticias: ¡existen muchas formas de recibir ayuda!

Primero que todo, están los talleres presenciales (3 módulos los días viernes). Tanto el profesor como el ayudante estaremos físicamente ahí presentes para que nos bombardeen con preguntas. Tanto código como teoría, lo que sea. No tengan miedo, pregunten. Del mismo modo, también están sus compañer@s. En un curso siempre hay alumn@s más experimentad@s que sobresalen. Aprovechenl@s y háganles preguntas. Conversen. No es necesario estar toda la clase callad@ sin interactuar con nadie. La idea es que aprovechen la instancia presencial para discutir sobre los problemas con sus compañer@s y con el staff del curso.

Sin embargo, sabemos que la timidez es un problema y no tod@s se sienten cómod@s preguntando en persona, por lo cual también existen alternativas de ayuda remota:
 * **Telegram**. Pueden hacer preguntas en el grupo de Telegram del curso. Si necesitan una ayuda más personalizada, Telegram también permite chatear directamente con personas (1 a 1), ya sea con el profesor, el ayudante o incluso con sus otros compañer@s más experimentad@s (por Telegram se puede mandar hasta archivos e incluso screenshots de códigos).
 * **Google Docs con explicaciones**. como sale explicado más arriba en el [apartado sobre bonuses](#3-bonuses), existe un bonus para ganar décimas que consiste en explicar soluciones de problemas (por favor leer el [apartado sobre bonuses](#3-bonuses) para más detalles). Si bien es un bonus, la idea es que a la vez sirva como un medio solidario para la difusión del conocimiento. Aprovechen estos google docs para enriquecerse con la sabiduría de los demás ([éticamente](#reglas-ética), por supuesto) y a la vez para compartir su sabiduría con el resto.
 * **La página del curso** (i.e. este archivo que estás leyendo ahora), y en general, **internet**: Si te gusta más estudiar por cuenta propia, más abajo en esta página encontrarás mucho material de estudio disponible sobre distintos temas. Aconsejamos ir consultando estos recursos a medida que vayamos viendo estos temas en el taller. Por supuesto, también está disponible internet. Pero de nuevo, por favor hagan un uso [ético](#reglas-ética) de estos recursos.


# Comentarios Adicionales

### Sobre lenguajes de programación
En programación competitiva el lenguaje más utilizado por lejos es C++. La OCI acepta C, C++ y Java (o eso recuerdo), sin embargo yo solo domino C++ :( así que este será el lenguaje utilizado durante el taller. La verdad, es que recomiendo que si quieres hacer programación competitiva aprendas C++ ya que la mayoría de los recursos se escriben teniendo en cuenta este lenguaje (de hecho en las clases del taller avanzado de la OCI se usa este lenguaje).

### Sobre restricciones de tiempo y memoria en programación competitiva
 -**Para no asustarse, no leer si estás recién comenzando**
 - Los problemas de programación tienen límites de tiempo (ej. 3 segundos) y memoria (ej. 256 MB). Esto significa que soluciones muy lentas o soluciones que requieren anotar demasiadas cosas **no funcionarán**.
 - En C++, pueden hacerse un poco más de **10^8 operaciones baratas por segundo** (una estimación bien al ojo por experiencia con diferentes jueces online). Por lo tanto, si les dan K segundos de tiempo límite, a lo más podrán hacer un poco más de K * 10^8 operaciones baratas. Tengan esto muy presente.
 - **MUY IMPORTANTE**: **ANTES DE TOCAR EL TECLADO, ANTES DE ESCRIBIR LA PRIMERA LÍNEA DE CÓDIGO**, es sumamente importante estimar cuánto se va a demorar la estrategia/algoritmo que quiero programar. Nadie quiere desperdiciar su tiempo programando una solución que después es muy lenta y nos da TLE (Time Limit Exceeded). Es por esto que **siempre deben estimar la [complejidad computacional](https://en.wikipedia.org/wiki/Time_complexity)** de su algoritmo y **evaluarla en el caso borde más grande** (peor caso). Por ejemplo, si un problema depende de N donde 1 <= N <= 10^5 y mi algoritmo es cuadrático (complejidad = O(N^2)), entonces en el peor caso haré (10^5)^2 = 10^10 operaciones, y por ende según el punto anterior necesitaría **100 segundos** para correrlo. En cambio, si mi algoritmo tiene complejidad O(N\*log(N)) entonces en el peor caso sólo haré 10^5 * log(10^5) = 1.7 * 10^6 operaciones (aprox.), y por ende sólo necesitaría **0.017 segundos** (la nada misma) para correrlo. Entonces, si mi problema tiene un tiempo máximo de ejecución de 2 segundos, ¿qué algoritmo va a funcionar? Claramente el segundo.
 - Si van a usar mucha memoria, preocúpense de **no pasarse del límite de memoria permitido**. Por ejemplo si les dan 256MB de memoria, en bytes eso es 256 * 1024 * 1024 = 268435456 bytes, un int32 ocupa 4 bytes, así que como máximo podrían crear un arreglo de int32 de largo 67108864 = 6.7 * 10^7 aprox (o la mitad si usan un int64, un double, etc.). También podría acabárseles la memoria si hacen demasiadas llamadas recursivas [[1](https://codeforces.com/blog/entry/47003), [2](https://stackoverflow.com/a/11777585/2801404)].
 
### Mensaje para nuevos en programación

Sé que puede ser díficil en un comienzo aprender a programar (también pasé por eso), sin embargo, es algo super divertido :D y gratificante, es muy placentero cuando las cosas funcionan bien.

_________________________________

# Recursos para Consultar

### General

* Libro excelente con el que yo aprendí: https://cses.fi/book/book.pdf
* Libro también excelente y en español: 
* Canal de youTube de la comunidad chilena progcomp: https://www.youtube.com/c/Programaci%C3%B3nCompetitivaCL/featured
* Página de programación competitiva con muchos problemas:https://codeforces.com/
* Problem-set con muchos problemas: https://cses.fi/problemset/

### Aprender C++
 Yo uso el programa Dev-C++, hay muchos otros igual de válidos (codeblocks por ej) pero dejo el link de descarga del que uso yo 
 * Descargar Dev-C++: https://sourceforge.net/projects/orwelldevcpp/files/latest/download
 
 Yo aprendí lo básico de C++ con la aplicación para moviles "SoloLearn", la recomiendo mucho.
___________________________________________
## Material para Temas Específicos

### Tricks para problemas Ad-Hoc:
 * General Ideas: https://codeforces.com/blog/entry/48417
 
### Tips para implementación con C++
* Cosas útiles que deberían saber de **C++11** (<<<< **PARA ESCRIBIR CÓDIGOS MÁS CORTOS Y ELEGANTES**):
  * Tutorial: C++11 for programming contests: https://codeforces.com/blog/entry/10124
  * Learn C++ 11 in 20 Minutes - Part I: https://youtu.be/U6mgsPqV32A
  * Learn C++ 11 in 20 Minutes - Part II: https://youtu.be/Lt0ASrloGSE
* [Codeforces - Manejo de Strings en C++](https://codeforces.com/blog/entry/6230) (<<< **buenos tips para cuando tienen que leer input**)
* [Youtube playlist: lista exhaustiva de videos cubriendo muchísimos aspectos de C++](https://www.youtube.com/playlist?list=PLfVsf4Bjg79Cu5MYkyJ-u4SyQmMhFeC1C)
* Los beneficios de usar references (&) y pointers (*):
   * [geeksforgeeks - Passing vector to a function in C++](https://www.geeksforgeeks.org/passing-vector-function-cpp/)
   * [geeksforgeeks - When do we pass arguments by reference or pointer?](https://www.geeksforgeeks.org/when-do-we-pass-arguments-by-reference-or-pointer/)   
   * [Diferencia entre references y pointers explicada](http://www.ntu.edu.sg/home/ehchua/programming/cpp/cp4_pointerreference.html)
* STL: standard template library (<<< buen material sobre la standard library de C++, **MUY RECOMENDADO**)
  * Introduction of STL #1: Overview: https://youtu.be/ltBdTiRgSaw
  * Introduction of STL #2: Sequence Containers: https://youtu.be/gxZJ5JNuWMY
  * Introduction of STL #3: Associative Containers: https://youtu.be/6iyzPed7FrM
  * Introduction of STL #4: Unordered Containers: https://youtu.be/NNLvY9O7ufU
  * Introduction of STL #5: Iterators and Algorithms: https://youtu.be/vO2AlrBf5rQ
  * Introduction of STL #6: Functors: https://youtu.be/shqvSkk8r0M
  * [Topcoder: power up c++ with the standard template library part 1](https://www.topcoder.com/community/competitive-programming/tutorials/power-up-c-with-the-standard-template-library-part-1/)
  * [Topcoder: power up c++ with the standard template library part 2](https://www.topcoder.com/community/competitive-programming/tutorials/power-up-c-with-the-standard-template-library-part-2/)
  * [Youtube playlist: varios algoritmos de la librería estándar de C++ para llegar y usar](https://www.youtube.com/playlist?list=PLVFrD1dmDdve4h3Shk0uePpXp8JUMM1w5)
* Para aprender a trabajar con bits:
  * [HackerRank - Algorithms: Bit Manipulation](https://youtu.be/NLKQEOgBAnw)
  * [Tutorial sobre Bitwise Operators](https://www.cprogramming.com/tutorial/bitwise_operators.html)
  * [¿Qué es bit masking?](https://stackoverflow.com/questions/10493411/what-is-bit-masking)
  * [geeksforgeeks - Bitwise hacks for competitive programming](https://www.geeksforgeeks.org/bitwise-hacks-for-competitive-programming/)
  * [geeksforgeeks - Bit Tricks for competitive programming](https://www.geeksforgeeks.org/bit-tricks-competitive-programming/)
* ¿Qué son y para qué sirven **Structs** y **Classes** en C++?
  * Advanced C++: Struct Vs. Class: https://youtu.be/qJ4Kzk6mnFc
  * Introduction to Structures in C++ | CPP Programming Video Tutorial: https://youtu.be/6gg9Xlv35-I
  * Buckys C++ Programming Tutorials - 12 - Introduction to Classes and Objects: https://youtu.be/ABRP_5RYhqU
  * Structure and Class differences in C++ | C ++ Tutorial | Mr. Kishore: https://youtu.be/W1f3TelobMg
  * CLASSES vs STRUCTS in C++: https://youtu.be/fLgTtaqqJp0

### Backtracking
* https://progcomp.cl/backtracking
* 6 Introduction to Backtracking - Brute Force Approach: https://www.youtube.com/watch?v=DKCbsiDBN6c
* 6.1 N Queens Problem using Backtracking: https://www.youtube.com/watch?v=xFv_Hl4B83A
* 6.2 Sum Of Subsets Problem - Backtracking: https://www.youtube.com/watch?v=kyLxTdsT8ws
* 6.3 Graph Coloring Problem - Backtracking: https://www.youtube.com/watch?v=052VkKhIaQ4
* Algorítmia - Tema 5. Backtracking. N-Reinas - Andrés Muñoz Ortega: https://www.youtube.com/watch?v=XQYGwKiqV3Y

### Search:
* Binary Search:
  * [Youtube - Excelente video explicando binary search (**RECOMENDADO**)](https://www.youtube.com/watch?v=jf1baieXkSQ) 
  * [Youtube - muy buena comparación entre linear search y binary search (+ código)](https://www.youtube.com/watch?v=wNVCJj642n4)
  * [Youtube - Algorithms: Binary Search](https://youtu.be/P3YID7liBug)
  * http://progcomp.cl/binarysearch
  * [Ejemplo de implementación en C++](https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Search/BinarySearch.cpp)  
  * [geeksforgeeks - Binary Search functions in C++ STL (binary_search, lower_bound and upper_bound)](https://www.geeksforgeeks.org/binary-search-functions-in-c-stl-binary_search-lower_bound-and-upper_bound/)
  * caso especial: [binary search on doubles - codeforces](http://codeforces.com/blog/entry/20390) **cuando el problema es continuo (no-discreto)**
* Ternary Search:
  * https://www.hackerearth.com/practice/algorithms/searching/ternary-search/tutorial/
  * https://en.wikipedia.org/wiki/Ternary_search
  * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Search/TernarySearch.cpp
  * **Cómo reducir Ternary Search a Binary Search**: [Codeforces - The great ternary search hoax](http://codeforces.com/blog/entry/11497)

### Dynamic Programming (DP):
* ¿Qué es DP?
  * [What Is Dynamic Programming and How To Use It](https://www.youtube.com/watch?v=vYquumk4nWw) **<<<<< MUY BUEN VIDEO, VÉANLO!**
  * [Principle of Optimality - Dynamic Programming introduction](https://www.youtube.com/watch?v=5dRGRueKU3M)  
  * [Algorithms: Memoization and Dynamic Programming](https://www.youtube.com/watch?v=P8Xa2BitN3I)
  * [19. Dynamic Programming I: Fibonacci, Shortest Paths](https://www.youtube.com/watch?v=OQ5jsbhAv_M)
* Dos formas generales de usar DP: Bottom-Up vs Top-Down:
  * http://stackoverflow.com/questions/6164629/dynamic-programming-and-memoization-bottom-up-vs-top-down-approaches
* Ejemplos de **problemas concretos** donde se puede usar DP:
  * Coin Change: [link](https://youtu.be/jaNZ83Q3QGc)
  * Matrix Chain Multiplication: [link1](https://youtu.be/prx1psByp7U), [link2](https://youtu.be/eKkXU3uu2zk)
  * Longest Increasing Subsequence (LIS): [video](https://youtu.be/fV-TF4OvZpk), [explicación stackoverflow](https://stackoverflow.com/questions/2631726/how-to-determine-the-longest-increasing-subsequence-using-dynamic-programming)
  * Knapsack problem: [link](https://youtu.be/nLmhmB6NzcM)
  * Traveling Salesman Problem (TSP): [video](https://youtu.be/XaXsJJh-Q5Y), [implementación usando bitmasks](https://www.geeksforgeeks.org/bitmasking-dynamic-programming-set-2-tsp/)
  * Minimum Edit Distance Between 2 Strings - The Levenshtein Distance: [link1](https://youtu.be/Xxx0b7djCrs), [link2](https://youtu.be/MiqoA-yF-0M)
  * Otros ejemplos: [playlist](https://www.youtube.com/watch?v=8LusJS5-AGo&list=PLrmLmBdmIlpsHaNTPP_jHHDx_os9ItYXr)
* Optimizaciones para DP: 
  * Divide & Conquer Optimization:
    * http://jeffrey-xiao.github.io/#!/blog/posts/2015-12-14-Divide-and-Conquer-Optimization
    * https://www.hackerrank.com/contests/ioi-2014-practice-contest-2/challenges/guardians-lunatics-ioi14/editorial
    * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Dynamic_Programming/Divide%26ConquerOptimization.cpp     * https://www.youtube.com/watch?v=wLXEWuDWnzI
    
### Greedy:
* https://www.geeksforgeeks.org/greedy-algorithms/
* https://brilliant.org/wiki/greedy-algorithm/
* https://en.wikipedia.org/wiki/Greedy_algorithm
   
### Graphs:
* Slides de Nico Lehmann sobre Grafos:
  * http://campamento2015.progcomp.cl/material (revisar la parte Grafos)
  * http://campamento2016.progcomp.cl/material (revisar la parte Grafos)  
* Trees (Árboles): https://en.wikipedia.org/wiki/Tree_(graph_theory)
* Play list sobre Grafos: https://www.youtube.com/playlist?list=PLrmLmBdmIlpu2f2g8ltqaaCZiq6GJvl1j
* Breadth First Search (BFS) & Depth First Search (DFS):
  * [5.1 Graph Traversals - BFS & DFS -Breadth First Search and Depth First Search](https://www.youtube.com/watch?v=pcKY4hjDrxk)
  * [Graph Traversals - Breadth First and Depth First](https://www.youtube.com/watch?v=bIA8HEEUxZI)
  * [Graph : BFS, DFS](https://www.youtube.com/watch?v=ImMnYq2zP4Y)
  * [Algorithms: Graph Search, DFS and BFS](https://www.youtube.com/watch?v=zaBhtODEL0w)
  * Códigos de ejemplo: [DFS](https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/DFS.cpp) Y [BFS](https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/BFS.cpp)
* Flood Fill: https://en.wikipedia.org/wiki/Flood_fill
* Topological Sort:
  * [Topological Sort Algorithm | Graph Theory](https://www.youtube.com/watch?v=eL-KzMXSXXI)
  * [Topological Sort Graph Algorithm](https://www.youtube.com/watch?v=ddTC4Zovtbc)
  * [Códigos de ejemplo](https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/TopoSort.cpp)
  * [Codeforces - How to check cycles inside a Topological Sort](https://codeforces.com/blog/entry/4907)
* Shortest Paths Algorithms:
  * De un nodo (**single source**) a todos los demás nodos:
    * Dijkstra (cuando NO hay aristas negativas):
      * [Dijkstra's algorithm in 3 minutes — Review and example](https://www.youtube.com/watch?v=_lHSawdgXpI)
      * [Dijkstra's Algorithm (5 minutos)](https://www.youtube.com/watch?v=gdmfOwyQlcI)
      * [Muy buen ejemplo de Dijkstra](https://www.youtube.com/watch?v=5GT5hYzjNoo)
      * [Correctness of Dijkstra's Algorithm](https://www.youtube.com/watch?v=ZjSvU2guTtY)
      * [cp-algorithms: dijkstra (incluye código de ejemplo)](https://cp-algorithms.com/graph/dijkstra.html)
      * [Código de ejemplo](https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/Dijkstra.cpp)
      * [Código de ejemplo Ignacio](https://github.com/ignaciohermosillacornejo/apuntes_icpc/blob/master/graphs/dijsktra/dijsktra.cpp)
    * Bellman-Ford (cuando SÍ hay aristas negativas):
      * [Bellman-Ford in 5 minutes — Step by step example](https://www.youtube.com/watch?v=obWXjtg0L64)
      * [Bellman-Ford in 4 minutes — Theory](https://www.youtube.com/watch?v=9PHkk0UavIM)
      * [Bellman-Ford Algorithm: Proof of Correctness](https://es.coursera.org/lecture/algorithms-on-graphs/bellman-ford-algorithm-proof-of-correctness-txk8R)
      * [Bellman Ford Algorithm - Single Source Shortest Path - Dynamic Programming (17m)](https://www.youtube.com/watch?v=FtN3BYH2Zes)
      * [cp-algorithms: bellman-ford (incluye códigos de ejemplo)](https://cp-algorithms.com/graph/bellman_ford.html)
      * [Código de ejemplo](https://github.com/ignaciohermosillacornejo/apuntes_icpc/blob/master/graphs/bellmanFord/bellmanFord.cpp)
      * ¿Cómo detectar un ciclo negativo con Bellman-Ford?
        * [GeeksforGeeks - Detect a negative cycle in a Graph | (Bellman Ford)](https://www.geeksforgeeks.org/detect-negative-cycle-graph-bellman-ford/)
        * [Proof of Correctness](https://web.stanford.edu/class/archive/cs/cs161/cs161.1168/lecture14.pdf)
  * De todos los nodos (**multiple source**) a todos los nodos:
    * Floyd-Warshall
      * [Floyd–Warshall algorithm in 4 minutes](https://www.youtube.com/watch?v=4OQeCuLYj-4)
      * [All Pairs Shortest Path (Floyd-Warshall) - Dynamic Programming (14m)](https://www.youtube.com/watch?v=oNI0rf2P9gE)
      * [cp-algorithms: floyd-warshall (incluye código de ejemplo)](https://cp-algorithms.com/graph/all-pair-shortest-path-floyd-warshall.html)
      * [Código de ejemplo](https://github.com/ignaciohermosillacornejo/apuntes_icpc/blob/master/graphs/floydWarshall/floydWarshall.cpp)
      * ¿Qué pasa cuando hay ciclos negativos?
        * [Behavior_with_negative_cycles (wikipedia)](https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm#Behavior_with_negative_cycles)
        * [Floyd-Warshall with negative cycles. How do I find all undefined paths?](https://stackoverflow.com/questions/15709277/floyd-warshall-with-negative-cycles-how-do-i-find-all-undefined-paths)
      
* Articulation Points (aka Cut Vertices), Bridges (aka Cut Edges) and Biconnected Components (aka Blocks): 
  * Graph Theory: 53. Cut-Vertices: https://www.youtube.com/watch?v=BxAgmaLWaq4
  * Graph Theory: 55. Bridges and Blocks: https://www.youtube.com/watch?v=iGsxKUzW3cs
  * Menger's Theorem: https://www.youtube.com/watch?v=dUAeleBMRCQ
    * https://www.quora.com/How-can-I-prove-without-using-Mengers-theorem-that-any-two-vertices-of-a-2-connected-graph-lie-on-a-common-cycle
  * Articulation Points Graph Algorithm: https://www.youtube.com/watch?v=2kREIkF9UAs
  * http://web.iitd.ac.in/~bspanda/biconnectedMTL776.pdf
  * https://www.hackerearth.com/practice/algorithms/graphs/articulation-points-and-bridges/tutorial/
  * https://www.hackerearth.com/practice/algorithms/graphs/biconnected-components/tutorial/
  * Código de ejemplo: https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/articulation-points%2Ccut-edges%2Cbiconnected-components.cpp
* Diameter of a Tree:
  * http://cs.stackexchange.com/questions/22855/algorithm-to-find-diameter-of-a-tree-using-bfs-dfs-why-does-it-work
  * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/diameter_of_tree.cpp
* Minimum Spanning Tree:
  * Kruskal's Algorithm:
    * https://www.youtube.com/watch?v=71UQH7Pr9kU
    * https://www.youtube.com/watch?v=fAuF0EuZVCk
  * Prim's Algorithm:
    * https://www.youtube.com/watch?v=cplfcGZmX7I
    * https://www.youtube.com/watch?v=oP2-8ysT3QQ
  * Correcteness Proofs:
    * Proof of Cut Property: https://www.youtube.com/watch?v=P7K7mG8QDVM
    * Proof of Prim's MST algorithm using cut property: https://www.youtube.com/watch?v=UfhUr5QzfiI
    * Correctness of Kruskal's Algorithm: https://www.youtube.com/watch?v=S9PIItOUyzA
  * Example Code: https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/MinimumSpanningTree.cpp    
* Lowest Common Ancestor (LCA):
  * General Overview of Methods:
    * http://codeforces.com/blog/entry/16221 (skip to the LCA part)
  * Sparse Tables and LCA: https://www.youtube.com/watch?v=EKcQt-74bNw
  * Method 1 (RECOMMENDED): Binary Lifting Method (aka jump pointers: https://en.wikipedia.org/wiki/Level_ancestor_problem#Jump_pointer_algorithm):
    * http://codeforces.com/blog/entry/22325
      * Note: as the post says, this method is very handy as it can be also used to compute querys over paths in Trees
    * https://www.youtube.com/watch?v=kOfa6t8WnbI
  * Method 2: Euler Tour + Range Minimun Query:
    * https://www.topcoder.com/community/data-science/data-science-tutorials/range-minimum-query-and-lowest-common-ancestor/
    * Sparse Table Algorithm Range Minimum Query: https://www.youtube.com/watch?v=c5O7E_PDO4U
  * Example Code of Both Methods:
    * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/LCA.cpp
* Level Ancestor:
  * https://en.wikipedia.org/wiki/Level_ancestor_problem
  * https://www.quora.com/Why-does-storing-log-N-pointers-work-in-the-jump-pointer-solution-of-the-level-ancestor-problem
  * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/LA.cpp
* Heavy-Light Decomposition:
  * https://blog.anudeep2011.com/heavy-light-decomposition/
  * https://www.geeksforgeeks.org/heavy-light-decomposition-set-1-introduction/
  * http://codeforces.com/blog/entry/22072
* Max Flow:
  * Episode 33 - Maximum Flow Intuition: https://www.youtube.com/watch?v=K1i-wP82Zdo
  * Cuándo se usa:
     * (MUY RECOMENDADO) Ejemplos de problemas usando flujo: https://www.youtube.com/watch?v=nKcVc8XkFSA
     * Maximum Bipartite Matching: http://www.geeksforgeeks.org/maximum-bipartite-matching/  
  * Ford-Fulkerson Algorithm:
     * https://www.youtube.com/watch?v=Tl90tNtKvxs
     * https://www.youtube.com/watch?v=XPpmzulEmjA
     * https://www.youtube.com/watch?v=MczX0SM3I84
     * https://www.youtube.com/watch?v=GiN3jRdgxU4
     * Intuición detrás del grafo residual: https://cs.stackexchange.com/questions/55041/residual-graph-in-maximum-flow
  * Dinic Algorithm (RECOMENDADO):
     * https://www.youtube.com/watch?v=uM06jHdIC70
     * http://www.cs.cmu.edu/afs/cs.cmu.edu/academic/class/15451-f14/www/lectures/lec11/dinic.pdf
     * http://theory.stanford.edu/~tim/w16/l/l2.pdf
     * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Graphs/Dinic.cpp


### Data Structures:
* Union Find (Disjoint Sets):
  * https://www.youtube.com/watch?v=ID00PMy0-vE
  * http://www.geeksforgeeks.org/union-find-algorithm-set-2-union-by-rank/
  * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Data_Structures/unionfind.cpp
* Segment Tree:
  * http://progcomp.cl/segmenttree
  * https://www.youtube.com/watch?v=ZBHKZF5w4YU
  * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Data_Structures/segment-tree.cpp
* Segment Tree Lazy: 
   * Lazy Propagation Segment Tree: https://www.youtube.com/watch?v=xuoQdt5pHj0
   * Segment Tree - Range Queries with Lazy Updates: https://www.youtube.com/watch?v=CN0N1ddJ9hA
   * Implementaciones de Ejemplo:
     * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Data_Structures/segment-tree-lazy.cpp
     
* Fenwick Tree (a.k.a. BIT o Binary Indexed Tree):
  * [HackerEarth - binary indexed tree made easy](https://www.hackerearth.com/practice/notes/binary-indexed-tree-made-easy-2/)
  * (recomendado) (explicación de Jorge Pérez) https://youtu.be/0PzR0IoqkkU?t=2160
    * https://youtu.be/0PzR0IoqkkU?t=1453 (por si quieren ver la explicación de **sweep line** también que viene justo antes)
  * (recomendado) https://www.youtube.com/watch?v=CWDQJGaN1gY
  * http://progcomp.cl/fenwicktree
  * https://cs.stackexchange.com/questions/10538/bit-what-is-the-intuition-behind-a-binary-indexed-tree-and-how-was-it-thought-a
  * https://www.topcoder.com/community/data-science/data-science-tutorials/binary-indexed-trees/
* Fenwick Tree 2D:
  * http://www.geeksforgeeks.org/two-dimensional-binary-indexed-tree-or-fenwick-tree/
  * (explicación de Jorge Pérez) https://youtu.be/0PzR0IoqkkU?t=4207
  * https://www.topcoder.com/community/data-science/data-science-tutorials/binary-indexed-trees/#2d
* Wavelet Tree: https://www.dcc.uchile.cl/~jperez/papers/ioiconf16.pdf

### Strings:
* Rolling Hashing:
  * https://progcomp.cl/rollinghashing
  * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Strings/RollingHashing.cpp
* Suffix Array:
  * ¿Qué es un suffix array?: [Youtube - Suffix Array introduction](https://www.youtube.com/watch?v=zqKlL3ZpTqs)
  * HackerRank - Suffix Array: https://www.hackerrank.com/challenges/ashton-and-string/topics/suffix-array
  * Suffix Array Construction: https://www.cs.helsinki.fi/u/tpkarkka/opetus/10s/spa/lecture11.pdf
  * Códigos de Ejemplo:
    * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Strings/suffix_array.cpp
    * http://codeforces.com/blog/entry/4025
* Trie:
  * https://en.wikipedia.org/wiki/Trie
  * https://www.youtube.com/watch?v=zIjfhVPRZCg
  * https://www.youtube.com/watch?v=AXjmTQ8LEoI
  * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Strings/Trie.cpp
* KMP (String Pattern Matching):
  * https://www.youtube.com/watch?v=v82y5TCcBhQ
  * https://www.youtube.com/watch?v=V5-7GzOfADQ
  * https://www.youtube.com/watch?v=GTJr8OvyEVQ
  * https://www.youtube.com/watch?v=KG44VoDtsAA
  * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Strings/KMP.cpp
* Shortest Repeating Cycle:
  * http://www.geeksforgeeks.org/find-given-string-can-represented-substring-iterating-substring-n-times/
  * http://stackoverflow.com/questions/6021274/finding-shortest-repeating-cycle-in-word
  * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Strings/shortest_repeating_cycle.cpp

### Mathematics:
* Números Primos:
  *  ¿Qué es un número primo?
     * [What's a Prime Number?](https://www.youtube.com/watch?v=9pgA-H77BLc)
     * [Wikipedia - Prime Number](https://en.wikipedia.org/wiki/Prime_number)
  * Teorema fundamental de la aritmética: todo natural tiene una única factorización prima
     * [wikipedia - Fundamenetal theorem of arithmetic](https://en.wikipedia.org/wiki/Fundamental_theorem_of_arithmetic)
     * [The Fundamental Theorem of Arithmetic](http://www.oxfordmathcenter.com/drupal7/node/165)
     * [Number Theory - Fundamental Theorem of Arithmetic](https://www.youtube.com/watch?v=7sw6LdAfHgE)
  * Tests de Primalidad (cómo saber si un número es primo):
    * [CP-Algorithms: Primality tests](https://cp-algorithms.com/algebra/primality_tests.html)
    * [stackoverflow - Fastest algorithm for primality test](https://stackoverflow.com/questions/2586596/fastest-algorithm-for-primality-test)
    * Miller Rabin:
      * [cp-algorithms: Miller Rabin](https://cp-algorithms.com/algebra/primality_tests.html#toc-tgt-2)
      * https://www.geeksforgeeks.org/primality-test-set-3-miller-rabin/
      * deterministic variant: https://miller-rabin.appspot.com/
  * Criba de Eratóstenes (todos los primos hasta N):
    * [Finding Prime numbers - Sieve of Eratosthenes](https://www.youtube.com/watch?v=eKp56OLhoQs)
    * [Criba de Eratóstenes [ICPCCL 2016]](https://www.youtube.com/watch?v=J4QCQ0dgeCI)
    * https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
    * [Código de ejemplo](https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Mathematics/prime_numbers.cpp)
  * Criba de Eratóstenes Segmentada (más rápida):
    * https://github.com/kimwalisch/primesieve/wiki/Segmented-sieve-of-Eratosthenes
    * https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html#toc-tgt-6
    * https://www.geeksforgeeks.org/segmented-sieve-print-primes-in-a-range/
  * Factorización Prima de Números Enteros:
    * [cp-algorithms: Integer factorization](https://cp-algorithms.com/algebra/factorization.html)
  * Factorización Prima de Factoriales:
    * [Prime Factorization of Factorial](https://forthright48.com/prime-factorization-of-factorial/)
    * [Prime Factorization of Factorials](http://mathforum.org/library/drmath/view/67291.html)

* Aritmética Modular:
  * ¿De qué se trata Aritmética Modular?
    * [Art of Problem Solving: Modular Arithmetic / Introduction](https://artofproblemsolving.com/wiki/index.php/Modular_arithmetic/Introduction)
    * [Wikipedia - Modular Arithmetic](https://en.wikipedia.org/wiki/Modular_arithmetic)
    * [Introduction to Modular arithmetic](https://www.youtube.com/watch?v=9lUSKOjV4d0)
    * [High level introduction to modular arithmetic](https://www.youtube.com/watch?v=r0gYad8auYY)
    * [Congruence (Modular Arithmetic) & 5 Properties Explained with 7 Problems: Ultimate Shortcuts](https://www.youtube.com/watch?v=B1gD6540uWA)
  * Modular Inverse:
    * [cp-algorithms - Modular Inverse](https://cp-algorithms.com/algebra/module-inverse.html)
    * [Youtube - Multiplicative inverses mod n](https://www.youtube.com/watch?v=_bRVA5b4sb4)
  * Modular Exponentiation By Squaring:
    * https://en.wikipedia.org/wiki/Modular_exponentiation#Right-to-left_binary_method
    * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Mathematics/binary_modular_exponentiation.cpp
  * Modular Fibonacci with Exponentiation by Squaring:
    * http://mathoverflow.net/questions/40816/fibonacci-series-mod-a-number  
* Euler's Theorem & Euler's Totient Function:
  * [wikipedia - Euler's Theorem](https://en.wikipedia.org/wiki/Euler%27s_theorem)
  * [wikipedia - Euler's Totient Function](https://en.wikipedia.org/wiki/Euler%27s_totient_function)
  * [cp-algorithms: Euler's Totient Function](https://cp-algorithms.com/algebra/phi-function.html)
* Binary Exponentiation:
  * [cp-algorithms - Binary Exponentiation](https://cp-algorithms.com/algebra/binary-exp.html)  
* Conteo y Combinatoria modular:
  * [Muy buen artículo sobre distintos métodos para calcular combinatorias](https://comeoncodeon.wordpress.com/2011/07/31/combination/)
  * Modular Binomial Coefficient (Choose(n,k) mod X):
    * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Mathematics/modular_binomial_coefficient.cpp
  * Modular Multinomial Coefficient:
    * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Mathematics/modular_multinomial_coefficient.cpp
* Algoritmo de Euclides (cómo encontrar el GCD entre dos números):
    * [youtube - Euclidean Algorithm (Proof)](https://www.youtube.com/watch?v=H_2_nqKAZ5w)
    * [youtube - Number Theory: Euclidean Algorithm - An example](https://www.youtube.com/watch?v=fwuj4yzoX1o)    
    * [cp-algorithms: Euclidean algorithm for computing the greatest common divisor](https://cp-algorithms.com/algebra/euclid-algorithm.html)
    * [youtube - (Discrete Math 1) Euclidian Algorithm](https://www.youtube.com/watch?v=cOwyHTiW4KE)
    * [Euclidean Algorithm – Greatest Common Divisor](https://forthright48.com/euclidean-algorithm)      
    * [geeksforgeeks - std::gcd | C++ inbuilt function for finding GCD](https://www.geeksforgeeks.org/stdgcd-c-inbuilt-function-finding-gcd/)
* Algoritmo de Euclides Extendido (a.k.a. GCD extendido, gcdext):
  * [extended euclidean algorithm](https://forthright48.com/extended-euclidean-algorithm/)
  * [cp-algorithms: Extended Euclidean Algorithm](https://cp-algorithms.com/algebra/extended-euclid-algorithm.html)
  * [gcdext con números negativos?](https://math.stackexchange.com/questions/37806/extended-euclidean-algorithm-with-negative-numbers)
  * [youtube - Algoritmo de Euclides [ICPCCL 2016]](https://www.youtube.com/watch?v=k47fkSULGr0)
  * [youtube - The Extended Euclidean algorithm](https://www.youtube.com/watch?v=hB34-GSDT3k)
  * [código de ejemplo](https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Mathematics/euclidean_algorithm.cpp)  
* Linear Diophantine Equations:
  * [N1--Introduction to Linear Diophantine Equations](https://www.youtube.com/watch?v=TIk3ujphMfk)
  * [N2--Solve Basic Linear Diophantine Equation](https://www.youtube.com/watch?v=5DcoG69NyO0)
  * [Number Theory: Diophantine Equation: ax+by=gcd(a,b)](https://www.youtube.com/watch?v=FjliV5u2IVw)
  * https://cp-algorithms.com/algebra/linear-diophantine-equation.html  
* Linear Congruence Equation:
  * [cp-algorithms: Linear Congruence Equation](https://cp-algorithms.com/algebra/linear_congruence_equation.html)
* Chinese Remainder Theorem (CRT):
  * [youtube - The Chinese Remainder Theorem made easy](https://www.youtube.com/watch?v=ru7mWZJlRQg)
  * [youtube - Chinese Remainder Theorem](https://www.youtube.com/watch?v=zIFehsBHB8o)
  * [codeforces - [Tutorial] Chinese Remainder Theorem](https://codeforces.com/blog/entry/61290)
  * [Chinese Remainder Theorem Part 1 – Coprime Moduli](https://forthright48.com/chinese-remainder-theorem-part-1-coprime-moduli/)
  * [Chinese Remainder Theorem Part 2 – Non Coprime Moduli](https://forthright48.com/chinese-remainder-theorem-part-2-non-coprime-moduli)
  * [código de ejemplo](https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Mathematics/chinese_remainder_theorem.cpp)  
* Lucas's theorem:
  * [wikipedia - Lucas's theorem](https://en.m.wikipedia.org/wiki/Lucas%27s_theorem)
  * [choose(n,k) mod M using Chinese remainder theorem?](https://math.stackexchange.com/questions/95491/n-choose-k-bmod-m-using-chinese-remainder-theorem)  
* Integración Numérica:
  * Wikipedia: https://en.wikipedia.org/wiki/Numerical_integration
  * Codeforces: Tasks involving numerical integration: https://codeforces.com/blog/entry/8242
  * Explanation of Simpson's rule | MIT 18.01SC Single Variable Calculus, Fall 2010: https://www.youtube.com/watch?v=uc4xJsi99bk
  * Simpson's Rule & Numerical Integration: https://www.youtube.com/watch?v=7EqRRuh-5Lk
  * Numerical Integration With Trapezoidal and Simpson's Rule: https://www.youtube.com/watch?v=RTX-ik_8i-k    

### Geometry:
* Video Repaso de Geometría (SÚPER BUENO):
  * Geometría Computacional [ICPCCL 2016]: https://youtu.be/nk5ejrBWORw?list=PL-c_98SOXhxaXMMfnemh2ihniZsj57L8-
* Geometry: 2D points and lines [Tutorial]: https://codeforces.com/blog/entry/48122
* Cross Product and Dot Product: Visual explanation: https://www.youtube.com/watch?v=h0NJK4mEIJU
* Producto Cruz:
  * Cross Product - Math is fun: https://www.mathsisfun.com/algebra/vectors-cross-product.html
  * Cross products | Essence of linear algebra, Chapter 10: https://www.youtube.com/watch?v=eu6i7WJeinw
  * Calculating a 2D Vector's Cross Product: https://stackoverflow.com/questions/243945/calculating-a-2d-vectors-cross-product
  * https://codeforces.com/blog/entry/48122 (saltarse a la parte cross product)
* Producto Punto:
  * https://codeforces.com/blog/entry/48122 (saltarse a la parte dot product)
  * Dot Product & Angle Between Vectors: https://www.youtube.com/watch?v=p8BZTFNSKIw
* Códigos varios de geometría 2D: https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Geometry/Geometry2DUtils.cpp. Incluye:
  * Ejemplo de un struct Point
  * Producto Cruz: Orientación de un punto respecto a un rayo (left, collinear o right)
    * basado en: https://www.geeksforgeeks.org/orientation-3-ordered-points/
  * Ordenar segmentos disjuntos por orden de intersección respecto a un rayo usando producto cruz
  * Detectar intersección de rectángulos
  * Detectar intersección de segmentos
    * basado en: https://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/
  * Detectar intersección de círculos
  * Distancia punto - segmento
    * basado en: https://stackoverflow.com/questions/849211/shortest-distance-between-a-point-and-a-line-segment
  * Distancia punto - recta
  * Hashing de ecuación de recta a partir de 2 puntos
* Trigonometría: https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Geometry/Trigonometry.cpp. Incluye:
  * Cálculo del ángulo de un vector 2D (medido ccw con respecto x+) usando atan2(y,x)
  * Implementación del teorema del coseno para cálcular ángulos internos de triángulos
* Cálculo de Áreas:
  * Teorema de Green (aplicado al caso particular de calcular áreas):
    * lecturas:
        * https://math.stackexchange.com/questions/199003/proving-greens-theorem-for-computing-area
        * https://mathinsight.org/greens_theorem_find_area
    * videos:
        * Green's Theorem: https://www.youtube.com/watch?v=a_zdFvYXX_c
        * 78 - Finding area with Green's theorem: https://www.youtube.com/watch?v=42vEvHpXYP8
        * How to Use Green's Theorem to Find the Area of A Region: https://www.youtube.com/watch?v=w3ugdu0oFgE
        * Green's Theorem: area under an arch | MIT 18.02SC Multivariable Calculus, Fall 2010: https://www.youtube.com/watch?v=KXof0q88xbg
    * Código ejemplo: https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Geometry/GreensTheorem.cpp
  * Área de un polígono simple:
    * http://math.blogoverflow.com/2014/06/04/greens-theorem-and-area-of-polygons/
    * http://stackoverflow.com/questions/451426/how-do-i-calculate-the-area-of-a-2d-polygon    
    * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Geometry/PolygonArea.cpp
* Sweep Line y Radial Sweep Line:
  * https://en.wikipedia.org/wiki/Sweep_line_algorithm
  * https://www.topcoder.com/community/data-science/data-science-tutorials/line-sweep-algorithms/
  * http://codeforces.com/blog/entry/20377
  * https://apps.topcoder.com/forums/?module=Thread&threadID=684537&start=0&mc=6
* Detectar si un punto está dentro de un polígono:
  * http://geomalgorithms.com/a03-_inclusion.html
  * https://en.wikipedia.org/wiki/Point_in_polygon
  * Código ejemplo: https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Geometry/PointInPolygon.cpp
  * Point in Convex Polygon: http://stackoverflow.com/questions/1119627/how-to-test-if-a-point-is-inside-of-a-convex-polygon-in-2d-integer-coordinates
* Dualidad Línea Punto:
  * Buenas slides explicando dualidad: https://algo.kaust.edu.sa/Documents/cs372l13.pdf
  * Excelente pdf con demostraciones: https://pdfs.semanticscholar.org/810c/e0c19283481567c6545bf8c0cc8a4dcb8a1f.pdf  
  * Aplicación interactiva: http://students.cec.wustl.edu/~tdeck/duality/
* Convex Hull:
  * Buen video explicando Convex Hull: https://www.youtube.com/watch?v=wRTGDig3jx8
  * Monotone Chain Algorithm (algoritmo recomendado):
    * Video animación: https://www.youtube.com/watch?v=A4uWWnzTplM
    * Ejemplos de implementaciones:
      * https://en.wikibooks.org/wiki/Algorithm_Implementation/Geometry/Convex_hull/Monotone_chain
      * https://github.com/PabloMessina/Competitive-Programming-Material/blob/master/Geometry/ConvexHull.cpp
* Convex Hull Trick:
  * https://wcipeg.com/wiki/Convex_hull_trick
  * https://stackoverflow.com/questions/17834699/what-is-convex-hull-trick-exactly

### Square Root Decomposition
  * [cp-algorithms: square decomposition](https://cp-algorithms.com/data_structures/sqrt_decomposition.html)
  * Mo's Algorithm:
    * [cp-algorhtms: Mo's algorithm](https://cp-algorithms.com/data_structures/sqrt_decomposition.html#toc-tgt-4)
    * [geeksforgeeks: Mo's algorithm (query square root decomposition)](https://www.geeksforgeeks.org/mos-algorithm-query-square-root-decomposition-set-1-introduction/)
    * [geeksforgeeks: extended Mo's algorithm (O(1) time complexity)](https://www.geeksforgeeks.org/extended-mos-algorithm-o1-time-complexity/)
