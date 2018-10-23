
--[[

#of bars - Shield bars - Engine bars

a=(bar-(bar+2)%4+2)/2

shields = ((bars-1)%4+(bars-1))/2
engines = bars - shields
--]]

function Update()
	barcalc=	SKIN:GetMeasure('BarCalc')
	meterS=		SKIN:GetMeter('MeterShields')
	meterE=		SKIN:GetMeter('MeterEngines')
	
	total=barcalc:GetValue()
	total=25-total*25
	
	shields = (total-(total+2)%4+2)/2
	engines = total - shields
	
	if shields <= 0 then
		SKIN:Bang('!SetOption "MeterShields" "ImageName" "#@#Images/Power_Bars/shields_grey.png"')
	else
		SKIN:Bang('!SetOption "MeterShields" "ImageName" "#@#Images/Power_Bars/shields_green.png"')
	end
	
	if engines <= 0 then
		SKIN:Bang('!SetOption "MeterEngines" "ImageName" "#@#Images/Power_Bars/engines_grey.png"')
	else
		SKIN:Bang('!SetOption "MeterEngines" "ImageName" "#@#Images/Power_Bars/engines_green.png"')
	end	
	
	if SELF:GetOption('whoami') == "shields" then
		return shields/8
	end
	if SELF:GetOption('whoami') == "engines" then
		return engines/8
	end
end
