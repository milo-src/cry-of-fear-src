
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ceaa0 <.text+0xcdaa0>:
100ceaa0:	55                   	push   ebp
100ceaa1:	8b ec                	mov    ebp,esp
100ceaa3:	83 ec 08             	sub    esp,0x8
100ceaa6:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
100ceaa9:	0f 57 c0             	xorps  xmm0,xmm0
100ceaac:	81 e2 40 03 00 00    	and    edx,0x340
100ceab2:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100ceab5:	53                   	push   ebx
100ceab6:	8b 59 18             	mov    ebx,DWORD PTR [ecx+0x18]
100ceab9:	f7 da                	neg    edx
100ceabb:	56                   	push   esi
100ceabc:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ceabf:	1b d2                	sbb    edx,edx
100ceac1:	57                   	push   edi
100ceac2:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100ceac5:	f7 da                	neg    edx
100ceac7:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100ceacc:	89 55 14             	mov    DWORD PTR [ebp+0x14],edx
100ceacf:	3b f7                	cmp    esi,edi
100cead1:	74 56                	je     0x100ceb29
100cead3:	8b c3                	mov    eax,ebx
100cead5:	4b                   	dec    ebx
100cead6:	85 c0                	test   eax,eax
100cead8:	7e 7b                	jle    0x100ceb55
100ceada:	52                   	push   edx
100ceadb:	ff 75 10             	push   DWORD PTR [ebp+0x10]
100ceade:	57                   	push   edi
100ceadf:	56                   	push   esi
100ceae0:	e8 4b fd ff ff       	call   0x100ce830
100ceae5:	8b f8                	mov    edi,eax
100ceae7:	3b f7                	cmp    esi,edi
100ceae9:	74 7a                	je     0x100ceb65
100ceaeb:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ceaee:	8d 45 08             	lea    eax,[ebp+0x8]
100ceaf1:	50                   	push   eax
100ceaf2:	57                   	push   edi
100ceaf3:	56                   	push   esi
100ceaf4:	e8 b7 f1 ff ff       	call   0x100cdcb0
100ceaf9:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100ceafc:	85 c0                	test   eax,eax
100ceafe:	78 35                	js     0x100ceb35
100ceb00:	3b 7d 0c             	cmp    edi,DWORD PTR [ebp+0xc]
100ceb03:	8d 0c 40             	lea    ecx,[eax+eax*2]
100ceb06:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100ceb09:	8b f7                	mov    esi,edi
100ceb0b:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
100ceb0e:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100ceb11:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100ceb14:	f3 0f 10 44 c8 14    	movss  xmm0,DWORD PTR [eax+ecx*8+0x14]
100ceb1a:	f3 0f 58 45 f8       	addss  xmm0,DWORD PTR [ebp-0x8]
100ceb1f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ceb22:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100ceb27:	75 aa                	jne    0x100cead3
100ceb29:	d9 45 f8             	fld    DWORD PTR [ebp-0x8]
100ceb2c:	5f                   	pop    edi
100ceb2d:	5e                   	pop    esi
100ceb2e:	5b                   	pop    ebx
100ceb2f:	8b e5                	mov    esp,ebp
100ceb31:	5d                   	pop    ebp
100ceb32:	c2 10 00             	ret    0x10
100ceb35:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100ceb38:	50                   	push   eax
100ceb39:	56                   	push   esi
100ceb3a:	68 e0 67 1d 10       	push   0x101d67e0
100ceb3f:	6a 01                	push   0x1
100ceb41:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ceb47:	d9 ee                	fldz
100ceb49:	83 c4 10             	add    esp,0x10
100ceb4c:	5f                   	pop    edi
100ceb4d:	5e                   	pop    esi
100ceb4e:	5b                   	pop    ebx
100ceb4f:	8b e5                	mov    esp,ebp
100ceb51:	5d                   	pop    ebp
100ceb52:	c2 10 00             	ret    0x10
100ceb55:	68 d0 67 1d 10       	push   0x101d67d0
100ceb5a:	6a 01                	push   0x1
100ceb5c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ceb62:	83 c4 08             	add    esp,0x8
100ceb65:	d9 ee                	fldz
100ceb67:	5f                   	pop    edi
100ceb68:	5e                   	pop    esi
100ceb69:	5b                   	pop    ebx
100ceb6a:	8b e5                	mov    esp,ebp
100ceb6c:	5d                   	pop    ebp
100ceb6d:	c2 10 00             	ret    0x10
