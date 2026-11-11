# ⚡ SysPulse

<p align="center">
  <strong>SysPulse is a lightweight Linux device health and system monitoring utility written in C.</strong>
</p>

<p align="center">
  Built to explore Linux internals, system monitoring and low-level programming.
</p>

---

## 🐧 About SysPulse

**SysPulse** is a lightweight Linux system monitoring utility written in **C**.

The project is focused on retrieving system and hardware information directly from Linux interfaces such as:

```text
/proc
/sys
POSIX APIs
Linux system interfaces
```

Instead of relying mainly on external commands, SysPulse aims to interact directly with the information exposed by the Linux operating system.

The long-term goal is to evolve SysPulse from a simple terminal system information tool into a lightweight **device health and telemetry utility** suitable for Linux and embedded environments.

---

## 🎯 Project Goals

- ⚡ Keep the program lightweight and fast
- 🐧 Learn and interact with Linux system interfaces
- 🔧 Improve C and systems programming skills
- 🌡️ Monitor useful hardware and system metrics
- 📊 Provide simple device health information
- 📦 Minimize external dependencies
- 🖥️ Support terminal and machine-readable output
- 🔌 Explore embedded Linux environments in future versions

---

## 🚧 Planned Features

```text
SysPulse
├── System
│   ├── Hostname
│   ├── Operating system
│   ├── Kernel
│   ├── Architecture
│   └── Uptime
│
├── CPU
│   ├── Model
│   ├── Core count
│   ├── Usage
│   └── Temperature
│
├── Memory
│   ├── Total memory
│   ├── Used memory
│   └── Usage percentage
│
├── Storage
│   ├── Disk capacity
│   ├── Used space
│   └── Available space
│
├── Network
│   ├── Interfaces
│   ├── Interface status
│   └── IP addresses
│
└── Device Health
    ├── CPU health
    ├── Thermal status
    ├── Memory status
    ├── Storage status
    └── Overall system status
```

---

## 💡 Concept

SysPulse is not intended to be just another system information fetcher.

The idea is to combine system information with lightweight health monitoring.

For example:

```text
$ ./syspulse

SysPulse

SYSTEM
  Hostname        linux-device
  Kernel          6.x.x
  Architecture    x86_64
  Uptime          03h 21m

CPU
  Usage           14.8%
  Temperature     47.2°C
  Status          OK

MEMORY
  Usage           38.6%
  Status          OK

DEVICE HEALTH
  [OK] CPU temperature
  [OK] Memory usage
  [OK] Storage

Overall status: HEALTHY
```

---

## 🛠️ Technologies

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)
![Ubuntu](https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-A42E2B?style=for-the-badge&logo=gnu&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)

---

## 🧠 Linux Interfaces

SysPulse will retrieve information primarily from Linux interfaces such as:

```text
/proc/cpuinfo
/proc/stat
/proc/meminfo
/proc/uptime
/sys/class/thermal/
```

It will also make use of standard C and POSIX/Linux APIs where appropriate.

---

## 📁 Project Structure

The project is currently in early development.

As it grows, the planned structure is:

```text
SysPulse/
├── src/
│   ├── main.c
│   ├── system.c
│   ├── cpu.c
│   ├── memory.c
│   ├── thermal.c
│   ├── storage.c
│   └── network.c
│
├── include/
│   ├── system.h
│   ├── cpu.h
│   ├── memory.h
│   ├── thermal.h
│   ├── storage.h
│   └── network.h
│
├── .gitignore
├── Makefile
├── LICENSE
└── README.md
```

---

## 🗺️ Roadmap

### v0.1
- System information
- Hostname
- Kernel
- Architecture

### v0.2
- CPU information
- Memory information
- Uptime

### v0.3
- CPU temperature
- Thermal monitoring

### v0.4
- Storage information
- Network interfaces

### v0.5
- Device health checks
- Warning and critical states

### Future

- CLI arguments
- JSON output
- ARM64 support
- systemd integration
- Debian packaging
- Embedded Linux testing
- Buildroot / QEMU experiments

---

## 🧪 Build

SysPulse is being developed for Linux using GCC.

```bash
gcc -Wall -Wextra main.c -o syspulse
```

Run:

```bash
./syspulse
```

A `Makefile` will be added as the project grows.

---

## 📌 Project Status

![Status](https://img.shields.io/badge/status-early_development-yellow?style=flat-square)
![Language](https://img.shields.io/badge/language-C-blue?style=flat-square)
![Platform](https://img.shields.io/badge/platform-Linux-black?style=flat-square)

SysPulse is currently in **early development**.

The project is also being used as a practical way to improve knowledge of:

```text
C
Linux internals
POSIX
/proc
/sys
system programming
embedded Linux
```

---

## 📜 License

License information will be added as the project develops.

---

```bash
eduardo@linux:~/projects/SysPulse$ ./syspulse
Monitoring the pulse of Linux.
```
