
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fab90 <.text+0xf9b90>:
100fab90:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100fab93:	83 b8 74 01 00 00 01 	cmp    DWORD PTR [eax+0x174],0x1
100fab9a:	75 0d                	jne    0x100faba9
100fab9c:	c7 81 28 02 00 00 08 	mov    DWORD PTR [ecx+0x228],0x8
100faba3:	00 00 00 
100faba6:	33 c0                	xor    eax,eax
100faba8:	c3                   	ret
100faba9:	8b 89 4c 03 00 00    	mov    ecx,DWORD PTR [ecx+0x34c]
100fabaf:	85 c9                	test   ecx,ecx
100fabb1:	74 05                	je     0x100fabb8
100fabb3:	e8 f8 f8 ff ff       	call   0x100fa4b0
100fabb8:	b8 01 00 00 00       	mov    eax,0x1
100fabbd:	c3                   	ret
