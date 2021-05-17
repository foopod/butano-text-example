
@{{BLOCK(golem_sprite_bn_graphics)

@=======================================================================
@
@	golem_sprite_bn_graphics, 8x64@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2021-05-17, 19:17:13
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.16
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global golem_sprite_bn_graphicsTiles		@ 256 unsigned chars
	.hidden golem_sprite_bn_graphicsTiles
golem_sprite_bn_graphicsTiles:
	.word 0x05335550,0x55355555,0x55353533,0x3AA53AA3,0x32253223,0x35555555,0x235BB552,0x05555550
	.word 0x00222200,0x03235540,0x53555555,0x23555552,0x02255220,0x54355535,0x55555235,0x05535550
	.word 0x00000000,0x05335550,0x55355555,0x55353533,0x3AA53AA3,0x32253223,0x35555555,0x235BB552
	.word 0x05555550,0x03222240,0x53555555,0x23555552,0x02255220,0x54355535,0x55555235,0x05535550
	.word 0x05335550,0x55355555,0x55353533,0x3AA53AA3,0x32253223,0x35555555,0x235BB552,0x05555550
	.word 0x00222200,0x03235540,0x53555555,0x23555552,0x02255220,0x54355535,0x55555235,0x05535550
	.word 0x00000000,0x05335550,0x55355555,0x55353533,0x3AA53AA3,0x32253223,0x35555555,0x235BB552
	.word 0x055BB550,0x03222240,0x53555555,0x23555552,0x02255220,0x54355535,0x55555235,0x05535550

	.section .rodata
	.align	2
	.global golem_sprite_bn_graphicsPal		@ 32 unsigned chars
	.hidden golem_sprite_bn_graphicsPal
golem_sprite_bn_graphicsPal:
	.hword 0x0000,0x28A3,0x288F,0x2A00,0x1955,0x254B,0x6318,0x77DF
	.hword 0x241F,0x029F,0x13BF,0x1B80,0x7EA5,0x4DD0,0x55DF,0x573F

@}}BLOCK(golem_sprite_bn_graphics)
