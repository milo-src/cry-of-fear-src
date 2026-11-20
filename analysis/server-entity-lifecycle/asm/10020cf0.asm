
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10020cf0 <.text+0x1fcf0>:
10020cf0:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10020cf3:	8b 88 b8 00 00 00    	mov    ecx,DWORD PTR [eax+0xb8]
10020cf9:	85 c9                	test   ecx,ecx
10020cfb:	74 15                	je     0x10020d12
10020cfd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10020d02:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10020d08:	03 c1                	add    eax,ecx
10020d0a:	50                   	push   eax
10020d0b:	e8 80 5c 0f 00       	call   0x10116990
10020d10:	59                   	pop    ecx
10020d11:	c3                   	ret
10020d12:	b8 f4 9a 1a 10       	mov    eax,0x101a9af4
10020d17:	50                   	push   eax
10020d18:	e8 73 5c 0f 00       	call   0x10116990
10020d1d:	59                   	pop    ecx
10020d1e:	c3                   	ret
