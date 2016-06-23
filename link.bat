@echo off

SETLOCAL ENABLEDELAYEDEXPANSION

       :: DEFINE the following variables where applicable to your install

    SET SOURCE=%~dp0


:: _________________________________________________________

if not exist p:\ GOTO noP

echo This program will create all necessary links to your P drive. Press enter to continue.
pause
mklink /J "p:\hlc_wp_m60E4" "%SOURCE%hlc_wp_m60E4"
mklink /J "p:\hlc_wp_minigun" "%SOURCE%hlc_wp_minigun" 
echo Complete
pause
GOTO quit

:noP
echo You don't have a P: drive!

:quit
exit