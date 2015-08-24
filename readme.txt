Instalacja
--------------------------------------------------
Ubuntu
 1. Pobra� z https://eclipse.org/ Eclipse IDE for C/C++ Developers
 2. Rozpakowa� w home
 3. Instalacja JVM
    apt-get install openjdk-7-jdk lub sudo apt-get install openjdk-7-jre
 4. Instalacja gtkmm
    apt-get install libgtkmm-3.0-dev
 5. Uruchomienie Eclipse
 6. Help/Eclipse Marketplace instalacja pkg-config
 7. Prawym przyciskiem na projekt i Properties
 8. C/C++ Build / Settings / Pkg-config
 9. Packages:
    atk atkmm-1.6 cairo cairomm-1.0 freetype2 gdk-pixbuf-2.0 glib-2.0 glibmm-2.4
    gtk+-3.0 gtkmm-3.0 libpng12 pango
10. C/C++ / Settings / Tool Settings
11. GCC C++ Compiler / Miscellaneous / Other flags dodanie -mms-bitfields
12. GCC C Compiler / Miscellaneous / Other flags dodanie -mms-bitfields

Windows
 1. Pobra� z https://eclipse.org/ Eclipse IDE for C/C++ Developers
 2. Rozpakowa� na C:
 3. Instalacja JVM je�eli nie ma
 4. Instalacja mingw
 5. Instalacja gtkmm - ostatnia wersja
 6. Uruchomienie Eclipse
 7. Help/Eclipse Marketplace instalacja pkg-config
 8. Prawym przyciskiem na projekt i Properties
 9. C/C++ Build / Settings / Pkg-config
10. Packages:
    atk atkmm-1.6 cairo cairomm-1.0 freetype2 gdk-pixbuf-2.0 glib-2.0 glibmm-2.4
    gtk+-3.0 gtkmm-3.0 libpng12 pango
11. C/C++ / Settings / Tool Settings
12. GCC C++ Compiler / Miscellaneous / Other flags dodanie -mms-bitfields
13. GCC C Compiler / Miscellaneous / Other flags dodanie -mms-bitfields

ToDo
--------------------------------------------------
 1. Losowanie 10 liczb z puli okre�lonej ilo�ci� zada�;
 2. Otwieranie dokumentu pdf;
 3. Otwietanie plik�w graficznych;
 4. Wczytywanie wsp�rz�dnych z plik�w tekstowych;
 5. Otwieranie plikow graficznych i rysowanie figur 
 	geometrycznych wed�ug wczytanych wsp�rz�dnych;
 6. Dodanie narz�dzi dla plik�w graficznych;