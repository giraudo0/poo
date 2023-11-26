#!/bin/bash
# compilar.sh
clear
echo "Compilando..."
g++ main.cpp \
  figura.cpp \
  circulo.cpp \
  cuadrado.cpp \
  -o poo
echo "Ejecutando..."
echo ""
./poo
