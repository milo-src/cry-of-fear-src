
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bdf30 <.text+0xbcf30>:
100bdf30:	8b 81 bc 02 00 00    	mov    eax,DWORD PTR [ecx+0x2bc]
100bdf36:	03 c0                	add    eax,eax
100bdf38:	83 bc c1 44 02 00 00 	cmp    DWORD PTR [ecx+eax*8+0x244],0x0
100bdf3f:	00 
100bdf40:	74 0c                	je     0x100bdf4e
100bdf42:	83 b9 b8 02 00 00 00 	cmp    DWORD PTR [ecx+0x2b8],0x0
100bdf49:	74 03                	je     0x100bdf4e
100bdf4b:	33 c0                	xor    eax,eax
100bdf4d:	c3                   	ret
100bdf4e:	b8 01 00 00 00       	mov    eax,0x1
100bdf53:	c3                   	ret
