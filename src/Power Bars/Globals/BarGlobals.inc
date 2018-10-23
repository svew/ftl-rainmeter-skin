[EnginesScript]
Measure=Script
ScriptFile="#CURRENTPATH#Globals/MiniBarCalc.lua"
whoami=engines

[ShieldsScript]
Measure=Script
ScriptFile="#CURRENTPATH#Globals/MiniBarCalc.lua"
whoami=shields

[MeterHud]
Meter=Image
ImageName=#@#Images\Power_Bars\power_hud.png

[MeterEngines]
Meter=Image
ImageName=#@#Images\Power_Bars\engines_green.png
X=94
Y=191

[MeterShields]
Meter=Image
ImageName=#@#Images\Power_Bars\shields_green.png
X=58
Y=191

[BarEngines]
Meter=Bar
MeasureName=EnginesScript
BarImage=#@#Images\Power_Bars\engines_bar.png
X=118
Y=142

[BarShields]
Meter=Bar
MeasureName=ShieldsScript
BarImage=#@#Images\Power_Bars\shields_bar.png
X=82
Y=128

[MeterBars]
Meter=Bar
MeasureName=BarCalc
X=12
Y=10
BarImage=#@#Images\Power_Bars\power_bars.png
BarOrientation=Vertical