
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10047a70 <.text+0x46a70>:
10047a70:	55                   	push   ebp
10047a71:	8b ec                	mov    ebp,esp
10047a73:	83 ec 0c             	sub    esp,0xc
10047a76:	56                   	push   esi
10047a77:	6a 00                	push   0x0
10047a79:	68 ff 00 00 00       	push   0xff
10047a7e:	83 ec 08             	sub    esp,0x8
10047a81:	c7 45 f4 00 00 00 43 	mov    DWORD PTR [ebp-0xc],0x43000000
10047a88:	8b f1                	mov    esi,ecx
10047a8a:	c7 45 f8 00 00 00 43 	mov    DWORD PTR [ebp-0x8],0x43000000
10047a91:	8d 45 f4             	lea    eax,[ebp-0xc]
10047a94:	c7 45 fc 00 00 00 43 	mov    DWORD PTR [ebp-0x4],0x43000000
10047a9b:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
10047aa2:	00 
10047aa3:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
10047aaa:	50                   	push   eax
10047aab:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
10047ab1:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
10047ab8:	c7 86 48 01 00 00 00 	mov    DWORD PTR [esi+0x148],0x0
10047abf:	00 00 00 
10047ac2:	c7 86 40 01 00 00 00 	mov    DWORD PTR [esi+0x140],0x0
10047ac9:	00 00 00 
10047acc:	e8 2f 21 0d 00       	call   0x10119c00
10047ad1:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10047ad7:	83 c4 18             	add    esp,0x18
10047ada:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10047add:	f3 0f 10 81 60 02 00 	movss  xmm0,DWORD PTR [ecx+0x260]
10047ae4:	00 
10047ae5:	0f 2e 05 e0 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1ee0
10047aec:	9f                   	lahf
10047aed:	f6 c4 44             	test   ah,0x44
10047af0:	7a 0a                	jp     0x10047afc
10047af2:	c7 81 60 02 00 00 00 	mov    DWORD PTR [ecx+0x260],0x0
10047af9:	00 00 00 
10047afc:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10047b03:	8b ce                	mov    ecx,esi
10047b05:	8b 06                	mov    eax,DWORD PTR [esi]
10047b07:	6a 00                	push   0x0
10047b09:	6a 01                	push   0x1
10047b0b:	74 04                	je     0x10047b11
10047b0d:	6a 06                	push   0x6
10047b0f:	eb 02                	jmp    0x10047b13
10047b11:	6a 07                	push   0x7
10047b13:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
10047b19:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047b1e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10047b22:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
10047b29:	10 
10047b2a:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10047b30:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
10047b37:	00 
10047b38:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047b3d:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10047b41:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
10047b48:	10 
10047b49:	f3 0f 11 86 d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm0
10047b50:	00 
10047b51:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10047b58:	00 
10047b59:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10047b60:	00 
10047b61:	5e                   	pop    esi
10047b62:	8b e5                	mov    esp,ebp
10047b64:	5d                   	pop    ebp
10047b65:	c3                   	ret
