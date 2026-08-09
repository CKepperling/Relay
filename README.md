# Relay

Relay is a real-time communication platform built primarily in C++. The project is being developed from the ground up to explore modern C++, networking, concurrency, database persistence, and real-time client-server communication.

The initial version of Relay is a command-line application. Over time, the project will evolve into a networked chat platform supporting multiple clients, channels, persistent messages, authentication, and a modern web interface.

## Current Status

Relay is currently in the initial development stage.

Current functionality:

- C++20 project structure
- CMake build system
- GCC compiler support
- Command-line executable

## Requirements

To build Relay, you will need:

- A C++20 compatible compiler
- CMake 3.20 or newer

The project is currently developed and tested using:

- Ubuntu Linux
- GCC 13.3
- CMake

## Build

Clone the repository and navigate to the project root.

Configure the CMake build:

```bash
cmake -S . -B build
```

Compile Relay:

```bash
cmake --build build
```

## Run

After building, run Relay with:

```bash
./build/relay
```

The application should display the Relay startup banner.

## Project Structure

```text
Relay/
├── src/
│   └── main.cpp
├── CMakeLists.txt
├── .gitignore
└── README.md
```

Generated build files are stored in `build/` and are not tracked by Git.

## Roadmap

Relay will gradually expand to include:

- Users
- Channels
- Messages and message history
- TCP client-server networking
- Multiple concurrent clients
- Structured JSON communication
- SQLite persistence
- User authentication
- WebSocket support
- React frontend
- Direct messages
- Presence tracking
- Roles and permissions

## Technology

Relay is planned around the following technologies:

- **C++20** — core application and server
- **CMake** — build system
- **TCP/IP** — initial networking
- **JSON** — structured network protocol
- **SQLite** — persistent storage
- **WebSockets** — real-time web communication
- **React** — future frontend

## Development

Relay is being developed incrementally. Each milestone introduces new C++ and software engineering concepts while keeping the application in a working state.