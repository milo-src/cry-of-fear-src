
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100061b0 <.text+0x51b0>:
100061b0:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100061b5:	83 b8 e4 00 00 00 01 	cmp    DWORD PTR [eax+0xe4],0x1
100061bc:	7e 0f                	jle    0x100061cd
100061be:	83 b8 e8 00 00 00 ed 	cmp    DWORD PTR [eax+0xe8],0xffffffed
100061c5:	74 06                	je     0x100061cd
100061c7:	b8 01 00 00 00       	mov    eax,0x1
100061cc:	c3                   	ret
100061cd:	33 c0                	xor    eax,eax
100061cf:	c3                   	ret
