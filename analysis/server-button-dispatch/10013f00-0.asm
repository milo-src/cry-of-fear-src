
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10013f00 <.text+0x12f00>:
10013f00:	56                   	push   esi
10013f01:	8b f1                	mov    esi,ecx
10013f03:	57                   	push   edi
10013f04:	bf 08 00 00 00       	mov    edi,0x8
10013f09:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10013f0c:	f3 0f 10 82 70 01 00 	movss  xmm0,DWORD PTR [edx+0x170]
10013f13:	00 
10013f14:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
10013f1b:	9f                   	lahf
10013f1c:	33 c9                	xor    ecx,ecx
10013f1e:	f6 c4 44             	test   ah,0x44
10013f21:	0f 4a f9             	cmovp  edi,ecx
10013f24:	8b 4e 14             	mov    ecx,DWORD PTR [esi+0x14]
10013f27:	85 c9                	test   ecx,ecx
10013f29:	74 08                	je     0x10013f33
10013f2b:	8b 01                	mov    eax,DWORD PTR [ecx]
10013f2d:	ff 50 40             	call   DWORD PTR [eax+0x40]
10013f30:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10013f33:	8b 82 a4 01 00 00    	mov    eax,DWORD PTR [edx+0x1a4]
10013f39:	8b 8e e0 01 00 00    	mov    ecx,DWORD PTR [esi+0x1e0]
10013f3f:	83 e0 10             	and    eax,0x10
10013f42:	c1 e0 04             	shl    eax,0x4
10013f45:	f7 d9                	neg    ecx
10013f47:	1b c9                	sbb    ecx,ecx
10013f49:	81 e1 00 04 00 00    	and    ecx,0x400
10013f4f:	0b c1                	or     eax,ecx
10013f51:	0b c7                	or     eax,edi
10013f53:	5f                   	pop    edi
10013f54:	5e                   	pop    esi
10013f55:	c3                   	ret
