
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cddf0 <.text+0xccdf0>:
100cddf0:	53                   	push   ebx
100cddf1:	56                   	push   esi
100cddf2:	8b f1                	mov    esi,ecx
100cddf4:	8b 1e                	mov    ebx,DWORD PTR [esi]
100cddf6:	83 eb 01             	sub    ebx,0x1
100cddf9:	74 43                	je     0x100cde3e
100cddfb:	57                   	push   edi
100cddfc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100cde00:	f3 0f 10 44 de 08    	movss  xmm0,DWORD PTR [esi+ebx*8+0x8]
100cde06:	8d 43 ff             	lea    eax,[ebx-0x1]
100cde09:	99                   	cdq
100cde0a:	2b c2                	sub    eax,edx
100cde0c:	8b f8                	mov    edi,eax
100cde0e:	d1 ff                	sar    edi,1
100cde10:	0f 2f 44 fe 08       	comiss xmm0,DWORD PTR [esi+edi*8+0x8]
100cde15:	73 26                	jae    0x100cde3d
100cde17:	8b 4c de 04          	mov    ecx,DWORD PTR [esi+ebx*8+0x4]
100cde1b:	8b 44 fe 04          	mov    eax,DWORD PTR [esi+edi*8+0x4]
100cde1f:	8b 54 de 08          	mov    edx,DWORD PTR [esi+ebx*8+0x8]
100cde23:	89 44 de 04          	mov    DWORD PTR [esi+ebx*8+0x4],eax
100cde27:	8b 44 fe 08          	mov    eax,DWORD PTR [esi+edi*8+0x8]
100cde2b:	89 44 de 08          	mov    DWORD PTR [esi+ebx*8+0x8],eax
100cde2f:	8b df                	mov    ebx,edi
100cde31:	89 4c fe 04          	mov    DWORD PTR [esi+edi*8+0x4],ecx
100cde35:	89 54 fe 08          	mov    DWORD PTR [esi+edi*8+0x8],edx
100cde39:	85 ff                	test   edi,edi
100cde3b:	75 c3                	jne    0x100cde00
100cde3d:	5f                   	pop    edi
100cde3e:	5e                   	pop    esi
100cde3f:	5b                   	pop    ebx
100cde40:	c3                   	ret
