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
 
 Acá les dejo una lista de reproducción que igual use para aprender (no todos los capitulos son utiles, pero en su mayoria si): https://www.youtube.com/watch?v=dJzLmjSJc2c&list=PLWtYZ2ejMVJlUu1rEHLC0i_oibctkl0Vh
 
__________________________________________
## Material para Temas Específicos


### Busqueda Binaria:
 * General Ideas: 

### Recursividad:
 *

### Grafos:
 * BFS:
  *
 * DFS:
  *
 * Dijkstra:
  *
  
### Programación Dinamica:
 *

### Matemáticas:
 *
