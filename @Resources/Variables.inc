[Variables]
; General
	; Visualizer update rate in miliseconds
		; 1000 = 1 second
		; Hint: The lower the value, the faster the visualizer updates at the cost of performance.
		updateRate=2

; Audio Response
	; Documentation: https://docs.rainmeter.net/manual/plugins/audiolevel/

		; Frequency Resolution
			; For best results, use the power of 2 (2,4,8,16,32,64,128,256,512,1024,2048,4096)
			; The higher the value, the better the quality of the visualizer at the cost of performance.
			FFTSize=1024
		; Attack Response
			FFTAttack=48
		; Decay Response
			FFTDecay=256
		; Bands
			; Do NOT edit this value as the bands are hard-coded into the Skin
			Bands=20
		; Minimum Frequency (Hz)
			FreqMin=40
		; Maximum Frequency (Hz)
			FreqMax=15000
		; Sensitivity
			; Hint: Higher values respond to quieter sounds.
			Sensitivity=18

; Line Customisation

	; Width
		lineWidth=2
	; Colour
		; Accepted colour formats:
			; HEX - 00 to FF
			; HEXA (RRGGBBAA):					ffffffff
			; HEX (RRGGBB):						ffffff

			; RGB - 0 to 255
			; RGBA (RRR,GGG,BBB,AAA):			255,255,255,255
			; RGB (RRR,GGG,BBB):				255,255,255

			; All above examples produce White.
		; Visualizer Top Gradient Colour
			colourTop=e6a2bb80
		; Visualizer Bottom Gradient Colour
			colourBottom=255,255,255,50
		; Visualizer Top Gradient Position
			; Accepted values: 0.00 - 1.00
			; Hint: To have a solid colour, set the value to 0.00
			colourGradient=1.00

; Sizes
	; Warning: If you update any values under this section, please make sure to use the "MinimalVisualizer - Refresh" option in the Skin's context menu

	; Visualizer Band Width (x) Size
		bandWidth=24
	; Visualizer Band Height (y) Size
		bandHeight=64
	; Visualizer Curve Spacing Size (Curve Start & End)
		spacingsize=4
	; Visualizer Height Spacing
		; Do NOT edit this value.
		visualizerHeightSpacing=20