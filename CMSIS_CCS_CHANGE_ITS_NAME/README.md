# CMSIS Version 5

[![Version](https://img.shields.io/github/v/release/arm-software/CMSIS_5)](https://github.com/ARM-software/CMSIS_5/releases/latest) [![License](https://img.shields.io/github/license/arm-software/CMSIS_5)](https://arm-software.github.io/CMSIS_5/General/html/LICENSE.txt)

The branch *master* of this GitHub repository contains ![Version](https://img.shields.io/github/v/release/arm-software/CMSIS_5?display_name=release&label=%20&sort=semver).
The [documentation](http://arm-software.github.io/CMSIS_5/General/html/index.html) is available under http://arm-software.github.io/CMSIS_5/General/html/index.html

Use [Issues](https://github.com/ARM-software/CMSIS_5#issues-and-labels) to provide feedback and report problems for CMSIS Version 5.

**Note:** The branch *develop* of this GitHub repository reflects our current state of development and is constantly updated. It gives our users and partners contiguous access to the CMSIS development. It allows you to review the work and provide feedback or create pull requests for contributions.

A [pre-built documentation](https://arm-software.github.io/CMSIS_5/develop/General/html/index.html) is updated from time to time, but may be also generated using the instructions under [Generate CMSIS Pack for Release](https://github.com/ARM-software/CMSIS_5#generate-cmsis-pack-for-release).

## Overview of CMSIS Components

The following is an list of all CMSIS components that are available.

| CMSIS-... | Target Processors   | Description  |
|:----------|:--------------------|:-------------|
|[Core(M)](http://arm-software.github.io/CMSIS_5/Core/html/index.html)  | All Cortex-M, SecurCore | Standardized API for the Cortex-M processor core and peripherals. Includes intrinsic functions for Cortex-M4/M7/M33/M35P SIMD instructions.|
|[Core(A)](http://arm-software.github.io/CMSIS_5/Core_A/html/index.html)| Cortex-A5/A7/A9 | API and basic run-time system for the Cortex-A5/A7/A9 processor core and peripherals.|
|[Driver](http://arm-software.github.io/CMSIS_5/Driver/html/index.html) | All Cortex-M, SecurCore | Generic peripheral driver interfaces for middleware. Connects microcontroller peripherals with middleware that implements for example communication stacks, file systems, or graphic user interfaces.|
|[DSP](http://arm-software.github.io/CMSIS_5/DSP/html/index.html)       | All Cortex-M | DSP library collection with over 60 Functions for various data types: fixed-point (fractional q7, q15, q31) and single precision floating-point (32-bit). Implementations optimized for the SIMD instruction set are available for Cortex-M4/M7/M33/M35P.|
|[NN](http://arm-software.github.io/CMSIS_5/NN/html/index.html)        | All Cortex-M | Collection of efficient neural network kernels developed to maximize the performance and minimize the memory footprint on Cortex-M processor cores.|
|[RTOS v1](http://arm-software.github.io/CMSIS_5/RTOS/html/index.html) | Cortex-M0/M0+/M3/M4/M7 | Common API for real-time operating systems along with a reference implementation based on RTX. It enables software components that can work across multiple RTOS systems.|
|[RTOS v2](http://arm-software.github.io/CMSIS_5/RTOS2/html/index.html)| All Cortex-M, Cortex-A5/A7/A9 | Extends CMSIS-RTOS v1 with Armv8-M support, dynamic object creation, provisions for multi-core systems, binary compatible interface. |
|[Pack](http://arm-software.github.io/CMSIS_5/Pack/html/index.html)    | All Cortex-M, SecurCore, Cortex-A5/A7/A9 | Describes a delivery mechanism for software components, device parameters, and evaluation board support. It simplifies software re-use and product life-cycle management (PLM). <br/>Is part of the [Open CMSIS Pack project](https://www.open-cmsis-pack.org). |
|[Build](http://arm-software.github.io/CMSIS_5/Build/html/index.html)  | All Cortex-M, SecurCore, Cortex-A5/A7/A9 | A set of tools, software frameworks, and work flows that improve productivity, for example with Continuous Integration (CI) support.<br/>Is replaced with the [CMSIS-Toolbox](https://github.com/Open-CMSIS-Pack/devtools/tree/main/tools). |
|[SVD](http://arm-software.github.io/CMSIS_5/SVD/html/index.html)      | All Cortex-M, SecurCore | Peripheral description of a device that can be used to create peripheral awareness in debuggers or CMSIS-Core header files.|
|[DAP](http://arm-software.github.io/CMSIS_5/DAP/html/index.html)      | All Cortex | Firmware for a debug unit that interfaces to the CoreSight Debug Access Port. |
|[Zone](http://arm-software.github.io/CMSIS_5/Zone/html/index.html)    | All Cortex-M | Defines methods to describe system resources and to partition these resources into multiple projects and execution areas. |

## Implemented Enhancements
 - CMSIS-Pack generation with [shell script template](https://arm-software.github.io/CMSIS_5/Pack/html/bash_script.html) for Windows and Linux
 - CMSIS-Pack: [Git workflow](https://arm-software.github.io/CMSIS_5/Pack/html/element_repository.html) via Eclipse menu *Window - Preferences - CMSIS Packs - Manage Local Repositories* and [MDK](http://www.keil.com/support/man/docs/uv4/uv4_ca_packinst_repo.htm)
 - [CMSIS-Zone release 1.0](https://arm-software.github.io/CMSIS_5/Zone/html/index.html) with support for multi-processor, TrustZone, and MPU configuration
 - Support for Armv8.1M Architecture and Cortex-M55 (release in March 2020)
 - CMSIS-DSP is fully ported to SIMD for Cortex-M family (Armv8.1-M)  and Cortex-A & Cortex-R with NEON, using the same APIs.

## Further Planned Enhancements
 - CMSIS-Pack:
   - System Description SDF Format: describe more complex debug topologies than with a Debug Description in a tool agnostic way
   - CPDSC project file format: allows project templates that are agnostic of an IDE
   - Minimize need for IDE specific settings: CMSIS-Pack supports IDE specific parameters. Analyze and minimize
 - CMSIS-Build: command-line driven make system for CMSIS-Pack based projects (to support CI tests)

For further details see also the [Slides of the Embedded World CMSIS Partner Meeting](https://github.com/ARM-software/CMSIS_5/blob/develop/CMSIS_Review_Meeting_2020.pdf).

## Other related GitHub repositories

| Repository                  | Description                                               |
|:--------------------------- |:--------------------------------------------------------- |
| [cmsis-pack-eclipse](https://github.com/ARM-software/cmsis-pack-eclipse)    |  CMSIS-Pack Management for Eclipse reference implementation Pack support  |
| [CMSIS-FreeRTOS](https://github.com/arm-software/CMSIS-FreeRTOS)            | CMSIS-RTOS adoption of FreeRTOS                                                      |
| [CMSIS-Driver](https://github.com/arm-software/CMSIS-Driver)                | Generic MCU driver implementations and templates for Ethernet MAC/PHY and Flash.  |
| [CMSIS-Driver_Validation](https://github.com/ARM-software/CMSIS-Driver_Validation) | CMSIS-Driver Validation can be used to verify CMSIS-Driver in a user system |
| [CMSIS-Zone](https://github.com/ARM-software/CMSIS-Zone)                    | CMSIS-Zone Utility along with example projects and FreeMarker templates         |
| [NXP_LPC](https://github.com/ARM-software/NXP_LPC)                          | CMSIS Driver Implementations for the NXP LPC Microcontroller Series       |
| [mdk-packs](https://github.com/mdk-packs)                                   | IoT cloud connectors as trail implementations for MDK (help us to make it generic)|
| [trustedfirmware.org](https://www.trustedfirmware.org/)                     | Arm Trusted Firmware provides a reference implementation of secure world software for Armv8-A and Armv8-M.|


## Directory Structure

| Directory            | Content                                                   |
|:-------------------- |:--------------------------------------------------------- |
| CMSIS/Core           | CMSIS-Core(M) related files (for release)                 |
| CMSIS/Core_A         | CMSIS-Core(A) related files (for release)                 |
| CMSIS/CoreValidation | Validation for Core(M) and Core(A) (NOT part of release)  |
| CMSIS/DAP            | CMSIS-DAP related files and examples                      |
| CMSIS/Driver         | CMSIS-Driver API headers and template files               |
| CMSIS/DSP            | CMSIS-DSP related files                                   |
| CMSIS/NN             | CMSIS-NN related files                                    |
| CMSIS/RTOS           | RTOS v1 related files (for Cortex-M)                      |
| CMSIS/RTOS2          | RTOS v2 related files (for Cortex-M & Armv8-M)            |
| CMSIS/Pack           | CMSIS-Pack examples and tutorials                         |
| CMSIS/DoxyGen        | Source of the documentation                               |
| CMSIS/Utilities      | Utility programs                                          |

## Generate CMSIS Pack for Release

This GitHub development repository lacks pre-built libraries of various software components (RTOS, RTOS2).
In order to generate a full pack one needs to have the build environment available to build these libraries.
This causes some sort of inconvenience. Hence the pre-built libraries may be moved out into separate pack(s)
in the future.

To build a complete CMSIS pack for installation the following additional tools are required:
 - **doxygen.exe**    Version: 1.8.6 (Documentation Generator)
 - **mscgen.exe**     Version: 0.20  (Message Sequence Chart Converter)
 - **7z.exe (7-Zip)** Version: 16.02 (File Archiver)

Using these tools, you can generate on a Windows PC:
 - **CMSIS Documentation** using the batch file **gen_doc.sh** (located in ./CMSIS/Doxygen).
 - **CMSIS Software Pack** using the batch file **gen_pack.sh** (located in ./CMSIS/Utilities).
   The bash script does not generate the documentation. The pre-built libraries for RTX4 and RTX5
   are not included within this repository.

The file ./CMSIS/DoxyGen/How2Doc.txt describes the rules for creating API documentation.

## License

Arm CMSIS is licensed under Apache 2.0.

## Contributions and Pull Requests

Contributions are accepted under Apache 2.0. Only submit contributions where you have authored all of the code.

### Issues and Labels

Please feel free to raise an [issue on GitHub](https://github.com/ARM-software/CMSIS_5/issues)
to report misbehavior (i.e. bugs) or start discussions about enhancements. This
is your best way to interact directly with the maintenance team and the community.
We encourage you to append implementation suggestions as this helps to decrease the
workload of the very limited maintenance team.

We will be monitoring and responding to issues as best we can.
Please attempt to avoid filing duplicates of open or closed items when possible.
In the spirit of openness we will be tagging issues with the following:

- **bug** – We consider this issue to be a bug that will be investigated.

- **wontfix** - We appreciate this issue but decided not to change the current behavior.

- **enhancement** – Denotes something that will be implemented soon.

- **future** - Denotes something not yet schedule for implementation.

- **out-of-scope** - We consider this issue loosely related to CMSIS. It might by implemented outside of CMSIS. Let us know about your work.

- **question** – We have further questions to this issue. Please review and provide feedback.

- **documentation** - This issue is a documentation flaw that will be improved in future.

- **review** - This issue is under review. Please be patient.

- **DONE** - We consider this issue as resolved - please review and close it. In case of no further activity this issues will be closed after a week.

- **duplicate** - This issue is already addressed elsewhere, see comment with provided references.

- **Important Information** - We provide essential information regarding planned or resolved major enhancements.

