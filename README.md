[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# Primer TP Taller de Lenguajes

## 2a) Investigación sobre .gitignore

**¿Por qué es conveniente incluirlo?**  
Para ignorar archivos innecesarios (ejecutables, temporales, archivos de sistema) y mantener el repositorio limpio y eficiente.

**¿Cuándo se debe hacer?**  
Al iniciar un proyecto, antes del primer commit.

**¿Cómo configurarlo?**  
1. Crear archivo `.gitignore` en la raíz del proyecto
2. Agregar patrones de archivos a ignorar, por ejemplo para C (*.exe
*.o)


## 3c) Revise los archivos subidos en su repositorio de github

**Archivos presentes:**
- README.md
- tp1_1.c
- tp1_1.exe

**Archivo innecesario:**  
`tp1_1.exe` (es un ejecutable generado al ejecutar el codigo .C)

## 3g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo

**¿Por qué los puntos 2 y 3 dan el mismo resultado? ¿A que se debe?**  
Porque en ambos casos se obtiene la dirección de memoria de la variable a la que apunta el puntero.

**Resultado en punto 4:**  
Obtiene una dirección de memoria diferente, correspondiente a la direccion de memoria de la variable de tipo puntero.

**Diferencia con los anteriores:**  
No es igual porque mientras los puntos 2 y 3 muestran la dirección almacenada en el puntero, el punto 4 muestra la dirección de memoria del puntero.