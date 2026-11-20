
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d0860 <.text+0xcf860>:
100d0860:	56                   	push   esi
100d0861:	8b f1                	mov    esi,ecx
100d0863:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d0869:	c7 86 08 02 00 00 00 	mov    DWORD PTR [esi+0x208],0x0
100d0870:	00 00 00 
100d0873:	85 c0                	test   eax,eax
100d0875:	75 26                	jne    0x100d089d
100d0877:	e8 94 13 00 00       	call   0x100d1c10
100d087c:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d0882:	51                   	push   ecx
100d0883:	8b ce                	mov    ecx,esi
100d0885:	f3 0f 10 80 a0 00 00 	movss  xmm0,DWORD PTR [eax+0xa0]
100d088c:	00 
100d088d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100d0892:	e8 99 ff ff ff       	call   0x100d0830
100d0897:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d089d:	f3 0f 10 80 90 00 00 	movss  xmm0,DWORD PTR [eax+0x90]
100d08a4:	00 
100d08a5:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100d08ac:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100d08b2:	9f                   	lahf
100d08b3:	f6 c4 44             	test   ah,0x44
100d08b6:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100d08b9:	7a 08                	jp     0x100d08c3
100d08bb:	f3 0f 10 05 b0 68 22 	movss  xmm0,DWORD PTR ds:0x102268b0
100d08c2:	10 
100d08c3:	f3 0f 11 80 14 02 00 	movss  DWORD PTR [eax+0x214],xmm0
100d08ca:	00 
100d08cb:	b9 64 00 00 00       	mov    ecx,0x64
100d08d0:	8b 86 f8 01 00 00    	mov    eax,DWORD PTR [esi+0x1f8]
100d08d6:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100d08dc:	83 f8 ff             	cmp    eax,0xffffffff
100d08df:	0f 45 c8             	cmovne ecx,eax
100d08e2:	51                   	push   ecx
100d08e3:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100d08e9:	e8 f2 30 02 00       	call   0x100f39e0
100d08ee:	5e                   	pop    esi
100d08ef:	c3                   	ret
