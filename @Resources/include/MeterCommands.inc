
[MeterON]
Meter=String
X=5
Y=5R
Text="ON"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "O1"]

[MeterOFF]
Meter=String
X=R
Y=r
Text="OFF"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "O0"]


[MeterColor]
Meter=String
X=5
Y=5R
Text="Color: "
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255

[MeterColor0]
Meter=String
X=R
Y=r
Text="Equal"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "C0"]

[MeterColor1]
Meter=String
X=R
Y=r
Text="Oposite"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "C1"]

[MeterColor2]
Meter=String
X=R
Y=r
Text="Unrelated"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "C2"]


[MeterLight]
Meter=String
X=5
Y=5R
Text="Light: "
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255

[MeterLight0]
Meter=String
X=R
Y=r
Text="Constant"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "L0"]

[MeterLight1]
Meter=String
X=R
Y=r
Text="Fade"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "L1"]

[MeterLight2]
Meter=String
X=R
Y=r
Text="Pulse"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "L2"]

[MeterLight3]
Meter=String
X=R
Y=r
Text="MusicVis"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "L3"]

[MeterLight4]
Meter=String
X=R
Y=r
Text="MusicBeat"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "L4"]


[MeterTransition]
Meter=String
X=5
Y=5R
Text="Transition: "
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255

[MeterTransition0]
Meter=String
X=R
Y=r
Text="None"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "S0"]

[MeterTransition1]
Meter=String
X=R
Y=r
Text="Rand"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "S1"]



[MeterIntensity]
Meter=String
X=5
Y=5R
Text="Intensity: "
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255

[MeterIntensity0]
Meter=String
X=R
Y=r
Text="20"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "I200"]

[MeterIntensity1]
Meter=String
X=R
Y=r
Text="50"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "I511"]

[MeterIntensity2]
Meter=String
X=R
Y=r
Text="100"
FontSize=16
FontColor=0,0,0,255
FontEffectColor=255,255,255,255
LeftMouseUpAction=[!CommandMeasure MeasureWS "I1023"]
