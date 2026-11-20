
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000dfa0 <.text+0xcfa0>:
1000dfa0:	56                   	push   esi
1000dfa1:	8b f1                	mov    esi,ecx
1000dfa3:	8b 06                	mov    eax,DWORD PTR [esi]
1000dfa5:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
1000dfab:	85 c0                	test   eax,eax
1000dfad:	74 1f                	je     0x1000dfce
1000dfaf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000dfb2:	f3 0f 10 80 70 01 00 	movss  xmm0,DWORD PTR [eax+0x170]
1000dfb9:	00 
1000dfba:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1000dfc1:	9f                   	lahf
1000dfc2:	f6 c4 44             	test   ah,0x44
1000dfc5:	7a 07                	jp     0x1000dfce
1000dfc7:	b8 01 00 00 00       	mov    eax,0x1
1000dfcc:	5e                   	pop    esi
1000dfcd:	c3                   	ret
1000dfce:	33 c0                	xor    eax,eax
1000dfd0:	5e                   	pop    esi
1000dfd1:	c3                   	ret
