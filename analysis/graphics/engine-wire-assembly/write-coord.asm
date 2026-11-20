
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01da68ad <.text+0xa58ad>:
 1da68ad:	55                   	push   ebp
 1da68ae:	8b ec                	mov    ebp,esp
 1da68b0:	83 3d 00 f3 42 02 00 	cmp    DWORD PTR ds:0x242f300,0x0
 1da68b7:	75 0d                	jne    0x1da68c6
 1da68b9:	68 68 27 ec 01       	push   0x1ec2768
 1da68be:	e8 93 bd 04 00       	call   0x1df2656
 1da68c3:	83 c4 04             	add    esp,0x4
 1da68c6:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
 1da68c9:	d8 0d 48 cc e8 01    	fmul   DWORD PTR ds:0x1e8cc48
 1da68cf:	e8 68 ad 0c 00       	call   0x1e7163c
 1da68d4:	50                   	push   eax
 1da68d5:	68 98 1a ec 01       	push   0x1ec1a98
 1da68da:	e8 a1 07 fa ff       	call   0x1d47080
 1da68df:	83 c4 08             	add    esp,0x8
 1da68e2:	5d                   	pop    ebp
 1da68e3:	c3                   	ret
