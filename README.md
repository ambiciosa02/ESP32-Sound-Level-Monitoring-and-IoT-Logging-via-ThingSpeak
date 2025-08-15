# ESP32-Sound-Level-Monitoring-and-IoT-Logging-via-ThingSpeak
This sketch is a Wi-Fi IoT Sound Monitoring Project using ESP32 and ThingSpeak. It reads sound levels and sends them to a ThingSpeak channel for remote logging and analysis.

🔍 How it works
1️⃣ Hardware used

ESP32 (Wi-Fi enabled microcontroller)

Sound sensor (analog output, connected to pin 34)

Wi-Fi network to connect to ThingSpeak

2️⃣ Program flow

Setup:

Initialize Serial Monitor for debugging.

Connect ESP32 to Wi-Fi.

Initialize ThingSpeak library.

Loop:

Read analog value from sound sensor.

Print the current sound level to Serial Monitor.

Send the sound level to a ThingSpeak channel using your API key.

Wait 15 seconds between updates (ThingSpeak limitation).

3️⃣ What you’ll see

Sound sensor readings in Serial Monitor.

Real-time logging of noise levels on ThingSpeak for remote monitoring.
