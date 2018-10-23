[Drive3_HUD]
Meter=Image
ImageName=#@#Images\Drones\drives_on.png
X=230
Y=16

[Drive3_Name]
Meter=String
MeasureName=MeasureHDD3_Label
MeterStyle=MeterFormat_DriveLabel
W=91
X=47r
Y=5r

[Drive3_Free]
Meter=String
MeasureName=MeasureHDD3_Free
MeterStyle=MeterFormat_DriveSize
Text=%1B Free
X=-45r
Y=17r


[Drive3_Label]
Meter=String
MeterStyle=FontFormat_Label
Text=#Drive3#
X=83r
Y=4r

[Test3]
Measure=Script
ScriptFile="#CURRENTPATH#Globals/on-or-off.lua"
whoami=3