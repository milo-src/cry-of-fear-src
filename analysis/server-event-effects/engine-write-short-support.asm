
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01da6829 <.text+0xa5829>:
 1da6829:	55                   	push   ebp
 1da682a:	8b ec                	mov    ebp,esp
 1da682c:	83 3d 00 f3 42 02 00 	cmp    DWORD PTR ds:0x242f300,0x0
 1da6833:	75 0d                	jne    0x1da6842
 1da6835:	68 dc 26 ec 01       	push   0x1ec26dc
 1da683a:	e8 17 be 04 00       	call   0x1df2656
 1da683f:	83 c4 04             	add    esp,0x4
 1da6842:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1da6845:	50                   	push   eax
 1da6846:	68 98 1a ec 01       	push   0x1ec1a98
 1da684b:	e8 30 08 fa ff       	call   0x1d47080
 1da6850:	83 c4 08             	add    esp,0x8
 1da6853:	5d                   	pop    ebp
 1da6854:	c3                   	ret
