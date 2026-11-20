
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d1af0 <.text+0xd0af0>:
100d1af0:	56                   	push   esi
100d1af1:	8b f1                	mov    esi,ecx
100d1af3:	83 be f8 01 00 00 00 	cmp    DWORD PTR [esi+0x1f8],0x0
100d1afa:	75 20                	jne    0x100d1b1c
100d1afc:	e8 0f 01 00 00       	call   0x100d1c10
100d1b01:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1b07:	51                   	push   ecx
100d1b08:	8b ce                	mov    ecx,esi
100d1b0a:	f3 0f 10 80 a0 00 00 	movss  xmm0,DWORD PTR [eax+0xa0]
100d1b11:	00 
100d1b12:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d1b17:	e8 14 ed ff ff       	call   0x100d0830
100d1b1c:	8b 86 08 02 00 00    	mov    eax,DWORD PTR [esi+0x208]
100d1b22:	83 e8 00             	sub    eax,0x0
100d1b25:	74 78                	je     0x100d1b9f
100d1b27:	83 e8 01             	sub    eax,0x1
100d1b2a:	0f 85 d0 00 00 00    	jne    0x100d1c00
100d1b30:	8b 06                	mov    eax,DWORD PTR [esi]
100d1b32:	8b ce                	mov    ecx,esi
100d1b34:	ff 90 f0 01 00 00    	call   DWORD PTR [eax+0x1f0]
100d1b3a:	85 c0                	test   eax,eax
100d1b3c:	0f 84 be 00 00 00    	je     0x100d1c00
100d1b42:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1b48:	c7 86 08 02 00 00 00 	mov    DWORD PTR [esi+0x208],0x0
100d1b4f:	00 00 00 
100d1b52:	f3 0f 10 80 90 00 00 	movss  xmm0,DWORD PTR [eax+0x90]
100d1b59:	00 
100d1b5a:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100d1b61:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100d1b67:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100d1b6a:	9f                   	lahf
100d1b6b:	f6 c4 44             	test   ah,0x44
100d1b6e:	7a 08                	jp     0x100d1b78
100d1b70:	f3 0f 10 05 b0 68 22 	movss  xmm0,DWORD PTR ds:0x102268b0
100d1b77:	10 
100d1b78:	f3 0f 11 81 14 02 00 	movss  DWORD PTR [ecx+0x214],xmm0
100d1b7f:	00 
100d1b80:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1b86:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100d1b8c:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100d1b92:	83 f8 ff             	cmp    eax,0xffffffff
100d1b95:	74 62                	je     0x100d1bf9
100d1b97:	50                   	push   eax
100d1b98:	e8 43 1e 02 00       	call   0x100f39e0
100d1b9d:	5e                   	pop    esi
100d1b9e:	c3                   	ret
100d1b9f:	8b 06                	mov    eax,DWORD PTR [esi]
100d1ba1:	8b ce                	mov    ecx,esi
100d1ba3:	ff 90 f4 01 00 00    	call   DWORD PTR [eax+0x1f4]
100d1ba9:	85 c0                	test   eax,eax
100d1bab:	74 53                	je     0x100d1c00
100d1bad:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1bb3:	c7 86 08 02 00 00 01 	mov    DWORD PTR [esi+0x208],0x1
100d1bba:	00 00 00 
100d1bbd:	f3 0f 10 80 94 00 00 	movss  xmm0,DWORD PTR [eax+0x94]
100d1bc4:	00 
100d1bc5:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100d1bcc:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100d1bd2:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100d1bd5:	9f                   	lahf
100d1bd6:	f6 c4 44             	test   ah,0x44
100d1bd9:	7a 08                	jp     0x100d1be3
100d1bdb:	f3 0f 10 05 b4 68 22 	movss  xmm0,DWORD PTR ds:0x102268b4
100d1be2:	10 
100d1be3:	f3 0f 11 81 14 02 00 	movss  DWORD PTR [ecx+0x214],xmm0
100d1bea:	00 
100d1beb:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d1bf1:	8b 80 9c 00 00 00    	mov    eax,DWORD PTR [eax+0x9c]
100d1bf7:	eb 93                	jmp    0x100d1b8c
100d1bf9:	6a 64                	push   0x64
100d1bfb:	e8 e0 1d 02 00       	call   0x100f39e0
100d1c00:	5e                   	pop    esi
100d1c01:	c3                   	ret
