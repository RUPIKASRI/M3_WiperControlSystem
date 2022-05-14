## High Level Test Plan

<html>
<body>
<!--StartFragment-->

ID | Description | Expected Output | Actual Output | Status 
-- | -- | -- | -- | --
HL-1 | Turn on the Ignition | Engine Starts | Engine Starts | Success
HL-2 | Activating wiper system | Wipers ON | Wipers ON | Success
HL-3 | Controlling the speed of the wiper based on frequency levels | Speed of wipers can be controlled | Speed of wipers can be controlled | Success  
HL-4 | Deactivating wiper system| Wipers OFF | Wipers OFF | Success
HL-5 | Turn off the Ignition | Engine Stops | Engine Stops | Success

<!--EndFragment-->
</body>
</html>

## Low Level Test Plan

<html>
<body>
<!--StartFragment-->

ID | Description | Expected Output | Actual Output | Status 
-- | -- | -- | -- | --
LL-1 | Turn on the Microcontroller | Microcontroller Starts | Microcontroller Starts | Success
LL-2 | Press push button for 2secs | RED LED ON | RED LED ON | Success
LL-3 | Press push button for first time | BLUE,GREEN,ORANGE LED’s glow with 1Hz frequency | BLUE, GREEN,ORANGE LED’s glow | Success
LL-4 | Press push button for second time | BLUE,GREEN,ORANGE LED’s glow with 4Hz frequency | BLUE,GREEN,ORANGE LED’s glow | Success
LL-5 | Press push button for third time | BLUE,GREEN,ORANGE LED's glow with 8Hz frequency | BLUE,GREEN,ORANGE LED’s glow | Success
LL-6 | Press push button for fourth time | ORANGE,GREEN,BLUE LED's stops glowing | ORANGE,GREEN,BLUE LED's stops glowing | Success
LL-7 | Press push button for 2secs | RED LED OFF | RED LED OFF | Success


<!--EndFragment-->
</body>
</html>
