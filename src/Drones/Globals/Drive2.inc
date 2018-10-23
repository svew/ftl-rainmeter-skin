[Drive2_HUD]
Meter=Image
ImageName=#@#Images\Drones\drives_on.png
X=132
Y=16

[Drive2_Name]
Meter=String
MeasureName=MeasureHDD2_Label
MeterStyle=MeterFormat_DriveLabel
W=91
X=47r
Y=5r

[Drive2_Free]
Meter=String
MeasureName=MeasureHDD2_Free
MeterStyle=MeterFormat_DriveSize
Text=%1B Free
X=-45r
Y=17r


[Drive2_Label]
Meter=String
MeterStyle=FontFormat_Label
Text=#Drive2#
X=83r
Y=4r

[Test2]
Measure=Script
ScriptFile="#CURRENTPATH#Globals/on-or-off.lua"
whoami=2