@echo off
rem set variables
set doxygen=bin\doxygen.exe
set doxyfile=ogre4j.doxygen
set saxon=bin\saxon8_2.jar
set combine=mycombine.xslt
set metaxslt=input.xslt
set java=java -Xmx512M


rem stop editing

if "%1"=="clean" goto clean
if "%1"=="build" goto build
if "%1"=="meta" goto meta

goto usage

:clean
echo.clean project files...
rmdir /s /q build
mkdir build
echo.clean successful

goto end

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


goto end

:meta
@echo on
%java% -jar %saxon% -o build\meta.xml build\all.xml xslt\%metaxslt%
@echo off


:usage

echo.autogenerates jni bindings
echo.
echo. %0 [clean^|build^|meta]
echo.

goto end

:end
pause
