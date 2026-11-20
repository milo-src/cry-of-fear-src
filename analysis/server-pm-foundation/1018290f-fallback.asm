
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1018290f <.text+0x18190f>:
1018290f:	8d 54 24 04          	lea    edx,[esp+0x4]
10182913:	e8 6d 8b 00 00       	call   0x1018b485
10182918:	52                   	push   edx
10182919:	9b d9 3c 24          	fstcw  WORD PTR [esp]
1018291d:	74 49                	je     0x10182968
1018291f:	66 81 3c 24 7f 02    	cmp    WORD PTR [esp],0x27f
10182925:	74 06                	je     0x1018292d
10182927:	d9 2d 38 56 1f 10    	fldcw  WORD PTR ds:0x101f5638
1018292d:	d9 ff                	fcos
1018292f:	9b df e0             	fstsw  ax
10182932:	9e                   	sahf
10182933:	7a 1d                	jp     0x10182952
10182935:	83 3d 70 31 23 10 00 	cmp    DWORD PTR ds:0x10233170,0x0
1018293c:	0f 85 9c 8b 00 00    	jne    0x1018b4de
10182942:	ba 12 00 00 00       	mov    edx,0x12
10182947:	8d 0d 00 0c 1f 10    	lea    ecx,ds:0x101f0c00
1018294d:	e9 99 8b 00 00       	jmp    0x1018b4eb
