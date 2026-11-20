
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101090 <.text+0x100090>:
10101090:	55                   	push   ebp
10101091:	8b ec                	mov    ebp,esp
10101093:	56                   	push   esi
10101094:	8b f1                	mov    esi,ecx
10101096:	57                   	push   edi
10101097:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
1010109d:	e8 de 66 f1 ff       	call   0x10017780
101010a2:	85 c0                	test   eax,eax
101010a4:	74 15                	je     0x101010bb
101010a6:	8b ce                	mov    ecx,esi
101010a8:	e8 33 02 00 00       	call   0x101012e0
101010ad:	85 c0                	test   eax,eax
101010af:	74 15                	je     0x101010c6
101010b1:	c7 86 9c 03 00 00 00 	mov    DWORD PTR [esi+0x39c],0x400
101010b8:	04 00 00 
101010bb:	5f                   	pop    edi
101010bc:	b8 01 00 00 00       	mov    eax,0x1
101010c1:	5e                   	pop    esi
101010c2:	5d                   	pop    ebp
101010c3:	c2 04 00             	ret    0x4
101010c6:	53                   	push   ebx
101010c7:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
101010cd:	e8 be 66 f1 ff       	call   0x10017790
101010d2:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
101010d5:	85 c0                	test   eax,eax
101010d7:	8b de                	mov    ebx,esi
101010d9:	0f 45 d8             	cmovne ebx,eax
101010dc:	8b 93 90 03 00 00    	mov    edx,DWORD PTR [ebx+0x390]
101010e2:	3b d7                	cmp    edx,edi
101010e4:	74 1f                	je     0x10101105
101010e6:	33 c9                	xor    ecx,ecx
101010e8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
101010ef:	00 
101010f0:	b8 01 00 00 00       	mov    eax,0x1
101010f5:	d3 e0                	shl    eax,cl
101010f7:	85 c7                	test   edi,eax
101010f9:	74 04                	je     0x101010ff
101010fb:	85 c2                	test   edx,eax
101010fd:	74 0f                	je     0x1010110e
101010ff:	41                   	inc    ecx
10101100:	83 f9 0b             	cmp    ecx,0xb
10101103:	7c eb                	jl     0x101010f0
10101105:	5b                   	pop    ebx
10101106:	5f                   	pop    edi
10101107:	33 c0                	xor    eax,eax
10101109:	5e                   	pop    esi
1010110a:	5d                   	pop    ebp
1010110b:	c2 04 00             	ret    0x4
1010110e:	0b d0                	or     edx,eax
10101110:	89 93 90 03 00 00    	mov    DWORD PTR [ebx+0x390],edx
10101116:	5b                   	pop    ebx
10101117:	89 86 9c 03 00 00    	mov    DWORD PTR [esi+0x39c],eax
1010111d:	b8 01 00 00 00       	mov    eax,0x1
10101122:	5f                   	pop    edi
10101123:	5e                   	pop    esi
10101124:	5d                   	pop    ebp
10101125:	c2 04 00             	ret    0x4
