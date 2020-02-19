@echo off

echo ======================================
echo = Compilation et Linkage des fichier =
echo ======================================

Rem ---------------------------------------------------
Rem - Ligne pour compiler les fichier .C avec le sdcc -
Rem ---------------------------------------------------

sdcc -c -mz80 --peep-file peep-rules.txt source/data_palette.c
sdcc -c -mz80 --peep-file peep-rules.txt source/data_tiles.c
sdcc -c -mz80 --peep-file peep-rules.txt source/data_level.c
sdcc -c -mz80 --peep-file peep-rules.txt source/ini.c
sdcc -c -mz80 --peep-file peep-rules.txt source/main.c
sdcc -c -mz80 --peep-file peep-rules.txt source/workflow.c
sdcc -c -mz80 --peep-file peep-rules.txt source/board.c
sdcc -c -mz80 --peep-file peep-rules.txt source/load_asset.c
sdcc -c -mz80 --peep-file peep-rules.txt source/draw_update_file.c
sdcc -c -mz80 --peep-file peep-rules.txt source/input.c
sdcc -c -mz80 --peep-file peep-rules.txt source/game_update.c
sdcc -c -mz80 --std-sdcc99 data.c


Rem ------------------------------------------------
Rem - Ligne pour Linker les fichiers assembleurs   - 
Rem - Chaque .c doit avoir son .rel                -
Rem ------------------------------------------------

sdcc -o sms.ihx -mz80 --no-std-crt0 --data-loc 0xC000 rel/crt0_sms.rel rel/PSGlib.rel  data_palette.rel data_tiles.rel ini.rel main.rel board.rel load_asset.rel data_level.rel workflow.rel draw_update_file.rel input.rel game_update.rel  SMSlib.lib rel/data.rel

Rem -------------------------------
Rem - Création du fichier binaire -
Rem -------------------------------
ihx2sms sms.ihx  out/sms.sms

echo ==========================
echo = Effassage des fichiers =
echo ==========================

pause

Rem -------------------------------------------------------
Rem - Effacement des fichier objet/compiler/assembleur... -
Rem -------------------------------------------------------

del *.map
del *.Sym
del *.lst
del *.lk
del *.noi
del *.rel
del *.ihx
del *.asm

echo ======================
echo = Fin de l'operation =
echo ======================

pause