@echo off
rem set variables
set doxygen=bin\doxygen.exe
set doxyfile=ogre4j.doxygen
set saxon=bin\saxon8_2.jar
set combine=mycombine.xslt
set metaxslt=input.xslt
set java=java -Xmx512M


:build

rem IF NOT EXIST build mkdir build

mkdir build 2>nul
%doxygen% %doxyfile%

copy /y fixedDoxygen\*.xml build\doxyxml
copy /y xslt\%combine% build\doxyxml\ >nul

@echo on
%java% -jar %saxon% -o build\all.xml build\doxyxml\index.xml build\doxyxml\%combine%
%java% -jar %saxon% -o build\meta.xml build\all.xml xslt\%metaxslt%
rem %java% -jar %saxon% build\meta.xml xslt\output.xslt
@echo off

:end
pause
