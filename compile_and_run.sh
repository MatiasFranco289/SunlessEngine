#!/bin/bash

directorio_actual=$(pwd)

rm -r build

directorio_destino="$directorio_actual/build"

if [ ! -d "$directorio_destino" ]; then
  mkdir -p "$directorio_destino"
fi

find "$directorio_actual" -type f \( -name "*.cpp" -o -name "*.h" \) -not -path "$directorio_destino/*" -exec cp {} "$directorio_destino" \;

cd 'build'

for archivo in *; do
  if [ -f "$archivo" ]; then
    sed -i -E 's/"([^"/]+\/)*([^"/]+)"/"\2"/g' "$archivo"
  fi
done

g++ *.cpp -o build

./build.exe