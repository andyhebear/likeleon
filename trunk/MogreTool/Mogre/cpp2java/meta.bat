@echo off
rem set variables
set doxygen=bin\doxygen.exe
set doxyfile=ogre4j.doxygen
set saxon=bin\saxon8_2.jar
set combine=mycombine.xslt
set metaxslt=input.xslt
set java=java -Xmx512M


:meta
@echo on
%java% -jar %saxon% -o build\meta.xml build\all.xml xslt\%metaxslt%
@echo off


:end
pause
