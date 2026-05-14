# Sistema de Nómina - Polimorfismo en C++

Este proyecto implementa un sistema de nómina para una empresa de desarrollo de software usando herencia y polimorfismo en C++.



# Evidencia de ejecución

## Salida de consola

NOMINA DE EMPLEADOS

Empleado: Carlos | Salario: 2000
Empleado: Ana | Salario: 2200
Empleado: Laura | Salario: 4800
Empleado: Mateo | Salario: 5400
Empleado: Sofia | Salario: 6250
Empleado: Andres | Salario: 6875
Empleado: Camila | Salario: 2625
Empleado: Juan | Salario: 2730

TOTAL NOMINA: 32880

¿Cuál es la clase base y por qué?

La clase base del programa es Empleado, ya que todos los tipos de empleados tienen cosas en común, como el nombre y el salario base. Me pareció lo más lógico crear una clase general con esos atributos y a partir de ella hacer las demás clases.

Además, en esta clase se define el método calcularSalario(), que luego cada tipo de empleado implementa de manera diferente según el bono que le corresponde.

⸻

¿Qué método se sobrescribe en las clases derivadas?

El método que se sobrescribe es calcularSalario().

Cada clase derivada tiene su propia forma de calcular el salario:

* El desarrollador junior recibe solamente el salario base.
* El desarrollador senior recibe un 20% adicional.
* El líder técnico recibe un 25% adicional.
* El tester recibe un 5% adicional.

De esta manera, aunque el método tenga el mismo nombre, cada clase realiza un cálculo distinto.

⸻

¿Dónde se evidencia el polimorfismo en el programa?

El polimorfismo se puede ver en el vector vector<Empleado*> empleados.

En ese vector se almacenan objetos de diferentes clases, pero todos se manejan como si fueran de tipo Empleado.

Cuando se recorre el vector y se llama al método calcularSalario(), cada objeto ejecuta automáticamente la versión del método que le corresponde según su tipo.

⸻

¿Por qué sería menos adecuado usar muchos if o switch?

Se podría hacer el programa utilizando varios if o switch, pero el código quedaría más largo y menos organizado.

Con el uso de herencia y polimorfismo, cada clase se encarga de su propio comportamiento, lo que hace que el programa sea más fácil de entender y mantener.

Además, si en el futuro se necesita agregar un nuevo tipo de empleado, basta con crear una nueva clase sin tener que modificar el código existente.

⸻

Dificultad encontrada

Una de las dificultades que tuve fue un error de compilación llamado undefined reference.

Al principio no entendía por qué ocurría, ya que el código parecía estar bien escrito.

Después de revisar el proyecto, encontré que el archivo Empleado.cpp no estaba incluido en el CMakeLists.txt.

Por esa razón, el compilador reconocía las clases, pero no encontraba la implementación de los métodos de la clase base.

Cuando agregué ese archivo al CMakeLists.txt, el programa compiló correctamente.

Esta situación me ayudó a entender que todos los archivos .cpp deben incluirse en la configuración del proyecto para que puedan compilarse.

⸻

Uso de IA

Opción B: usé IA como apoyo

Durante esta actividad utilicé inteligencia artificial como herramienta de apoyo.

La usé principalmente para aclarar dudas sobre algunos errores de compilación, reforzar el concepto de polimorfismo y mejorar la redacción de la documentación.

⸻

Fragmento o idea sugerida por la IA

Una de las ideas que obtuve fue organizar el programa usando una clase base llamada Empleado con un método virtual calcularSalario(), de manera que cada tipo de empleado pudiera implementar su propia versión del método.

⸻

Qué revisé antes de usarlo

Antes de incluir las sugerencias, verifiqué que el programa compilara correctamente, que los salarios se calcularan de forma adecuada y que se cumplieran todos los requisitos del ejercicio.

⸻

Qué cambié o adapté

Realicé varios ajustes, como cambiar algunos nombres de variables, organizar el proyecto en archivos .h y .cpp, y redactar las explicaciones con palabras más sencillas y acordes con lo aprendido en clase.

⸻

Reflexión final

La inteligencia artificial fue una herramienta de apoyo, pero el desarrollo, la comprensión del código y la responsabilidad sobre el trabajo son completamente míos.

Puedo explicar cómo funciona el programa, cómo se aplican la herencia y el polimorfismo, y por qué se tomaron las decisiones de diseño.
