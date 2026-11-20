
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10053bc0 <.text+0x52bc0>:
10053bc0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053bc5:	56                   	push   esi
10053bc6:	8b f1                	mov    esi,ecx
10053bc8:	b9 50 de 1a 10       	mov    ecx,0x101ade50
10053bcd:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10053bd3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10053bd6:	89 08                	mov    DWORD PTR [eax],ecx
10053bd8:	8b ce                	mov    ecx,esi
10053bda:	8b 06                	mov    eax,DWORD PTR [esi]
10053bdc:	ff 50 30             	call   DWORD PTR [eax+0x30]
10053bdf:	8b 8e 70 01 00 00    	mov    ecx,DWORD PTR [esi+0x170]
10053be5:	c7 86 68 01 00 00 02 	mov    DWORD PTR [esi+0x168],0x2
10053bec:	00 00 00 
10053bef:	85 c9                	test   ecx,ecx
10053bf1:	74 10                	je     0x10053c03
10053bf3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053bf8:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10053bfe:	03 c1                	add    eax,ecx
10053c00:	50                   	push   eax
10053c01:	eb 05                	jmp    0x10053c08
10053c03:	68 a0 28 1b 10       	push   0x101b28a0
10053c08:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10053c0b:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10053c11:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
10053c17:	83 c4 08             	add    esp,0x8
10053c1a:	c7 86 e4 01 00 00 ff 	mov    DWORD PTR [esi+0x1e4],0xffffffff
10053c21:	ff ff ff 
10053c24:	8b ce                	mov    ecx,esi
10053c26:	e8 25 95 0c 00       	call   0x1011d150
10053c2b:	83 be 10 01 00 00 00 	cmp    DWORD PTR [esi+0x110],0x0
10053c32:	c7 86 58 01 00 00 12 	mov    DWORD PTR [esi+0x158],0x12
10053c39:	00 00 00 
10053c3c:	c7 86 5c 01 00 00 15 	mov    DWORD PTR [esi+0x15c],0x15
10053c43:	00 00 00 
10053c46:	75 20                	jne    0x10053c68
10053c48:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
10053c4f:	00 
10053c50:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053c55:	b9 c4 28 1b 10       	mov    ecx,0x101b28c4
10053c5a:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10053c60:	89 8e 10 01 00 00    	mov    DWORD PTR [esi+0x110],ecx
10053c66:	74 e8                	je     0x10053c50
10053c68:	8b 86 74 01 00 00    	mov    eax,DWORD PTR [esi+0x174]
10053c6e:	85 c0                	test   eax,eax
10053c70:	74 06                	je     0x10053c78
10053c72:	89 86 10 01 00 00    	mov    DWORD PTR [esi+0x110],eax
10053c78:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053c7d:	b9 a0 28 1b 10       	mov    ecx,0x101b28a0
10053c82:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10053c88:	89 8e 0c 01 00 00    	mov    DWORD PTR [esi+0x10c],ecx
10053c8e:	5e                   	pop    esi
10053c8f:	c3                   	ret
