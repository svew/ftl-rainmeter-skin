
;	Editing the crew short cuts is fairly simple:
;	1.	Find the program/folder's path using Windows Explorer and copy paste it next to the "path_#=".
;		To create a short cut to a steam game, right click on the game's name in your Steam library and
;		go to "Properties". In "General", click "Create Desktop Short cut". Then go to the desktop, right
;		click on the short cut, click on "Properties" and copy the URL. Paste it next to the "path_#=".
;	2.	Label sets the name of the crew member short cut. Warning, there really is not a whole lot of
;		space there, so you will probably have to shorten the name significantly.
;	3.	All the icon names reference icon images in the FTL\@Resources\Images\Crew\Icons folder. To
;		change which icon you want to use, just enter in the name of the icon from the folder next to 
;		the "icon_#=" (without the .png).
;		To add in an icon, simply create a new .png image, put it into the folder, and enter in The image 
;		has to be a .png. All the preset icons are 35x35 pixels.
;	If you don't want to use all 10 crew slots, simply leave the ones you don't want to use empty. The
;	crew list will shorten and the recycling bin and settings short cuts will reposition.

[Variables]
path_1=C:\Program Files (x86)\Mozilla Firefox\firefox.exe
label_1=Firefox
icon_1=lanius

path_2=C:\Program Files (x86)\Notepad++\notepad++.exe
label_2=Notep.++
icon_2=male

path_3=C:\Program Files (x86)\Steam\Steam.exe
label_3=Steam
icon_3=crystal

path_4=steam://rungameid/440
label_4=TF2
icon_4=mantis

path_5=steam://rungameid/212680
label_5=FTL
icon_5=engi

path_6=C:\Users\Walter\Pictures
label_6=Pictures
icon_6=folder

path_7=C:\Users\Walter\Music
label_7=Music
icon_7=folder

path_8=C:\Users\Walter\Videos
label_8=Videos
icon_8=folder

path_9=C:\Users\Walter\Documents\files
label_9=Misc
icon_9=folder

path_10=
label_10=
icon_10=
