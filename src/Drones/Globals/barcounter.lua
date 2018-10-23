function Update()
	d=tonumber(SKIN:GetVariable('#ofdrives'))
	bars=0
	for i=1, d do
		bars = bars + tonumber(SKIN:GetVariable('drive'..i..'on'))
	end
	SKIN:Bang('!SetOption Drive_Icon ImageName #@#Images/Drones/drives_icon'..bars..'.png')
end