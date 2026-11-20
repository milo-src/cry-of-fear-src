
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101011e0 <.text+0x1001e0>:
101011e0:	55                   	push   ebp
101011e1:	8b ec                	mov    ebp,esp
101011e3:	53                   	push   ebx
101011e4:	8b d9                	mov    ebx,ecx
101011e6:	56                   	push   esi
101011e7:	57                   	push   edi
101011e8:	33 f6                	xor    esi,esi
101011ea:	8d bb 70 03 00 00    	lea    edi,[ebx+0x370]
101011f0:	8b cf                	mov    ecx,edi
101011f2:	e8 89 65 f1 ff       	call   0x10017780
101011f7:	85 c0                	test   eax,eax
101011f9:	74 12                	je     0x1010120d
101011fb:	46                   	inc    esi
101011fc:	83 c7 08             	add    edi,0x8
101011ff:	83 fe 04             	cmp    esi,0x4
10101202:	7c ec                	jl     0x101011f0
10101204:	5f                   	pop    edi
10101205:	5e                   	pop    esi
10101206:	33 c0                	xor    eax,eax
10101208:	5b                   	pop    ebx
10101209:	5d                   	pop    ebp
1010120a:	c2 04 00             	ret    0x4
1010120d:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10101210:	8b cf                	mov    ecx,edi
10101212:	56                   	push   esi
10101213:	e8 28 65 f1 ff       	call   0x10017740
10101218:	53                   	push   ebx
10101219:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
1010121f:	e8 1c 65 f1 ff       	call   0x10017740
10101224:	5f                   	pop    edi
10101225:	5e                   	pop    esi
10101226:	b8 01 00 00 00       	mov    eax,0x1
1010122b:	5b                   	pop    ebx
1010122c:	5d                   	pop    ebp
1010122d:	c2 04 00             	ret    0x4
