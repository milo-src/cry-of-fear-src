
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000ab70 <.text+0x9b70>:
1000ab70:	8b 81 30 02 00 00    	mov    eax,DWORD PTR [ecx+0x230]
1000ab76:	85 c0                	test   eax,eax
1000ab78:	74 16                	je     0x1000ab90
1000ab7a:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1000ab7d:	0d 00 00 00 c0       	or     eax,0xc0000000
1000ab82:	85 81 80 01 00 00    	test   DWORD PTR [ecx+0x180],eax
1000ab88:	75 06                	jne    0x1000ab90
1000ab8a:	b8 01 00 00 00       	mov    eax,0x1
1000ab8f:	c3                   	ret
1000ab90:	33 c0                	xor    eax,eax
1000ab92:	c3                   	ret
