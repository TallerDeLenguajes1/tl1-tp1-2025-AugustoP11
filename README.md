[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)


# Taller de Lenguajes I

Trabajo Práctico N°1

Alumno: Ponce Matias Augusto

Año: 2025

## Sobre el archivo .gitignore
#### ¿Qué es?
El archivo **.gitignore**, es un archivo de texto que le indica a Git qué archivos o carpetas ignorar en un proyecto.

#### ¿Por qué es conveniente incluirlo?
En los proyectos habrá archivos que no queremos que sean públicos como contraseñas, datos sensibles, archivos temporales, etc. Por lo que es conveniente incluir .gitignore en estos casos, ya que nos permitirá que Git ignore estos archivos y **no se vean afectados por sus funciones y comandos**.

#### ¿Cuándo se debe hacer?
Se debe hacer antes de realizar, por ejemplo, un **_git add_** o alguna otra funcion que afecte al archivo que queremos que Git ignore.

#### ¿Cómo configuraría el archivo .gitignore?
Primero con nuestro editor de texto creamos un archivo llamado _.gitignore_ en el directorio raíz del repositorio para indicarle a Git qué archivos y directorios ignorar cuando se realiza una confirmación.
Una vez creado el archivo _.gitignore_, en él escribiremos todos los directorios de los archivos que queramos ignorar.
Ejemplos de plantillas útiles de _.gitignore_: **https://github.com/github/gitignore**