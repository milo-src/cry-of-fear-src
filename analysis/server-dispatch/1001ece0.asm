
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001ece0 <.text+0x1dce0>:
1001ece0:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1001ece6:	85 c9                	test   ecx,ecx
1001ece8:	74 05                	je     0x1001ecef
1001ecea:	8b 01                	mov    eax,DWORD PTR [ecx]
1001ecec:	ff 50 04             	call   DWORD PTR [eax+0x4]
1001ecef:	83 3d 04 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f04,0x0
1001ecf6:	75 1d                	jne    0x1001ed15
1001ecf8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001ecfd:	f3 0f 10 05 08 46 21 	movss  xmm0,DWORD PTR ds:0x10214608
1001ed04:	10 
1001ed05:	f3 0f 11 40 1c       	movss  DWORD PTR [eax+0x1c],xmm0
1001ed0a:	ff 05 f0 2e 22 10    	inc    DWORD PTR ds:0x10222ef0
1001ed10:	e9 ab 53 0a 00       	jmp    0x100c40c0
1001ed15:	c3                   	ret
