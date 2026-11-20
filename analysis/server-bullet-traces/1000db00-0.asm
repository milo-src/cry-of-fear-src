
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000db00 <.text+0xcb00>:
1000db00:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1000db03:	83 b8 0c 01 00 00 04 	cmp    DWORD PTR [eax+0x10c],0x4
1000db0a:	74 0c                	je     0x1000db18
1000db0c:	83 b8 08 01 00 00 0d 	cmp    DWORD PTR [eax+0x108],0xd
1000db13:	74 03                	je     0x1000db18
1000db15:	33 c0                	xor    eax,eax
1000db17:	c3                   	ret
1000db18:	b8 01 00 00 00       	mov    eax,0x1
1000db1d:	c3                   	ret
