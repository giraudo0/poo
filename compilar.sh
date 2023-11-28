#!/bin/bash
# compilar.sh
clear
echo "Compilando..."
g++ main.cpp \
  clases/figura.cpp \
  clases/circulo.cpp \
  clases/cuadrado.cpp \
  clases/rectangulo.cpp \
  opciones/cuadrado.cpp \
  opciones/circulo.cpp \
  opciones/rectangulo.cpp \
  -o poo
echo "Ejecutando..."
echo ""
./poo
