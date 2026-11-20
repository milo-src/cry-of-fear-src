
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e42f0 <.text+0xe32f0>:
100e42f0:	53                   	push   ebx
100e42f1:	8b d9                	mov    ebx,ecx
100e42f3:	56                   	push   esi
100e42f4:	57                   	push   edi
100e42f5:	bf 01 00 00 00       	mov    edi,0x1
100e42fa:	80 bb 9c 1e 00 00 00 	cmp    BYTE PTR [ebx+0x1e9c],0x0
100e4301:	8d b3 00 22 00 00    	lea    esi,[ebx+0x2200]
100e4307:	74 27                	je     0x100e4330
100e4309:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100e4310:	ff 36                	push   DWORD PTR [esi]
100e4312:	8b cb                	mov    ecx,ebx
100e4314:	e8 c7 0b 00 00       	call   0x100e4ee0
100e4319:	85 c0                	test   eax,eax
100e431b:	75 32                	jne    0x100e434f
100e431d:	47                   	inc    edi
100e431e:	83 c6 04             	add    esi,0x4
100e4321:	83 ff 03             	cmp    edi,0x3
100e4324:	7e ea                	jle    0x100e4310
100e4326:	5f                   	pop    edi
100e4327:	5e                   	pop    esi
100e4328:	b8 01 00 00 00       	mov    eax,0x1
100e432d:	5b                   	pop    ebx
100e432e:	c3                   	ret
