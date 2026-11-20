
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c8aa0 <.text+0xc7aa0>:
100c8aa0:	55                   	push   ebp
100c8aa1:	8b ec                	mov    ebp,esp
100c8aa3:	51                   	push   ecx
100c8aa4:	83 3d 04 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f04,0x0
100c8aab:	56                   	push   esi
100c8aac:	8b f1                	mov    esi,ecx
100c8aae:	0f 85 a4 00 00 00    	jne    0x100c8b58
100c8ab4:	6a 00                	push   0x0
100c8ab6:	6a 00                	push   0x0
100c8ab8:	6a 1e                	push   0x1e
100c8aba:	6a 02                	push   0x2
100c8abc:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100c8ac2:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100c8ac8:	68 f8 b6 1c 10       	push   0x101cb6f8
100c8acd:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100c8ad3:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100c8ad6:	f3 0f 2c 45 fc       	cvttss2si eax,DWORD PTR [ebp-0x4]
100c8adb:	83 c4 14             	add    esp,0x14
100c8ade:	83 f8 01             	cmp    eax,0x1
100c8ae1:	7d 15                	jge    0x100c8af8
100c8ae3:	68 f4 e9 1b 10       	push   0x101be9f4
100c8ae8:	68 f8 b6 1c 10       	push   0x101cb6f8
100c8aed:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
100c8af3:	83 c4 08             	add    esp,0x8
100c8af6:	eb 1b                	jmp    0x100c8b13
100c8af8:	83 f8 78             	cmp    eax,0x78
100c8afb:	7e 16                	jle    0x100c8b13
100c8afd:	6a 78                	push   0x78
100c8aff:	e8 2c 20 05 00       	call   0x1011ab30
100c8b04:	50                   	push   eax
100c8b05:	68 f8 b6 1c 10       	push   0x101cb6f8
100c8b0a:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
100c8b10:	83 c4 0c             	add    esp,0xc
100c8b13:	f3 0f 2c 05 b0 48 21 	cvttss2si eax,DWORD PTR ds:0x102148b0
100c8b1a:	10 
100c8b1b:	66 0f 6e c0          	movd   xmm0,eax
100c8b1f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c8b24:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100c8b27:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
100c8b2b:	f3 0f 11 86 dc 00 00 	movss  DWORD PTR [esi+0xdc],xmm0
100c8b32:	00 
100c8b33:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c8b38:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c8b3c:	f3 0f 11 05 98 31 22 	movss  DWORD PTR ds:0x10223198,xmm0
100c8b43:	10 
100c8b44:	c7 05 04 2f 22 10 01 	mov    DWORD PTR ds:0x10222f04,0x1
100c8b4b:	00 00 00 
100c8b4e:	c7 86 e0 00 00 00 00 	mov    DWORD PTR [esi+0xe0],0x0
100c8b55:	00 00 00 
100c8b58:	5e                   	pop    esi
100c8b59:	8b e5                	mov    esp,ebp
100c8b5b:	5d                   	pop    ebp
100c8b5c:	c3                   	ret
