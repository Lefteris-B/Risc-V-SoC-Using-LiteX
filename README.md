<div align="center">

  <img src="assets/logo.png" alt="logo" width="200" height="auto" />
  <h1>Risc-V-SoC-Using-LiteX</h1>
  
  <p>
    Build Risc-V SoCs Using LiteX framework 
  </p>

  
<!-- Badges -->
<p>
  <a href="https://github.com/Louis3797/awesome-readme-template/graphs/contributors">
    <img src="https://img.shields.io/github/contributors/Louis3797/awesome-readme-template" alt="contributors" />
  </a>
  <a href="">
    <img src="https://img.shields.io/github/last-commit/Louis3797/awesome-readme-template" alt="last update" />
  </a>
  <a href="https://github.com/Louis3797/awesome-readme-template/network/members">
    <img src="https://img.shields.io/github/forks/Louis3797/awesome-readme-template" alt="forks" />
  </a>
  <a href="https://github.com/Louis3797/awesome-readme-template/stargazers">
    <img src="https://img.shields.io/github/stars/Louis3797/awesome-readme-template" alt="stars" />
  </a>
  <a href="https://github.com/Louis3797/awesome-readme-template/issues/">
    <img src="https://img.shields.io/github/issues/Louis3797/awesome-readme-template" alt="open issues" />
  </a>
  <a href="https://github.com/Louis3797/awesome-readme-template/blob/master/LICENSE">
    <img src="https://img.shields.io/github/license/Louis3797/awesome-readme-template.svg" alt="license" />
  </a>
</p>
   
<h4>
    <a href="https://github.com/Louis3797/awesome-readme-template/">View Demo</a>
  <span> · </span>
    <a href="https://github.com/Louis3797/awesome-readme-template">Documentation</a>
  <span> · </span>
    <a href="https://github.com/Louis3797/awesome-readme-template/issues/">Report Bug</a>
  <span> · </span>
    <a href="https://github.com/Louis3797/awesome-readme-template/issues/">Request Feature</a>
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
    <li><a href="https://ninja-build.org/manual.html">ninja</a></li>
    <li><a href="https://opensource.com/article/18/8/what-how-makefile">makefile</a></li>
  </ul>
</details>

<details>
<summary>DevOps</summary>
  <ul>
    <li><a href="https://www.docker.com/">Docker</a></li>
    <li><a href="https://www.jenkins.io/">Jenkins</a></li>
  </ul>
</details>

<!-- Features -->
### Features

- Use LiteX toolscain to quickly create an SoC and verify it.
- Use included Docker image to quickly install development enviroment
- Use included firmware files to program you SoC


<!-- Env Variables -->
### Environment Variables

To run this project, you will need to add many  environment variables added  to your .env file

<!-- Getting Started -->
## Getting Started
Start by reading litex wiki.

<!-- Prerequisites -->
### Prerequisites

Intel Quartus toolcahin

```bash
 sudo apt-get install -y Quartus
```

<!-- Installation -->

Folllow directions

<!-- Run Locally -->
### Run Locally

Clone the project

```bash
  git clone https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteX.git
```

Go to the project directory

```bash
  cd code
```

Install dependencies
just
```bash
  pip install requirements.txt
``` 


<!-- Usage -->
## Usage

Here is he code with comments,also the a docker image to build the development enviroment and the elf binary elfs for uploadig the firmware.

<!-- Roadmap -->


<!-- Code of Conduct -->
### Code of Conduct

Please read the [Code of Conduct](https://docs.github.com/en/site-policy/github-terms/github-event-code-of-conduct#:~:text=GitHub%20is%20dedicated%20to%20providing,nationality%2C%20or%20level%20of%20experience.d)


<!-- License -->
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


<!-- Contact -->
## Contact

Lefteris D. Batzolis

Project Link: [Risc-V-SoC-Using-Lite](https://github.com/Lefteris-B/Risc-V-SoC-Using-LiteXe)

<!-- Acknowledgments -->
## Acknowledgements
SUBJECT AREA: Implementation of a RISC-V core with an FPGA. 
KEYWORDS: FPGA, LiteX, Python, RISC-V, SoC.

 - [LiteX](https://github.com/enjoy-digital/litex)
 - [DIPAE Website](https://cs.ihu.gr/)
 
