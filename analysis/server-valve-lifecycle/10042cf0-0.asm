
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10042cf0 <.text+0x41cf0>:
10042cf0:	55                   	push   ebp
10042cf1:	8b ec                	mov    ebp,esp
10042cf3:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
10042cf7:	56                   	push   esi
10042cf8:	8b f1                	mov    esi,ecx
10042cfa:	0f 84 96 00 00 00    	je     0x10042d96
10042d00:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10042d03:	8b 91 f8 01 00 00    	mov    edx,DWORD PTR [ecx+0x1f8]
10042d09:	85 d2                	test   edx,edx
10042d0b:	74 34                	je     0x10042d41
10042d0d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042d12:	6a 64                	push   0x64
10042d14:	6a 00                	push   0x0
10042d16:	83 ec 08             	sub    esp,0x8
10042d19:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10042d1f:	03 c2                	add    eax,edx
10042d21:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10042d28:	3f 
10042d29:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10042d30:	50                   	push   eax
10042d31:	6a 04                	push   0x4
10042d33:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10042d39:	e8 b2 9c 0b 00       	call   0x100fc9f0
10042d3e:	83 c4 1c             	add    esp,0x1c
10042d41:	8b 8e 88 01 00 00    	mov    ecx,DWORD PTR [esi+0x188]
10042d47:	85 c9                	test   ecx,ecx
10042d49:	74 1d                	je     0x10042d68
10042d4b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10042d50:	6a 00                	push   0x0
10042d52:	6a 05                	push   0x5
10042d54:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10042d5a:	03 c1                	add    eax,ecx
10042d5c:	50                   	push   eax
10042d5d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10042d60:	e8 ab 6a 0d 00       	call   0x10119810
10042d65:	83 c4 10             	add    esp,0x10
10042d68:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042d6b:	c7 80 4c 01 00 00 00 	mov    DWORD PTR [eax+0x14c],0x0
10042d72:	00 00 00 
10042d75:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10042d78:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x437f0000
10042d7f:	00 7f 43 
10042d82:	c7 86 80 01 00 00 00 	mov    DWORD PTR [esi+0x180],0x0
10042d89:	00 00 00 
10042d8c:	c7 86 84 01 00 00 00 	mov    DWORD PTR [esi+0x184],0x0
10042d93:	00 00 00 
10042d96:	5e                   	pop    esi
10042d97:	5d                   	pop    ebp
10042d98:	c2 04 00             	ret    0x4
