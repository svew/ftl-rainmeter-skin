[Drive1_HUD]
Meter=Image
ImageName=#@#Images\Drones\drives_off.png
X=34
Y=16

[Drive1_Name]
Meter=String
MeasureName=MeasureHDD1_Label
MeterStyle=MeterFormat_DriveLabel
W=91
X=47r
Y=5r

[Drive1_Free]
Meter=String
MeasureName=MeasureHDD1_Free
MeterStyle=MeterFormat_DriveSize
Text=%1B Free
X=-45r
Y=17r


[Drive1_Label]
Meter=String
MeterStyle=FontFormat_Label
Text=#Drive1#
X=83r
Y=4r


[Test1]
Measure=Script
ScriptFile="#CURRENTPATH#Globals/on-or-off.lua"
whoami=1