Instalacja
--------------------------------------------------
Ubuntu
 1. Pobraæ z https://eclipse.org/ Eclipse IDE for C/C++ Developers
 2. Rozpakowaæ w home
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