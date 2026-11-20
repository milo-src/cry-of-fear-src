
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012d00 <.text+0x11d00>:
10012d00:	8b 81 00 01 00 00    	mov    eax,DWORD PTR [ecx+0x100]
10012d06:	83 f8 02             	cmp    eax,0x2
10012d09:	74 3b                	je     0x10012d46
10012d0b:	83 f8 03             	cmp    eax,0x3
10012d0e:	74 36                	je     0x10012d46
10012d10:	85 c0                	test   eax,eax
10012d12:	75 2c                	jne    0x10012d40
10012d14:	8b 91 a8 01 00 00    	mov    edx,DWORD PTR [ecx+0x1a8]
10012d1a:	85 d2                	test   edx,edx
10012d1c:	75 0c                	jne    0x10012d2a
10012d1e:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10012d21:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
10012d28:	74 1c                	je     0x10012d46
10012d2a:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10012d2d:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
10012d34:	74 10                	je     0x10012d46
10012d36:	85 d2                	test   edx,edx
10012d38:	75 0c                	jne    0x10012d46
10012d3a:	b8 02 00 00 00       	mov    eax,0x2
10012d3f:	c3                   	ret
10012d40:	b8 01 00 00 00       	mov    eax,0x1
10012d45:	c3                   	ret
10012d46:	33 c0                	xor    eax,eax
10012d48:	c3                   	ret
