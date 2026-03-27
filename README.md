# VroomTemplate

A starter game project template built on top [Vroom](https://github.com/Hypooxanthine/Vroom/tree/main).

This repository contains:
- Engine source as a submodule in `deps/Vroom`
- Game content in `Content/`
- A sample script project in `Content/Scripts`
- Basic CMake presets for Windows and Linux

## Prerequisites

- Git
- CMake 3.28+
- Ninja

### Windows
- MSVC C++ toolchain

### Linux
- A C++ compiler toolchain (gcc, clang)
- OpenGL and X11 (for glfw) development packages

## Clone and initialize

```bash
git clone git@github.com:Hypooxanthine/VroomTemplate.git
cd VroomTemplate
git submodule update --init --recursive
```

## Build

### Windows (x64 Debug)

```powershell
cmake --preset x64-debug
cmake --build build/x64-debug --target VroomEditor
```

### Windows (x64 Release)

```powershell
cmake --preset x64-release
cmake --build build/x64-release --target VroomEditor
```

### Linux (Debug)

```bash
cmake --preset linux-debug
cmake --build build/linux-debug --target VroomEditor
```

### Linux (Release)

```bash
cmake --preset linux-release
cmake --build build/linux-release --target VroomEditor
```

## Run

After a successful build, launch the editor executable.

Typical Windows debug path:

```powershell
cd ./build/x64-debug/deps/Vroom/VroomEditor/
./VroomEditor.exe
```

## Scripting

Scripts are built as a shared library from `Content/Scripts/include`

## Notes

- `compile_commands.json` is exported and copied to the repository root when available..
