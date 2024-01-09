# Network Information Display Plugin

## Setup

### 1. Add a C++ Class to Your Project:
   - In Unreal Engine, add a C++ class to your project to enable plugin integration.

### 2. Create a Plugins Folder:
   - Navigate to your project folder using Explorer and create a folder named "Plugins."

### 3. Download and Paste the Plugin:
   - [Download the Network Information Display plugin](#). <!-- Add a link to your download -->
   - Paste the downloaded plugin into the "Plugins" folder you created.

### 4. Generate VS Project Files:
   - Open the project in Unreal Engine.
   - Right-click on your project file (.uproject) and select "Generate Visual Studio project files."

### 5. Build Project in Visual Studio:
   - Open the generated Visual Studio project.
   - Build the project in Visual Studio.

## Usage

- A simple design is included (WBP_NetworkInformation). If you wish to create your own design:

### 1. Create Blueprint:
   - Right-click in the Content Browser and select "Blueprint."

### 2. Search and Create UNetworkInformation:
   - Search for "UNetworkInformation" and click to create.
   - You now have access to exclusive variables not available in Blueprints without the plugin:
     - InBytesPerSecond
     - OutPacketLoss
     - InPacketLoss
     - OutBytesPerSecond
     - InPacketsPerSecond
     - OutPacketsPerSecond
     - bHasValidNetConnection

### 3. Access Variables:
   - Right-click in the Blueprint graph and search for the desired variables.

### 4. Update Variables:
   - To update all variables, call the Blueprint-exposed "Update Net Stats Function." In the example, this is done on tick.

### 5. Icon Attribution:
   - Icons used in the plugin are sourced from fonts.google.com and are free to use, modify, and use commercially. Refer to Google's license for details.

---
