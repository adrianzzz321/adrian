touch archivo1.txt
echo "Hola, este es un archivo de prueba" > archivo1.txt
cp archivo1.txt archivo1_copia.txt
cd ~
cd practica_shell/
mkdir -p backup
mv /home/adrian/Documentos/prograsuperior2025/adrian/tarea1/archivo1_copia.txt /home/adrian/practica_shell/backup/
rm /home/adrian/Documentos/prograsuperior2025/adrian/tarea1/archivo1.txt
cd backup
ls

