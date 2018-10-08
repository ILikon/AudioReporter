; Output Values from script
[MeasureAudioBassVal]
Measure=Calc
Formula=0
MinValue=0
MaxValue=1

[MeasureAudioTrebleVal]
Measure=Calc
Formula=0
MinValue=0
MaxValue=1

[MeasureAudioBassMax]
Measure=Calc
Formula=0
MinValue=0
MaxValue=1

[MeasureAudioTrebleMax]
Measure=Calc
Formula=0
MinValue=0
MaxValue=1

[MeasureAudioBassOut]
Measure=Calc
Formula=0
MinValue=0
MaxValue=1

[MeasureAudioTrebleOut]
Measure=Calc
Formula=0
MinValue=0
MaxValue=1

[MeterBarBassMax]
Meter=BAR
BarColor=255,255,255,127
Group=GroupBars | GroupDynamicColors
MeasureName=MeasureAudioBassMax
X=10
Y=600
W=#BarWidth#
H=#BarHeight#

[MeterBarTrebleMax]
Meter=BAR
BarColor=255,255,255,127
Group=GroupBars | GroupDynamicColors
MeasureName=MeasureAudioTrebleMax
X=#BarGap#R
Y=r
W=#BarWidth#
H=#BarHeight#

[MeterBarBassVal]
Meter=BAR
BarColor=#Color#
Group=GroupBars | GroupDynamicColors
MeasureName=MeasureAudioBassVal
X=10
Y=600
W=#BarWidth#
H=#BarHeight#

[MeterBarTrebleVal]
Meter=BAR
BarColor=#Color#
Group=GroupBars | GroupDynamicColors
MeasureName=MeasureAudioTrebleVal
X=#BarGap#R
Y=r
W=#BarWidth#
H=#BarHeight#

[MeterShapeBass]
Meter=Shape
X=36
Y=900
Shape=Path MyPath | StrokeWidth 1 | Stroke Color 255,255,255,255 | Fill Color 255,255,255,255
MyPath=0,0 | LineTo 5,5 | LineTo 5,-5 | ClosePath 1

[MeterShapeTreb]
Meter=Shape
X=74
Y=900
Shape=Path MyPath | StrokeWidth 1 | Stroke Color 255,255,255,255 | Fill Color 255,255,255,255
MyPath=0,0 | LineTo 5,5 | LineTo 5,-5 | ClosePath 1

[MeterBarBassOut]
Meter=BAR
BarColor=#Color#
Group=GroupBars | GroupDynamicColors
MeasureName=MeasureAudioBassOut
X=100
Y=800
W=#BarWidth#
H=100

[MeterBarTrebleOut]
Meter=BAR
BarColor=#Color#
Group=GroupBars | GroupDynamicColors
MeasureName=MeasureAudioTrebleOut
X=140
Y=800
W=#BarWidth#
H=100
