
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000bbf0 <.text+0xabf0>:
1000bbf0:	55                   	push   ebp
1000bbf1:	8b ec                	mov    ebp,esp
1000bbf3:	51                   	push   ecx
1000bbf4:	56                   	push   esi
1000bbf5:	8b f1                	mov    esi,ecx
1000bbf7:	e8 24 31 0b 00       	call   0x100bed20
1000bbfc:	f3 0f 10 05 c4 22 1a 	movss  xmm0,DWORD PTR ds:0x101a22c4
1000bc03:	10 
1000bc04:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1000bc07:	0f 2f 45 fc          	comiss xmm0,DWORD PTR [ebp-0x4]
1000bc0b:	72 1d                	jb     0x1000bc2a
1000bc0d:	6a 10                	push   0x10
1000bc0f:	8b ce                	mov    ecx,esi
1000bc11:	e8 3a 2d 00 00       	call   0x1000e950
1000bc16:	83 f8 ff             	cmp    eax,0xffffffff
1000bc19:	74 0f                	je     0x1000bc2a
1000bc1b:	c7 86 18 02 00 00 10 	mov    DWORD PTR [esi+0x218],0x10
1000bc22:	00 00 00 
1000bc25:	5e                   	pop    esi
1000bc26:	8b e5                	mov    esp,ebp
1000bc28:	5d                   	pop    ebp
1000bc29:	c3                   	ret
1000bc2a:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1000bc2f:	0f 2f 05 b8 22 1a 10 	comiss xmm0,DWORD PTR ds:0x101a22b8
1000bc36:	76 18                	jbe    0x1000bc50
1000bc38:	6a 0f                	push   0xf
1000bc3a:	8b ce                	mov    ecx,esi
1000bc3c:	e8 0f 2d 00 00       	call   0x1000e950
1000bc41:	83 f8 ff             	cmp    eax,0xffffffff
1000bc44:	74 0a                	je     0x1000bc50
1000bc46:	c7 86 18 02 00 00 0f 	mov    DWORD PTR [esi+0x218],0xf
1000bc4d:	00 00 00 
1000bc50:	5e                   	pop    esi
1000bc51:	8b e5                	mov    esp,ebp
1000bc53:	5d                   	pop    ebp
1000bc54:	c3                   	ret
