# Cry of Fear Xash3D

Это рабочий репозиторий xModea для воссоздания логики Cry of Fear на базе Xash3D FWGS и HLSDK.

xModea - это я, человек, который делает и ведет этот проект. Это не компания, не студия и не официальный релиз Cry of Fear.

Цель репозитория простая: иметь нормальное место, где можно править движок, game dll, оружие, инвентарь, монстров, триггеры, катсцены и совместимость оригинальных BSP-карт Cry of Fear.

## Важно

В репозитории нет игровых ресурсов Cry of Fear и Half-Life.

Сюда нельзя коммитить:

- оригинальные карты;
- модели;
- звуки;
- спрайты;
- текстуры;
- Steam-файлы;
- любые чужие игровые ассеты, которые нельзя свободно распространять.

Для тестов нужна локальная папка с твоими легально полученными ресурсами игры.

Обычная тестовая папка на Windows:

```text
C:\Users\xModea\Desktop\cof_xash
```

Игра лежит внутри:

```text
C:\Users\xModea\Desktop\cof_xash\cryoffear
```

## Что лежит в репозитории

```text
build_xash.bat       Собрать движок Xash3D для PC
build_game.bat       Собрать game dll/client dll и скопировать в папку игры
copyfiles.bat        Скопировать уже собранные файлы в папку игры

src/cof              Наш основной код Cry of Fear
src/cof/dlls         Серверная часть игры: игрок, оружие, NPC, энтити, триггеры
src/cof/cl_dll       Клиентская часть игры: HUD, UI, viewmodel, клиентский инвентарь
src/cof/game_shared  Общий код клиента и сервера

external/xash3d-fwgs      Локальная копия движка Xash3D FWGS
external/hlsdk-portable   Локальная копия HLSDK-portable
external/openvgui         Локальная копия openvgui

scripts             PowerShell-скрипты сборки и копирования
build               Временные файлы сборки
out                 Установленный результат сборки
deps                Скачанные зависимости, например SDL2
```

Папка `external` - обычная часть репозитория. Это не submodule. Можно коммитить изменения обычным коммитом.

## Самый простой способ собрать на Windows

Нужно установить:

- Git;
- Python;
- CMake;
- Visual Studio 2022 или Visual Studio Build Tools;
- workload `Desktop development with C++`;
- Windows 10/11 SDK;
- PowerShell.

Потом открыть терминал в корне репозитория:

```bat
cd /d C:\Users\xModea\Desktop\cry-of-fear-src
```

Собрать движок:

```bat
build_xash.bat
```

Собрать игру:

```bat
build_game.bat
```

После этого нужные файлы копируются сюда:

```text
C:\Users\xModea\Desktop\cof_xash
```

Запуск:

```bat
cd /d C:\Users\xModea\Desktop\cof_xash
xash3d.exe -game cryoffear
```

Запуск сразу с карты:

```bat
xash3d.exe -game cryoffear +map c_start
```

## Что делает build_xash.bat

`build_xash.bat` собирает PC-движок Xash3D FWGS.

Он:

- проверяет SDL2;
- если SDL2 нет, скачивает его в `deps`;
- собирает `external/xash3d-fwgs`;
- складывает результат в `out/xash3d`;
- копирует runtime-файлы в `C:\Users\xModea\Desktop\cof_xash`.

Обычно этот файл нужен не каждый раз. Его надо запускать после изменений в движке или если папка `cof_xash` пустая.

## Что делает build_game.bat

`build_game.bat` собирает саму игру.

Он:

- собирает `external/openvgui`;
- собирает `src/cof`;
- создает `client.dll`;
- создает `hl.dll`;
- копирует `client.dll`, `hl.dll` и `vgui.dll` в тестовую папку игры;
- чинит некоторые runtime-файлы для Xash, например меню, шрифты и конфиг.

Это главный скрипт для обычной разработки. После правок в `src/cof` чаще всего нужен именно он.

## Что делает copyfiles.bat

`copyfiles.bat` ничего не собирает. Он только копирует уже собранные файлы в папку игры.

Обычный запуск:

```bat
copyfiles.bat
```

С другой папкой игры:

```bat
copyfiles.bat D:\Games\cof_xash
```

С Debug-сборкой:

```bat
copyfiles.bat D:\Games\cof_xash Debug
```

Важно: перед копированием закрой игру. Если `xash3d.exe` открыт, Windows может держать старые DLL в памяти.

## Если изменения не появились в игре

Проверь по порядку:

1. Игра закрыта?
2. Запускался именно `build_game.bat`, а не только компиляция без копирования?
3. Ты запускаешь игру из `C:\Users\xModea\Desktop\cof_xash`?
4. DLL реально лежат тут?

```text
C:\Users\xModea\Desktop\cof_xash\cryoffear\cl_dlls\client.dll
C:\Users\xModea\Desktop\cof_xash\cryoffear\cl_dlls\hl.dll
```

5. Если сомневаешься, запусти:

```bat
build_game.bat
copyfiles.bat
```

## Полезные параметры сборки

Debug:

```bat
build_game.bat -Configuration Debug
```

Чистая пересборка:

```bat
build_game.bat -CleanFirst
```

Собрать, но не копировать в игру:

```bat
build_game.bat -NoInstall
```

`-NoInstall` нужен только чтобы проверить компиляцию. Для теста в игре он не подходит, потому что DLL не заменяются в `cof_xash`.

Собрать в другую папку:

```bat
build_xash.bat -DeployDir "D:\Games\cof_xash"
build_game.bat -DeployDir "D:\Games\cof_xash"
```

64-bit сборка:

```bat
build_xash.bat -X64
build_game.bat -X64
```

Важно: движок и game dll должны быть одной архитектуры. Нельзя смешивать 32-bit движок и 64-bit DLL.

## Где результат сборки

Временная сборка:

```text
build/
```

Установленный результат:

```text
out/xash3d/
```

Тестовая папка игры:

```text
C:\Users\xModea\Desktop\cof_xash/
```

Главные файлы после сборки:

```text
out/xash3d/xash3d.exe
out/xash3d/xash.dll
out/xash3d/filesystem_stdio.dll
out/xash3d/ref_gl.dll
out/xash3d/menu.dll

out/xash3d/cryoffear/cl_dlls/client.dll
out/xash3d/cryoffear/cl_dlls/hl.dll

C:\Users\xModea\Desktop\cof_xash\cryoffear\cl_dlls\client.dll
C:\Users\xModea\Desktop\cof_xash\cryoffear\cl_dlls\hl.dll
```

## Как должна выглядеть папка игры

Пример:

```text
C:\Users\xModea\Desktop\cof_xash
|-- xash3d.exe
|-- xash.dll
|-- filesystem_stdio.dll
|-- ref_gl.dll
|-- menu.dll
|-- vgui.dll
|-- SDL2.dll
`-- cryoffear
    |-- liblist.gam
    |-- config.cfg
    |-- cl_dlls
    |   |-- client.dll
    |   `-- hl.dll
    |-- maps
    |-- models
    |-- sound
    |-- sprites
    |-- gfx
    `-- resource
```

Папки `maps`, `models`, `sound`, `sprites`, `gfx`, `resource` должны быть из твоей локальной копии игры. В Git их не добавлять.

## Главные места в коде

Серверная часть:

```text
src/cof/dlls/cof_inventory.cpp        Инвентарь на сервере
src/cof/dlls/cof_pickups.cpp          Подбор предметов
src/cof/dlls/cof_monsters.cpp         CoF-монстры и совместимость NPC
src/cof/dlls/cof_brush_triggers.cpp   CoF brush-триггеры
src/cof/dlls/cof_script_points.cpp    Точки и helper-энтити для карт
src/cof/dlls/cof_scene_actions.cpp    Действия для сцен
src/cof/dlls/cof_scene_models.cpp     Модели для сцен
src/cof/dlls/cof_player_events.cpp    События, связанные с игроком
src/cof/dlls/cof_ladder_manager.cpp   Логика лестниц
src/cof/dlls/cof_ladder_use.cpp       Энтити использования лестниц
src/cof/dlls/mobile.cpp               Телефон
src/cof/dlls/switchblade.cpp          Switchblade
src/cof/dlls/mobile_switchblade.cpp   Телефон + нож
```

Клиентская часть:

```text
src/cof/cl_dll/cof_ui.cpp                  Простой CoF UI
src/cof/cl_dll/cof_inventory_client.cpp    Клиентский инвентарь
src/cof/cl_dll/view.cpp                    Камера, viewmodel, визуальные эффекты рук
src/cof/cl_dll/hud.cpp                     HUD и client messages
```

Общие файлы:

```text
src/cof/game_shared
src/cof/dlls/cof_utils.h
```

## Linux

Linux сейчас не основной путь, но собрать можно вручную.

Пример для Ubuntu/Debian:

```sh
sudo apt update
sudo apt install git python3 python-is-python3 cmake build-essential libsdl2-dev libfreetype6-dev
```

Сборка движка:

```sh
cd external/xash3d-fwgs
./waf configure -T release --gamedir=cryoffear --disable-werror
./waf build -j"$(nproc)"
./waf install --destdir="../../out/xash3d"
cd ../..
```

Сборка openvgui:

```sh
cmake -S external/openvgui -B build/openvgui-linux -DCMAKE_BUILD_TYPE=Release
cmake --build build/openvgui-linux --parallel "$(nproc)"
```

Сборка игры:

```sh
cmake -S src/cof -B build/cof-linux \
  -DCMAKE_BUILD_TYPE=Release \
  -DGAMEDIR=cryoffear \
  -DCMAKE_INSTALL_PREFIX="$PWD/out/xash3d" \
  -DSERVER_INSTALL_DIR=cl_dlls \
  -DCLIENT_INSTALL_DIR=cl_dlls \
  -DUSE_VGUI=ON \
  -DUSE_NOVGUI_MOTD=ON \
  -DUSE_NOVGUI_SCOREBOARD=ON \
  -DOPENVGUI_ROOT="$PWD/external/openvgui" \
  -DOPENVGUI_BUILD_DIR="$PWD/build/openvgui-linux"

cmake --build build/cof-linux --parallel "$(nproc)" --target install
```

Запуск примерно такой:

```sh
mkdir -p "$HOME/cof_xash"
cp -a out/xash3d/. "$HOME/cof_xash/"
cd "$HOME/cof_xash"
./xash3d -game cryoffear +map c_start
```

## macOS

macOS путь экспериментальный.

Зависимости:

```sh
xcode-select --install
brew install git python cmake sdl2 freetype
```

Движок:

```sh
cd external/xash3d-fwgs
./waf configure -T release -8 --gamedir=cryoffear --disable-werror
./waf build -j"$(sysctl -n hw.logicalcpu)"
./waf install --destdir="../../out/xash3d"
cd ../..
```

openvgui:

```sh
cmake -S external/openvgui -B build/openvgui-macos -DCMAKE_BUILD_TYPE=Release
cmake --build build/openvgui-macos --parallel "$(sysctl -n hw.logicalcpu)"
```

Игра:

```sh
cmake -S src/cof -B build/cof-macos \
  -DCMAKE_BUILD_TYPE=Release \
  -D64BIT=ON \
  -DGAMEDIR=cryoffear \
  -DCMAKE_INSTALL_PREFIX="$PWD/out/xash3d" \
  -DSERVER_INSTALL_DIR=cl_dlls \
  -DCLIENT_INSTALL_DIR=cl_dlls \
  -DUSE_VGUI=ON \
  -DUSE_NOVGUI_MOTD=ON \
  -DUSE_NOVGUI_SCOREBOARD=ON \
  -DOPENVGUI_ROOT="$PWD/external/openvgui" \
  -DOPENVGUI_BUILD_DIR="$PWD/build/openvgui-macos"

cmake --build build/cof-macos --parallel "$(sysctl -n hw.logicalcpu)" --target install
```

## Android

Android пока экспериментальный.

Нужно:

- Android Studio или Android command line tools;
- JDK;
- Android SDK;
- Android NDK;
- CMake;
- Ninja.

Сборка:

```sh
cd src/cof/android
./gradlew assembleRelease
```

На Windows:

```bat
cd src\cof\android
gradlew.bat assembleRelease
```

Важно: Android-шаблон пришел из HLSDK-portable. Перед нормальным Android-релизом надо проверить package name, app id и gamedir, чтобы везде было `cryoffear`, а не `valve`.

## Частые проблемы

### Не собирается Xash3D на Windows

Проверь:

- установлен Python;
- установлен CMake;
- установлен Visual Studio Build Tools с C++;
- есть Windows SDK;
- SDL2 скачался в `deps/sdl2`.

Можно вручную скачать SDL2:

```powershell
.\scripts\fetch-sdl2.ps1
```

### Игра запускается, но старый код все еще работает

Скорее всего DLL не заменились.

Закрой игру и запусти:

```bat
build_game.bat
copyfiles.bat
```

### DLL не грузится

Проверь архитектуру.

Если движок 32-bit, DLL тоже должны быть 32-bit.

Если движок 64-bit, DLL тоже должны быть 64-bit.

### Шрифты или меню сломались

Запусти:

```bat
build_game.bat
```

Скрипт заново применит runtime-fix для Xash-меню, шрифтов и конфига.

### Карта не стартует

Пробуй явно:

```bat
xash3d.exe -game cryoffear +map c_start
```

## Правила разработки

- Не коммитить игровые ассеты.
- Не коммитить `build`, `out`, `deps`.
- Новую CoF-логику держать в `src/cof`.
- Не превращать один файл в огромную свалку.
- Если код можно разделить на понятные файлы, лучше разделить.
- Сервер и клиент должны знать об инвентаре одинаково.
- После правок game-кода запускать `build_game.bat`.
- После правок движка запускать `build_xash.bat`.
- README не трогать без прямой причины.

## Как писать коммиты

Лучше делать коротко и понятно на английском.

Примеры:

```text
fix(cof): repair c_start scene trigger flow
feat(cof): add switchblade weapon behavior
refactor(cof): split inventory client definitions
fix(cof): keep inventory state across level changes
```

Если коммит большой, в названии лучше писать главное, а детали оставить в описании.

## Коротко

Для обычной работы на Windows почти всегда достаточно:

```bat
build_xash.bat
build_game.bat
```

Потом запуск:

```bat
cd /d C:\Users\xModea\Desktop\cof_xash
xash3d.exe -game cryoffear +map c_start
```

Если менял только `src/cof`, обычно хватит:

```bat
build_game.bat
```
