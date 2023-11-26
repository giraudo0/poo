#!/bin/bash
# compilar.sh
clear
echo "Compilando..."
g++ main.cpp \
  figura.cpp \
  circulo.cpp \
  cuadrado.cpp \
  rectangulo.cpp \
  opcion_cuadrado.cpp \
  opcion_circulo.cpp \
  opcion_rectangulo.cpp \
  -o poo
echo "Ejecutando..."
echo ""
./poo
