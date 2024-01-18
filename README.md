# Network Information Display Plugin

## Setup

### 1. Add a C++ Class to Your Project:
   - In Unreal Engine, add a C++ class to your project.

### 2. Create a Plugins Folder:
   - Navigate to your project folder using Explorer and create a folder named "Plugins."

### 3. Download and Paste the Plugin:
   - Paste the downloaded plugin into the "Plugins" folder you created.

### 4. Generate VS Project Files:
   - Right-click on your project file (.uproject) and select "Generate Visual Studio project files."

### 5. Build Project in Visual Studio:
   - Open the Visual Studio project.
   - Build the project in Visual Studio.

## Usage
   - A simple, fully functional design is included called WBP_NetworkInformation. 

#### Use our design:
   - You can easily access it by creating a new Widget blueprint or going in to an existing one. 
   - In the add components tab, just search for WBP_NetworkInformation. 
   - Set the anchors to fullscreen as well as making sure left, right, top and bottom offsets are 0.

#### Make your own design:
   - If you wish to create your own design:

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
### 5. Set bad variables
   - There are exposed variables in the widget. Those are called:
     - Bad ping
     - Bad packet loss out
     - Bad packet loss in
   - They decide when a connection is bad. We would recommend to leave them at default.
### Show case:
   - Very bad connection
![Very bad connection](https://i.imgur.com/xL6PrAj.jpg)
   - Bad connection
![Bad connection](https://i.imgur.com/bhWC8D8.jpg)
   - Okay/normal/good connection
![Okay/normal/good connection](https://i.imgur.com/V6pwqIl.jpg)

---

> :warning: *In a listen server model, the server(host) dosen't have a valid NetConnection, all values will be replaced with -*

### Icon Attribution:
   - Icons used in the plugin are sourced from [google fonts](https://fonts.google.com/) and are free to use, modify, and use commercially. [Refer to Google's license for details.](https://www.apache.org/licenses/LICENSE-2.0) 


---
