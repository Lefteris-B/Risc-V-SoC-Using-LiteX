<!-- readme -->
<div align="center">

  <img src="https://oikonomologos.gr/wp-content/uploads/2020/05/diethnes-panepistimio-ellados-dipae.png" alt="logo" width="200" height="auto" />
  <h1>Risc-V SoC Using LiteX</h1>
  
  <p>
    Build Risc-V SoCs Using LiteX framework 
  </p>
<!-- Badges -->








<p>
  <a href="https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteX/releases/"><img src="https://img.shields.io/github/tag/Lefteris-B/Risc-V-SoC-Using-LiteX?include_prereleases=&sort=semver&color=blue" alt="GitHub tag"></a>
  <a href="#license"><img src="https://img.shields.io/badge/License-MIT-blue" alt="License"></a>
  <a href="https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteX/issues"><img src="https://img.shields.io/github/issues/Lefteris-B/Risc-V-SoC-Using-LiteX" alt="issues - Risc-V-SoC-Using-LiteX"></a>
  <a href="https://htmlpreview.github.io/?https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteX/blob/master/docs/index.html" title="Go to project documentation"><img src="https://img.shields.io/badge/view-Documentation-blue?style=for-the-badge" alt="view - Documentation"></a>
</p>
   
<h4>
    <a href="https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteX/blob/master/LICENSE.md">View License</a>
  <span> · </span>
    <a href="https://github.com/enjoy-digital/litex/wiki">LiteX Documentation</a>
  <span> · </span>
    <a href="https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteX/issues/new/choose">Report Bug</a>
  <span> · </span>
    <a href="https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteX/issues/new/choose">Request Feature</a>
  </h4>
</div>

<br />

<!-- Table of Contents -->
# Table of Contents

- [About the Project](#about-the-project)
  * [Tech Stack](#tech-stack)
  * [Features](#features)
- [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation](#installation)
- [License](#license)
- [Contact](#contact)
- [Acknowledgements](#acknowledgements)
  

<!-- About the Project -->
## About the Project

<div align="center"> 
  <img src="https://www.openarchives.gr/aggregator-openarchives/portal/organisations/logo/ihu/el/file/ihu.jpeg" alt="screenshot" />
</div>


<!-- TechStack -->
### Tech Stack

<details>
  <summary>Litex</summary>
  <ul>
    <li><a href="https://github.com/enjoy-digital/litex">LiteX</a></li>
    <li><a href="https://github.com/litex-hub/litex-boards">LiteX Boards</a></li>
    <li><a href="https://github.com/enjoy-digital/litex/wiki">Wiki</a></li>
  </ul>
</details>

<details>
<summary>Python</summary>
  <ul>
    <li><a href="https://www.python.org/downloads/release/python-370/">Python 3.7</a></li>
    <li><a href="https://pypi.org/project/pip/">pip</a></li>
  </ul>
</details>

<details>
<summary>DevOps</summary>
  <ul>
    <li><a href="https://www.docker.com/">Docker</a></li>
    <li><a href="https://www.jenkins.io/">Jenkins</a></li>
    <li><a href="https://ninja-build.org/manual.html">ninja</a></li>
    <li><a href="https://opensource.com/article/18/8/what-how-makefile">makefile</a></li>
  </ul>
</details>

<!-- Features -->
### Features

- Use LiteX toolscain to quickly create an SoC and verify it.
- Use included Docker image to quickly install development enviroment
- Use included firmware files to program you SoC

<!-- Folder Structure -->
### Folder Structure

- build  - Folder includes Simulation\Verification files and build files for the gateware\software
- code   - Folder includes the software demo files
- Docker Env - Folder includes the necessary files to build your Docker Development Environment
- docs - Folder includes SoC and peripheral documentation
- firmware   - Folder includes firmaware files for the SoC   
- micropython - Folder includes Micropython build experiment
- platform - Folder includes de10lite pins and quartus build options
- targets  - Folder includes de10lite Base SoC peripheral build  and programmer file
- software - Folder includes a helper scripts like a bitstream programmer

<!-- Env Variables -->
### Environment Variables

To run this project, you will need  many environment variables added to your .env file
and your O.S.Global Variables. 
Follow throught the wiki directions.

<!-- Getting Started -->
## Getting Started
Start by reading litex wiki.

<!-- Prerequisites -->
### Prerequisites

Python 3.10

```bash
 sudo apt-get install -y python3
 ```
 <!-- Installation -->
### Installation


Docker Installation
```bash
 sudo apt-get update
```

```bash
 sudo apt-get install \
    ca-certificates \
    curl \
    gnupg \
    lsb-release
```

```bash
sudo mkdir -p /etc/apt/keyrings &&
 curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg
```
```bash
sudo apt-get install docker-ce docker-ce-cli containerd.io docker-compose-plugin
```

Folllow directions for troubleshooting https://tinyurl.com/2fpn3jt9

<!-- Run Locally -->
### Run Locally

Clone the project

```bash
  git clone https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteX.git
```
Make docker container 
```bash
 cd Docker Dev Environment 
```
```bash
 make
```
or simply download the already made image :
```bash
 docker pull egbatzo/dipae-litex:latest
```


<!-- Usage -->
## Usage

Use the  docker image to build the development enviroment and create the elf binary files,uploadig the firmware, build gateware etc.

<!-- Roadmap -->


<!-- Code of Conduct -->
### Code of Conduct

Please read the [Code of Conduct](https://docs.github.com/en/site-policy/github-terms/github-event-code-of-conduct#:~:text=GitHub%20is%20dedicated%20to%20providing,nationality%2C%20or%20level%20of%20experience.d)


<!-- Licensek -->
## License

As part of this work, a SoC with RISC-V open-source architecture processor will be designed and developed using new synchronous design flow software.
The target technology is Intel's FPGA technology provided by the laboratory. 
LiteX will be considered as a modern design stream, which is a SoC design stream 
and at the same time a HARDWARE IP library hosted on GitHub and providing utilities
that can be used to create SoC in FPGA.
LiteX IP components are described entirely using Python,
which simplifies its design. LiteX already supports various soft processor cores
as well as basic peripherals, without dependencies on closed source IP or code generators.


See LICENSE.txt for more information.


<!-- Contact information-->
## Contact

Lefteris D. Batzolis <egbatzo[at]teiemt[dot].gr>

Project Link: [Risc-V-SoC-Using-Lite](https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteXe)

<!-- Acknowledgments-->
## Acknowledgements
SUBJECT AREA: Implementation of a RISC-V core with an FPGA. 
KEYWORDS: FPGA, LiteX, Python, RISC-V, SoC.

 - [LiteX](https://github.com/enjoy-digital/litex)
 - [DIPAE Website](https://cs.ihu.gr/)
 
