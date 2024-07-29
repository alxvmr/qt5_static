Логи сборки:
```
18:06:06: Выполняются этапы для проекта HelloQt...
18:06:06: Запускается: «C:\msys64\mingw32\bin\mingw32-make.exe» clean -j8
C:\msys64\mingw32\qt5-static\bin\qmake.exe -o Makefile ..\..\HelloQt.pro -spec win32-g++ "CONFIG+=qtquickcompiler"
C:/msys64/mingw32/bin/mingw32-make.exe -f Makefile.Release clean
C:/msys64/mingw32/bin/mingw32-make.exe -f Makefile.Debug clean
mingw32-make[1]: Entering directory 'C:/Users/alexe/Documents/HelloQt/build/qt5_from_sources-Release'
del release\moc_predefs.h
mingw32-make[1]: Entering directory 'C:/Users/alexe/Documents/HelloQt/build/qt5_from_sources-Release'
del debug\moc_predefs.h
ЌҐ г¤ Ґвбп ­ ©вЁ C:\Users\alexe\Documents\HelloQt\build\qt5_from_sources-Release\release\moc_predefs.h
ЌҐ г¤ Ґвбп ­ ©вЁ C:\Users\alexe\Documents\HelloQt\build\qt5_from_sources-Release\debug\moc_predefs.h
del release\Main.o release\helloqt_plugin_import.o
del debug\Main.o debug\helloqt_plugin_import.o
ЌҐ г¤ Ґвбп ­ ©вЁ C:\Users\alexe\Documents\HelloQt\build\qt5_from_sources-Release\debug\Main.o
mingw32-make[1]: Leaving directory 'C:/Users/alexe/Documents/HelloQt/build/qt5_from_sources-Release'
mingw32-make[1]: Leaving directory 'C:/Users/alexe/Documents/HelloQt/build/qt5_from_sources-Release'
18:06:10: Процесс «C:\msys64\mingw32\bin\mingw32-make.exe» завершился успешно.
18:06:10: Запускается: «C:\msys64\mingw32\qt5-static\bin\qmake.exe» C:\Users\alexe\Documents\HelloQt\HelloQt.pro -spec win32-g++ "CONFIG+=qtquickcompiler"
18:06:10: Процесс «C:\msys64\mingw32\qt5-static\bin\qmake.exe» завершился успешно.
18:06:10: Запускается: «C:\msys64\mingw32\bin\mingw32-make.exe» -f C:/Users/alexe/Documents/HelloQt/build/qt5_from_sources-Release/Makefile qmake_all
mingw32-make: Nothing to be done for 'qmake_all'.
18:06:10: Процесс «C:\msys64\mingw32\bin\mingw32-make.exe» завершился успешно.
18:06:10: Запускается: «C:\msys64\mingw32\bin\mingw32-make.exe» -j8
C:/msys64/mingw32/bin/mingw32-make.exe -f Makefile.Release
mingw32-make[1]: Entering directory 'C:/Users/alexe/Documents/HelloQt/build/qt5_from_sources-Release'
g++ -c -Wa,-mbig-obj -O2 -Wall -Wextra -Wextra -Wno-deprecated-declarations -Wno-implicit-fallthrough -Wno-incompatible-pointer-types -Wno-unused-parameter -Wno-class-memaccess -ffunction-sections -fdata-sections -fexceptions -mthreads -DUNICODE -D_UNICODE -DWIN32 -DMINGW_HAS_SECURE_API=1 -DQT_NO_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_NEEDS_QMAIN -I..\..\..\HelloQt -I. -IC:\msys64\mingw32\qt5-static\include -IC:\msys64\mingw32\qt5-static\include\QtWidgets -IC:\msys64\mingw32\qt5-static\include\QtGui -IC:\msys64\mingw32\qt5-static\include\QtCore -Irelease -I/include -IC:\msys64\mingw32\qt5-static\share\qt5\mkspecs\win32-g++  -o release\Main.o ..\..\Main.cpp
g++ -c -Wa,-mbig-obj -O2 -Wall -Wextra -Wextra -Wno-deprecated-declarations -Wno-implicit-fallthrough -Wno-incompatible-pointer-types -Wno-unused-parameter -Wno-class-memaccess -ffunction-sections -fdata-sections -fexceptions -mthreads -DUNICODE -D_UNICODE -DWIN32 -DMINGW_HAS_SECURE_API=1 -DQT_NO_DEBUG -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_NEEDS_QMAIN -I..\..\..\HelloQt -I. -IC:\msys64\mingw32\qt5-static\include -IC:\msys64\mingw32\qt5-static\include\QtWidgets -IC:\msys64\mingw32\qt5-static\include\QtGui -IC:\msys64\mingw32\qt5-static\include\QtCore -Irelease -I/include -IC:\msys64\mingw32\qt5-static\share\qt5\mkspecs\win32-g++  -o release\helloqt_plugin_import.o C:/Users/alexe/Documents/HelloQt/build/qt5_from_sources-Release/helloqt_plugin_import.cpp
cc1plus.exe: warning: command-line option '-Wno-incompatible-pointer-types' is valid for C/ObjC but not for C++
cc1plus.exe: warning: command-line option '-Wno-incompatible-pointer-types' is valid for C/ObjC but not for C++
g++ -Wl,-s -static -static-libgcc -static-libstdc++ -static -Wl,--gc-sections -Wl,-subsystem,windows -mthreads -o release\HelloQt.exe release/Main.o release/helloqt_plugin_import.o  -LC:\msys64\mingw32\qt5-static\lib -LC:\msys64\mingw32\lib -lz -lzstd C:\msys64\mingw32\qt5-static\share\qt5\plugins\styles\libqwindowsvistastyle.a -lQt5Widgets C:\msys64\mingw32\qt5-static\share\qt5\plugins\platforms\libqwindows.a -lwinspool -lshlwapi -lwtsapi32 -lQt5EventDispatcherSupport -lQt5FontDatabaseSupport -lqtfreetype -ldwrite -ld2d1 -lQt5ThemeSupport -lQt5AccessibilitySupport -lQt5VulkanSupport -lQt5WindowsUIAutomationSupport C:\msys64\mingw32\qt5-static\share\qt5\plugins\imageformats\libqgif.a C:\msys64\mingw32\qt5-static\share\qt5\plugins\imageformats\libqicns.a C:\msys64\mingw32\qt5-static\share\qt5\plugins\imageformats\libqico.a C:\msys64\mingw32\qt5-static\share\qt5\plugins\imageformats\libqjpeg.a -lqtlibjpeg C:\msys64\mingw32\qt5-static\share\qt5\plugins\imageformats\libqtga.a C:\msys64\mingw32\qt5-static\share\qt5\plugins\imageformats\libqtiff.a C:\msys64\mingw32\qt5-static\share\qt5\plugins\imageformats\libqwbmp.a C:\msys64\mingw32\qt5-static\share\qt5\plugins\imageformats\libqwebp.a C:\msys64\mingw32\qt5-static\lib\libQt5Widgets.a -lQt5Gui -luxtheme -ldwmapi C:\msys64\mingw32\qt5-static\lib\libQt5Gui.a -ld3d11 -ldxgi -ldxguid -lQt5Core -lqtlibpng -lqtharfbuzz -lcomdlg32 -loleaut32 -limm32 -lglu32 -lopengl32 -lgdi32 C:\msys64\mingw32\qt5-static\lib\libQt5Core.a -lmpr -luserenv -lversion -llibz.a -lqtpcre2 -llibzstd.a -lnetapi32 -lws2_32 -ladvapi32 -lkernel32 -lole32 -lshell32 -luuid -luser32 -lwinmm  -lglu32 C:\msys64\mingw32\lib\opengl32.dll.a -lgdi32 -luser32 -lmingw32 C:\msys64\mingw32\qt5-static\lib\libqtmain.a -lshell32 
C:/msys64/mingw32/bin/../lib/gcc/i686-w64-mingw32/14.1.0/../../../../i686-w64-mingw32/bin/ld.exe: cannot find -llibz.a: No such file or directory
C:/msys64/mingw32/bin/../lib/gcc/i686-w64-mingw32/14.1.0/../../../../i686-w64-mingw32/bin/ld.exe: cannot find -llibzstd.a: No such file or directory
collect2.exe: error: ld returned 1 exit status
mingw32-make[1]: *** [Makefile.Release:69: release/HelloQt.exe] Error 1
mingw32-make[1]: Leaving directory 'C:/Users/alexe/Documents/HelloQt/build/qt5_from_sources-Release'
mingw32-make: *** [Makefile:45: release] Error 2
18:06:14: Процесс «C:\msys64\mingw32\bin\mingw32-make.exe» завершился с кодом 2.
Ошибка при сборке/развёртывании проекта HelloQt (комплект: qt5_from_sources)
Во время выполнения этапа «Сборка»
```
