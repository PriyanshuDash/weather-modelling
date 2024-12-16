# weather-modelling
Overview
This project uses a simple mathematical formula to classify weather conditions (Sunny, Windy, Cloudy, or Rainy) based on inputs for temperature, humidity, and wind speed. The goal is to model weather classification in stages, starting from hard-coded variables and progressing to the handling of multiple input sets via file reading.

Stages of Implementation
Stage 1: Hard-Coding Variables
The initial stage involves hardcoding temperature, humidity, and wind speed values to classify the weather.

Stage 2: Keyboard Input
The program is updated to accept user input for the three weather variables.

Stage 3: Read Input From a File
In this stage, the program reads a single set of weather data from a text file and classifies the weather.

Stage 4: Handle Multiple Sets of Inputs
The program is enhanced to process multiple sets of weather data from a file and print the corresponding classifications.

Stage 5: (Optional) GitHub Integration
Create a GitHub repository to store and share the code. You can use Git commands to push updates and track versions.

Formula Used
The weather classification formula used is as follows:

𝑤
=
0.5
𝑇
2
−
0.2
𝐻
+
0.1
𝑊
−
15
w=0.5T 
2
 −0.2H+0.1W−15
Where:

𝑇
T = Temperature (in Celsius)
𝐻
H = Humidity (in %)
𝑊
W = Wind speed (in km/h)
𝑤
w = Output (used to classify weather as Sunny, Windy, Cloudy, or Rainy)
Weather Classification Rules
𝑤
>
10
w>10: Sunny
0
≤
𝑤
≤
10
0≤w≤10: Windy
−
10
≤
𝑤
<
0
−10≤w<0: Cloudy
𝑤
<
−
10
w<−10: Rainy
