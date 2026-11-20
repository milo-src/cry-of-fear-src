
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101829ff <.text+0x1819ff>:
101829ff:	8d 54 24 04          	lea    edx,[esp+0x4]
10182a03:	e8 7d 8a 00 00       	call   0x1018b485
10182a08:	52                   	push   edx
10182a09:	9b d9 3c 24          	fstcw  WORD PTR [esp]
10182a0d:	74 49                	je     0x10182a58
10182a0f:	66 81 3c 24 7f 02    	cmp    WORD PTR [esp],0x27f
10182a15:	74 06                	je     0x10182a1d
10182a17:	d9 2d 38 56 1f 10    	fldcw  WORD PTR ds:0x101f5638
10182a1d:	d9 fe                	fsin
10182a1f:	9b df e0             	fstsw  ax
10182a22:	9e                   	sahf
10182a23:	7a 1d                	jp     0x10182a42
10182a25:	83 3d 70 31 23 10 00 	cmp    DWORD PTR ds:0x10233170,0x0
10182a2c:	0f 85 ac 8a 00 00    	jne    0x1018b4de
10182a32:	ba 1e 00 00 00       	mov    edx,0x1e
10182a37:	8d 0d 10 14 1f 10    	lea    ecx,ds:0x101f1410
10182a3d:	e9 a9 8a 00 00       	jmp    0x1018b4eb
