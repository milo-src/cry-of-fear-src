
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047c00 <.text+0x46c00>:
10047c00:	55                   	push   ebp
10047c01:	8b ec                	mov    ebp,esp
10047c03:	51                   	push   ecx
10047c04:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047c09:	56                   	push   esi
10047c0a:	8b f1                	mov    esi,ecx
10047c0c:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
10047c10:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
10047c17:	00 
10047c18:	0f 2f c1             	comiss xmm0,xmm1
10047c1b:	0f 87 95 00 00 00    	ja     0x10047cb6
10047c21:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
10047c28:	00 
10047c29:	0f 2f c1             	comiss xmm0,xmm1
10047c2c:	0f 87 84 00 00 00    	ja     0x10047cb6
10047c32:	f3 0f 10 86 d4 01 00 	movss  xmm0,DWORD PTR [esi+0x1d4]
10047c39:	00 
10047c3a:	0f 2f c1             	comiss xmm0,xmm1
10047c3d:	77 77                	ja     0x10047cb6
10047c3f:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10047c46:	75 6e                	jne    0x10047cb6
10047c48:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
10047c4f:	75 65                	jne    0x10047cb6
10047c51:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10047c57:	f6 80 b0 22 00 00 40 	test   BYTE PTR [eax+0x22b0],0x40
10047c5e:	74 56                	je     0x10047cb6
10047c60:	68 8c ec 1a 10       	push   0x101aec8c
10047c65:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
10047c6b:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
10047c6e:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10047c73:	83 c4 04             	add    esp,0x4
10047c76:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
10047c7d:	9f                   	lahf
10047c7e:	f6 c4 44             	test   ah,0x44
10047c81:	7a 09                	jp     0x10047c8c
10047c83:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
10047c8a:	75 2a                	jne    0x10047cb6
10047c8c:	8a 8e 78 01 00 00    	mov    cl,BYTE PTR [esi+0x178]
10047c92:	84 c9                	test   cl,cl
10047c94:	0f 94 c0             	sete   al
10047c97:	84 c9                	test   cl,cl
10047c99:	88 86 78 01 00 00    	mov    BYTE PTR [esi+0x178],al
10047c9f:	8b ce                	mov    ecx,esi
10047ca1:	8b 06                	mov    eax,DWORD PTR [esi]
10047ca3:	75 0b                	jne    0x10047cb0
10047ca5:	ff 90 2c 01 00 00    	call   DWORD PTR [eax+0x12c]
10047cab:	5e                   	pop    esi
10047cac:	8b e5                	mov    esp,ebp
10047cae:	5d                   	pop    ebp
10047caf:	c3                   	ret
10047cb0:	ff 90 30 01 00 00    	call   DWORD PTR [eax+0x130]
10047cb6:	5e                   	pop    esi
10047cb7:	8b e5                	mov    esp,ebp
10047cb9:	5d                   	pop    ebp
10047cba:	c3                   	ret
