
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10045ac0 <.text+0x44ac0>:
10045ac0:	55                   	push   ebp
10045ac1:	8b ec                	mov    ebp,esp
10045ac3:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10045ac6:	8b 10                	mov    edx,DWORD PTR [eax]
10045ac8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10045acd:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
10045ad3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10045ad6:	89 50 18             	mov    DWORD PTR [eax+0x18],edx
10045ad9:	c7 40 08 18 df 1a 10 	mov    DWORD PTR [eax+0x8],0x101adf18
10045ae0:	c7 40 0c 96 00 00 00 	mov    DWORD PTR [eax+0xc],0x96
10045ae7:	c7 40 10 00 00 00 00 	mov    DWORD PTR [eax+0x10],0x0
10045aee:	c7 40 14 ff ff ff ff 	mov    DWORD PTR [eax+0x14],0xffffffff
10045af5:	c7 40 1c 0f 00 00 00 	mov    DWORD PTR [eax+0x1c],0xf
10045afc:	c7 00 04 00 00 00    	mov    DWORD PTR [eax],0x4
10045b02:	c7 40 04 00 00 00 00 	mov    DWORD PTR [eax+0x4],0x0
10045b09:	c7 40 24 00 00 00 00 	mov    DWORD PTR [eax+0x24],0x0
10045b10:	c7 81 68 01 00 00 03 	mov    DWORD PTR [ecx+0x168],0x3
10045b17:	00 00 00 
10045b1a:	c7 40 20 03 00 00 00 	mov    DWORD PTR [eax+0x20],0x3
10045b21:	c7 40 28 05 00 00 00 	mov    DWORD PTR [eax+0x28],0x5
10045b28:	b8 01 00 00 00       	mov    eax,0x1
10045b2d:	5d                   	pop    ebp
10045b2e:	c2 04 00             	ret    0x4
