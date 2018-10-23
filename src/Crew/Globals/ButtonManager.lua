function Initialize()
	shortcuts = 0
	for i = 1, 10 do
		if SKIN:GetVariable('path_'..i) == "" then
			SKIN:GetMeter('Button'..i):Hide()
			SKIN:GetMeter('Picture'..i):Hide()
			SKIN:GetMeter('Label'..i):Hide()
		else
			SKIN:GetMeter('Button'..i):SetY(shortcuts*30)
			SKIN:GetMeter('Picture'..i):SetY(shortcuts*30-4)
			SKIN:GetMeter('Label'..i):SetY(shortcuts*30+3)
			shortcuts = shortcuts + 1
			SKIN:GetMeter('Button'..i):Show()
			SKIN:GetMeter('Picture'..i):Show()
			SKIN:GetMeter('Label'..i):Show()
		end
	end
	back=SKIN:GetMeter('button_background')
	back:SetY(shortcuts*30)
end