

function Update()
	a=SELF:GetOption('whoami')
	measure=SKIN:GetMeasure('MeasureHDD'..a..'_Label')
	value=measure:GetStringValue()
	if value=="" then
		SKIN:Bang('!SetVariable drive'..a..'on "0"')
		SKIN:Bang('[!HideMeter Drive'..a..'_Free][!SetOption Drive'..a..'_HUD ImageName #@#Images/Drones/drives_off.png][!SetOption Drive'..a..'_Label FontColor 147,145,146,255]')
	else
		SKIN:Bang('!SetVariable drive'..a..'on "1"')
		SKIN:Bang('[!ShowMeter Drive'..a..'_Free][!SetOption Drive'..a..'_HUD ImageName #@#Images/Drones/drives_on.png][!SetOption Drive'..a..'_Label FontColor 243,255,230,255]')
	end
end