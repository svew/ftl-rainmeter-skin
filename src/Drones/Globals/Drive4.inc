[Drive4_HUD]
Meter=Image
ImageName=#@#Images\Drones\drives_on.png
X=328
Y=16

[Drive4_Name]
Meter=String
MeasureName=MeasureHDD4_Label
MeterStyle=MeterFormat_DriveLabel
W=91
X=47r
Y=5r

[Drive4_Free]
Meter=String
MeasureName=MeasureHDD4_Free
MeterStyle=MeterFormat_DriveSize
Text=%1B Free
X=-45r
Y=17r


[Drive4_Label]
Meter=String
MeterStyle=FontFormat_Label
Text=#Drive4#
X=83r
Y=4r

[Test4]
Measure=Script
ScriptFile="#CURRENTPATH#Globals/on-or-off.lua"
whoami=4